#include <memory>
#include <vector>
#include <iostream>

class Abspieler;

class IState
{
    public:
        virtual ~IState() = default;
        virtual void addTitle(std::string& title, Abspieler* abspieler) {}
        virtual void stopAndEmptyQueue(Abspieler* abspieler) {}
        virtual void pause(Abspieler* abspieler) {}
        virtual void resume(Abspieler* abspieler) {}
};

class Abspieler
{
    std::shared_ptr<IState> currentState;
    std::vector<std::string> queue;

    public:
        Abspieler() = default;
        virtual ~Abspieler() = default;
        void addTitle(std::string& title) { currentState->addTitle(title, this); }
        void stopAndEmptyQueue() { currentState->stopAndEmptyQueue(this); }
        void pause() { currentState->pause(this); }
        void resume() { currentState->resume(this); }
        void changeState(std::shared_ptr<IState> newState) { currentState = newState; }
        void addToQueue(std::string& item) { queue.emplace_back(item); }
        void printQueue()
        {
            for(const auto& item : queue)
            {
                std::cout << item << std::endl;
            }
        }
};

class Spielend : public IState
{
    public:
        virtual void addTitle(std::string& title, Abspieler* abspieler) override
        {
            abspieler->addToQueue(title);
        }
};

class Unterbrochen : public IState
{
    public:
        virtual void addTitle(std::string& title, Abspieler* abspieler) override { abspieler->addToQueue(title); abspieler->changeState(std::make_shared<Spielend>()); }
};


class Pausenmusik : public IState
{
    public:
        virtual void addTitle(std::string& title, Abspieler* abspieler) override {}
        virtual void stopAndEmptyQueue(Abspieler* abspieler) override {}
        virtual void pause(Abspieler* abspieler) override {}
        virtual void resume(Abspieler* abspieler) override {}
};

int main()
{  
    std::string title("NeuerTitel");
    std::shared_ptr<Abspieler> abspieler = std::make_shared<Abspieler>();
    abspieler->changeState(std::move(std::make_shared<Unterbrochen>()));
    abspieler->addTitle(title);
    abspieler->printQueue();
    return 0;
}