#ifndef TTRABKA_H
#define TTRABKA_H

#include <Tinstrument.h>


class Ttrabka : public Tinstrument
{
public:
    Ttrabka();
    Ttrabka(string nazwa);
    virtual ~Ttrabka();
    string dzwiek();
protected:

private:
};

#endif // TTRABKA_H
