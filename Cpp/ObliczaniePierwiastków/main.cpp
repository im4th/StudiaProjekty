#include <iostream>
#include <cmath>
using namespace std;

int delta(double a, double b, double c);

int pierwiastki(double a, double b, double c);

int sign(double a);

int pierwiastkiVietta(double a, double b, double c);

int main()
{
    double a = 1, b=-4, c =5;
    pierwiastkiVietta(a,b,c);
    return 0;
}
int delta(double a, double b, double c)
{
    int delta;
    delta = b*b - (4*a*c);
    if(delta > 0)
        return 2;
    else if(delta == 0)
        return 1;
    else
        return 0;
}

int pierwiastki(double a, double b, double c)
{
    if(a==0)
    {
        cout<<"To nie jest rownanie kwadratowe"<<endl;
        return 0;
    }
    int pierwiastek1;
    int pierwiastek2;
    int pierwiastek3;
    if (delta(a,b,c)==0)
    {
        cout<<"Nie ma pierwiastków"<<endl;
        return 0;
    }
    else if(delta(a,b,c)==2)
    {
        pierwiastek1 = (-b -sqrt(delta(a,b,c)))/(2*a);
        pierwiastek2 = (-b +sqrt(delta(a,b,c)))/(2*a);
        cout << "Pierwiastki to: "<< pierwiastek1 << ", " <<pierwiastek2<<endl;
        return 0;
    }
    else
    {
        pierwiastek3 = (-b/(2*a));
        cout << "Pierwiastek to: "<< pierwiastek3 <<endl;
        return 0;
    }
}

int sign(double a)
{
    if(a>0)
        return 1;
    else if(a<0)
        return -1;
    else
        return 0;
}

int pierwiastkiVietta(double a, double b, double c)
{
    if(a==0)
    {
        cout<<"To nie jest rownanie kwadratowe"<<endl;
        return 0;
    }
    int pierwiastek1;
    int pierwiastek2;
    int pierwiastek3;
    if (delta(a,b,c)==0)
    {
        cout<<"Nie ma pierwiastkow"<<endl;
        return 0;
    }
    else if(delta(a,b,c)==2)
    {
        pierwiastek1 = (-b/(2*a)) + sign(-b/(2*a))*sqrt((b/(2*a))*(b/(2*a))-(c/a));
        pierwiastek2 = c/(pierwiastek1*a);
        cout << "Pierwiastki to: "<< pierwiastek1 << ", " <<pierwiastek2<<endl;
        return 0;
    }
    else
        pierwiastek3 = (-b/(2*a));
    cout << "Pierwiastek to: "<< pierwiastek3 <<endl;
    return 0;
}

