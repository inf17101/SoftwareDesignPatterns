#ifndef IMITARBEITER_H_FILE
#define IMITARBEITER_H_FILE

#include <string>

class IMitarbeiter
{
    protected:
        std::string name;
        float gehalt;

    public:
        IMitarbeiter(std::string& name, float gehalt) : name(name), gehalt(gehalt) {}
        IMitarbeiter(const char* name, float gehalt) : name(name), gehalt(gehalt) {}
        ~IMitarbeiter() = default;
        virtual float calculateCelery() const = 0;
};

#endif