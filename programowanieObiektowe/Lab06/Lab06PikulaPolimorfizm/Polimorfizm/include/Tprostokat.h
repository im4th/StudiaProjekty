#ifndef TPROSTOKAT_H
#define TPROSTOKAT_H
#include <string>
#include <Tfigura.h>


class Tprostokat : public Tfigura
{
public:
    Tprostokat(string naz = "Podstawowy Prostokat", float bkA = 10, float bkB = 11);
    virtual ~Tprostokat();
    void rysuj();
    float pole();
    float obwod();
protected:
    float bokA, bokB;
private:
};

#endif // TPROSTOKAT_H
