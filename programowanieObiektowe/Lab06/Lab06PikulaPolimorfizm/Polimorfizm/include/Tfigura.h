#ifndef TFIGURA_H
#define TFIGURA_H
#include <string>

using namespace std;

class Tfigura
{
public:
    Tfigura(string naz = "Figura");
    virtual ~Tfigura();
    string info();
    virtual void rysuj();
    virtual float pole();
    virtual float obwod();
    void wyswietl();
protected:
    string nazwa;
private:
};

#endif // TFIGURA_H
