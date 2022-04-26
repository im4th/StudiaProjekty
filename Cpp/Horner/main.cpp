#include <iostream>

using namespace std;

double horner(int n, double a[], double c);

void hornerU(int n, double a[], double c);

int silnia(int a);

int main()
{
    int n;
    double c;
    cout <<"Podaj stopien wielomianu n: ";
    cin >> n;
    cout << "----"<< endl<<"Wartosc n: " << n << endl<< "----"<< endl;
    double *a = new double[n+1];
    for(int i=0; i<n+1; i++)
    {
        cout<<"Podaj wspolczynnik wielomianu: ";
        cin >> a[i] ;
    }
    cout <<"----"<<endl;
    for(int i=0; i<n+1; i++)
    {
        cout << "a["<<i<<"] = "<< a[i]<<"  ";
    }
    cout <<endl <<"----";
    cout << endl << "Podaj punkt, w ktorym liczona bedzie wartosc wielomianu: ";
    cin >> c;
    cout << "----"<< endl <<"Wartosc c: "<< c << endl << "----" << endl;
    //cout << "Wartosc wielomianu w podanym punkcie to: " <<  horner(n, a, c) << endl;
    hornerU(n, a, c);
    cout << "----" << endl;
    int k = n;
    for(int i=0; i<n+1; i++)
    {
        if(k==0)
            cout << "Wartosc wielomianu w podanym punkcie to: " <<  a[i]*silnia(k) << endl;
        else
            cout << "Podchodna o numerze "<<k<<" wynosi "<< a[i]*silnia(k)<<endl;
        k--;
    }
    cout << "----";
    return 0;
}

double horner (int n, double a[], double c)
{
    if(n==0)
        return a[n];
    double w = a[0];
    for(int i = 1; i<=n; i++)
        w = w * c + a[i];
    return w;
}

void hornerU (int n, double a[], double c)
{
    for(int i=0; i<n; i++)
    {
        for(int k=1; k<=n-i; k++)
        {
            a[k] = a[k-1]*c + a[k];
        }
    }
}

int silnia(int a)
{
    int wynik = 1;
    for(int i=1; i<=a; i++)
    {
        wynik = wynik*i;
    }
    return wynik;
}
