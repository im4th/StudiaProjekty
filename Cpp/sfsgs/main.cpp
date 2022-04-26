#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a = 1.12341234;
    double b = 2.34563456;
    double c = pow(a,2) - pow(b,2);
    double d = (a-b)*(a+b);
    cout << "c: "<<c<<endl;
   cout << "d: "<<d<<endl ;
    return 0;
}
