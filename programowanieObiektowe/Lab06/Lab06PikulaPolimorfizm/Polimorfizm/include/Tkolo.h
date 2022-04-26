#ifndef TKOLO_H
#define TKOLO_H
#include <string>
#include <Tfigura.h>


class Tkolo : public Tfigura
{
public:
    Tkolo(string naz = "Podstawowe Kolo", float pro = 10);
    virtual ~Tkolo();
    void rysuj();
    float pole();
    float obwod();
protected:
    float promien;
private:
};

#endif // TKOLO_H
