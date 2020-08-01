#ifndef EINFACHER_MITARBEITER_H_FILE
#define EINFACHER_MITARBEITER_H_FILE

#include "IMitarbeiter.h"

class EinfacherMitarbeiter : public IMitarbeiter
{
    public:
        EinfacherMitarbeiter(std::string& name, float gehalt) : IMitarbeiter(name, gehalt) {}
        EinfacherMitarbeiter(const char* name, float gehalt) : IMitarbeiter(name, gehalt) {}

        virtual float calculateCelery() const override
        {
            return gehalt;
        }
};

#endif