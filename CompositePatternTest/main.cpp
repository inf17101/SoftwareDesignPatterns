#include "EinfacherMitarbeiter.h"
#include "Leiter.h"
#include "IMitarbeiter.h"
#include <memory>

int main()
{
    std::shared_ptr<Leiter> bigBoss(new Leiter("Gregor", 2000.0, 500.0));
    std::shared_ptr<Leiter> werkleiter(new Leiter("Manfred", 1900.0, 100.0));
    bigBoss->add(werkleiter);
    bigBoss ->add(std::shared_ptr<EinfacherMitarbeiter>(new EinfacherMitarbeiter("Anja", 1350.0)));
    bigBoss->add(std::shared_ptr<EinfacherMitarbeiter>(new EinfacherMitarbeiter("Gregor", 1450.0)));
    werkleiter->add(std::shared_ptr<EinfacherMitarbeiter>(new EinfacherMitarbeiter("Roland", 1300.0)));
    werkleiter->add(std::shared_ptr<EinfacherMitarbeiter>(new EinfacherMitarbeiter("Marvin", 1600.0)));
    werkleiter->add(std::shared_ptr<EinfacherMitarbeiter>(new EinfacherMitarbeiter("Sigmund", 1400.0)));
    werkleiter->add(std::shared_ptr<EinfacherMitarbeiter>(new EinfacherMitarbeiter("Thorsten", 1300.0)));
    werkleiter->add(std::shared_ptr<EinfacherMitarbeiter>(new EinfacherMitarbeiter("Thomas", 1890.0)));
    werkleiter->add(std::shared_ptr<EinfacherMitarbeiter>(new EinfacherMitarbeiter("Unknown", 1900.0)));
    std::cout << bigBoss->calculateCelery() << std::endl;
    
    return 0;
}