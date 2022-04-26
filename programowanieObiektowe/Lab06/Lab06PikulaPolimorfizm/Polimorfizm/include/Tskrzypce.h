#ifndef TSKRZYPCE_H
#define TSKRZYPCE_H

#include <Tinstrument.h>


class Tskrzypce : public Tinstrument
{
public:
    Tskrzypce();
    Tskrzypce(string n);
    virtual ~Tskrzypce();
    string dzwiek();
protected:

private:
};

#endif // TSKRZYPCE_H
