#ifndef LEITER_H_FILE
#define LEITER_H_FILE

#include "IMitarbeiter.h"
#include <vector>
#include <memory>
#include <iostream>
typedef std::vector<std::shared_ptr<IMitarbeiter>> MitarbeiterList;

class Leiter : public IMitarbeiter
{
    float bonus;
    MitarbeiterList maList;

    public:
        Leiter(std::string& name, float gehalt, float bonus) : IMitarbeiter(name, gehalt), bonus(bonus) {}
        Leiter(const char* name, float gehalt, float bonus) : IMitarbeiter(name, gehalt), bonus(bonus) {}

        void add(std::shared_ptr<IMitarbeiter> ma) { maList.emplace_back(ma); }

        virtual float calculateCelery() const override
        {
            float sum = bonus + gehalt;
            for(const auto ma : maList)
            {
                sum += ma->calculateCelery();
            }
            return sum;
        }

};

#endif