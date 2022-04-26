#ifndef TINSTRUMENT_H
#define TINSTRUMENT_H
#include <string>

using namespace std;

class Tinstrument
{
public:
    Tinstrument();
    Tinstrument(string nazwa);
    virtual ~Tinstrument();
    //string dzwiek();//w czesne wiazanie metod na etapie kompilacji
    virtual string dzwiek(); // pozne wiazanie metood na etapie wykonania - polimorfizm
    void muzyka(int n);
protected:
    string nazwa;
private:
};

#endif // TINSTRUMENT_H
