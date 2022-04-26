#include <iostream>
#include<cmath>

using namespace std;

void wyswietl();

void wyswietl2();

void pobierz();

void pobierz2();

void wyswietl3();

void MNK(int iloscWezlow, float x[], float y[], int a);

int iloscWezlow;
float wynik;
float *x = new float[iloscWezlow];
float *x2 = new float[iloscWezlow];
float *y = new float[iloscWezlow];

int main()
{
    int n;
    cout <<"Wybierz opcje: " <<endl << "1.g(x)=a*x + b" << endl << "2.g(x)=a*1/x + b"<< endl << "3.g(x)=a^x + b" << endl <<"4.Wyjdz" << endl;
    cin >> n;
    switch(n)
    {
        case 1:
        {
            pobierz();
            wyswietl();
            MNK(iloscWezlow,x,y,1);
            break;
        }
        case 2:
        {
            pobierz2();
            wyswietl2();
            float *Zamiennex = new float[iloscWezlow];
            cout << endl;
            for(int i=0;i<iloscWezlow;i++)
            {
                Zamiennex[i]=x2[i]/x[i];
            }
            MNK(iloscWezlow,Zamiennex,y,2);
            break;
        }
        case 3:
        {
            cout << "y podawaj jako potêgi e"<<endl;
            pobierz();
            wyswietl3();
            float *Zamienney = new float[iloscWezlow];
            cout << endl;
            for(int i=0;i<iloscWezlow;i++)
            {
                Zamienney[i]=log(exp(y[i]));
            }
            MNK(iloscWezlow,x,Zamienney,3);
            break;
        }
        case 4:
        {
            return 0;
        }
    }
    return 0;
}
void pobierz()
{
    cout << "Podaj ilosc wezlow: ";
    cin >> iloscWezlow;
    cout << endl << "Podaj x"<<"["<<"0"<<"]: ";
    cin >> x[0];
    for(int i=1; i<iloscWezlow; i++)
    {
        cout << endl << "Podaj x"<<"["<<i<<"]: ";
        cin >> x[i];
        while(x[i]<=x[i-1])
        {
            cout <<endl <<"Niepoprawne dane";
            cout << endl << "Podaj POPRAWNE x"<<"["<<i<<"]: ";
            cin >> x[i];
        }
    }
    for(int i=0; i<iloscWezlow; i++)
    {
        cout << endl << "Podaj y"<<"["<<i<<"]: ";
        cin  >> y[i];
    }
    cout << endl;
}

void wyswietl()
{
    cout <<"----------------------------" << endl;
    cout << "Ilosc wezlow: " << iloscWezlow << endl << endl;
    for(int i=0; i<iloscWezlow; i++)
    {
        cout << "x["<<i<<"]: "<< x[i] << "  ";
    }
    cout <<endl << endl;
    for(int i=0; i<iloscWezlow; i++)
    {
        cout <<"y["<<i<<"]: "<< y[i] << "  ";
    }
    cout <<endl<<"----------------------------";
}

void MNK(int iloscWezlow, float x[], float y[], int a)
{
    float rob1, rob2,rob3,rob4;
    for(int i=0;i<iloscWezlow;i++)
    {
        rob1 = rob1 + y[i];
    }
    for(int i=0;i<iloscWezlow;i++)
    {
        rob2 = rob2 + x[i];
    }
    for(int i=0;i<iloscWezlow;i++)
    {
        rob3 = rob3 + x[i]*x[i];
    }
    for(int i=0;i<iloscWezlow;i++)
    {
        rob4 = rob4 + x[i]*y[i];
    }
    float W = iloscWezlow*rob3 - rob2*rob2;
    float Wa0 = rob1*rob3 - rob2*rob4;
    float Wa1 = iloscWezlow*rob4 - rob2*rob1;
    float aa = Wa1/W;
    float ab = Wa0/W;
    if(a==1)
        cout <<endl<< "Funkcja to: g(x)="<<aa <<"*x + "<<ab;
    else if(a==2)
        cout <<endl<< "Funkcja to: g(x)="<<aa <<"/x + "<<ab;
    else
        cout <<endl<< "Funkcja to: g(x)="<<"e^("<<aa<<"x)" <<" * e^("<<ab<<")";
}

void pobierz2()
{
    cout << "Podaj ilosc wezlow: ";
    cin >> iloscWezlow;
    for(int i=0; i<iloscWezlow; i++)
    {
        cout << endl << "Podaj licznik x"<<"["<<i<<"]: ";
        cin >> x[i];
        cout << endl << "Podaj mianownik x"<<"["<<i<<"]: ";
        cin >> x2[i];
    }
    for(int i=0; i<iloscWezlow; i++)
    {
        cout << endl << "Podaj y"<<"["<<i<<"]: ";
        cin  >> y[i];
    }
    cout << endl;
}

void wyswietl2()
{
    cout <<"----------------------------" << endl;
    cout << "Ilosc wezlow: " << iloscWezlow << endl << endl;
    for(int i=0; i<iloscWezlow; i++)
    {
        cout << "xl["<<i<<"]: "<< x[i] << "  ";
        cout << "xm["<<i<<"]: "<< x2[i] << "  " <<endl;
    }
    for(int i=0; i<iloscWezlow; i++)
    {
        cout <<"y["<<i<<"]: "<< y[i] << "  ";
    }
    cout <<endl<<"----------------------------";
}

void wyswietl3()
{
    cout <<"----------------------------" << endl;
    cout << "Ilosc wezlow: " << iloscWezlow << endl << endl;
    for(int i=0; i<iloscWezlow; i++)
    {
        cout << "x["<<i<<"]: "<< x[i] << "  ";
    }
    cout <<endl << endl;
    for(int i=0; i<iloscWezlow; i++)
    {
        cout <<"y[e^"<<i<<"]: "<< y[i] << "  ";
    }
    cout <<endl<<"----------------------------";
}

