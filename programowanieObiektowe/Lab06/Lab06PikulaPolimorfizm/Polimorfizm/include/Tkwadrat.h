#ifndef TKWADRAT_H
#define TKWADRAT_H
#include <string>
#include <Tprostokat.h>


class Tkwadrat : public Tprostokat
{
public:
    Tkwadrat(string naz = "Podstawowy Kwadrat", float bk = 10);
    virtual ~Tkwadrat();
    //void rysuj();
    float pole();
    float obwod();
protected:
    float bok;
private:
};

#endif // TKWADRAT_H
