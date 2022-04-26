#ifndef TTIME_H
#define TTIME_H
#include <iostream>

using namespace std;

class Ttime
{
    public:
        Ttime(int godziny = 00, int minuty = 00);
        virtual ~Ttime();
        Ttime operator+(Ttime a);
        Ttime operator-(Ttime a);
        friend Ttime operator*(Ttime &a, int razy);
        friend ostream & operator<<(ostream &os, Ttime &a);
        friend Ttime operator*(int razy, Ttime &a);
        friend bool operator==(Ttime &a, Ttime &b);
    protected:
        int godziny, minuty;
    private:
};

#endif // TTIME_H
