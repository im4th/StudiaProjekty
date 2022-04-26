#include <iostream>
#include <cmath>

using namespace std;

void Trapezy(int m, float a, float b, int tryb);

void Simpson(int m, float a, float b, int tryb);

int main()
{
    int n;
    cout << "Ktora calke chcesz wybrac: " << endl << "1.(od 1 do 0) sqrt(1+x) dx" <<endl<< "2. (od 2pi do 0) sin^2(x) +2 dx"<<endl;
    cout <<"3. (od 0 do 2) e^x * 2x^3 dx"<<endl <<"Twoj wybor: ";
    cin >> n;
    switch (n)
    {
        case 1:
        {
            //Trapezy(3, 0, 1, 1);
            Simpson(6, 0, 1, 1);
            break;
        }
        case 2:
        {
            //Trapezy(4, 0, 2*M_PI, 2);
            Simpson(4, 0, 2*M_PI, 2);
            break;
        }
        case 3:
        {
            Trapezy(10, 0, 2, 3);
            //Simpson(10, 0, 2, 3);
            break;
        }
        case 4:
        {
            return 0;
        }
    }
    return 0;
}

void Trapezy(int m, float a, float b, int tryb)
{
    float *x = new float[m];
    float *y = new float[m];
    float wynik=0;
    x[0]=a;
    float h = (b-a)/m;
    cout <<"h=" <<h<<endl;
    for(int i=1; i<=m; i++)
    {
        x[i]=h + x[i-1];
    }
    for(int i=0; i<=m; i++)
    {
        cout <<"x["<<i<<"]="<< x[i] << endl;
    }
    if(tryb == 1)
    {
        for(int i=0; i<=m; i++)
        {
            y[i]=sqrt(1 + x[i]);
        }
        for(int i=0; i<=m; i++)
        {
            cout <<"y["<<i<<"]="<< y[i] << endl;
        }
        for(int i = 0; i<=m; i++)
        {
            float rob = 0;
            if(i==0 || i==m)
                rob = (y[i]/2);
            else
                rob = y[i];
            wynik = wynik + rob;
        }
        wynik = wynik*h;
        cout <<endl<< "Wynik: "<<wynik;
    }
    else if(tryb == 2)
    {
        for(int i=0; i<=m; i++)
        {
            y[i]=pow(sin(x[i]),2)+2;
        }
        for(int i=0; i<=m; i++)
        {
            cout <<"y["<<i<<"]="<< y[i] << endl;
        }
        for(int i = 0; i<=m; i++)
        {
            float rob = 0;
            if(i==0 || i==m)
                rob = (y[i]/2);
            else
                rob = y[i];
            wynik = wynik + rob;
        }
        wynik = wynik*h;
        cout <<endl<< "Wynik: "<<wynik;
    }
    else if(tryb == 3)
    {
        cout <<"GBS";
        for(int i=0; i<=m; i++)
        {
            y[i]=exp(x[i])*2*pow(x[i],3);
        }
        for(int i=0; i<=m; i++)
        {
            cout <<"y["<<i<<"]="<< y[i] << endl;
        }
        for(int i = 0; i<=m; i++)
        {
            float rob = 0;
            if(i==0 || i==m)
                rob = (y[i]/2);
            else
                rob = y[i];
            wynik = wynik + rob;
        }
        wynik = wynik*h;
        cout <<endl<< "Wynik: "<<wynik;
    }
    else
        return;
    delete[] x;
    delete[] y;
}

void Simpson(int m, float a, float b, int tryb)
{
    float *x = new float[m];
    float *y = new float[m];
    float wynik=0;
    x[0]=a;
    float h = (b-a)/m;
    cout <<"h=" <<h<<endl;
    for(int i=1; i<=m; i++)
    {
        x[i]=h + x[i-1];
    }
    for(int i=0; i<=m; i++)
    {
        cout <<"x["<<i<<"]="<< x[i] << endl;
    }
    if(tryb == 1)
    {
        for(int i=0; i<=m; i++)
        {
            y[i]=sqrt(1 + x[i]);
        }
        for(int i=0; i<=m; i++)
        {
            cout <<"y["<<i<<"]="<< y[i] << endl;
        }
        for(int i = 0; i<=m; i++)
        {
            float rob = 0;
            if(i==0 || i==m)
                rob = y[i];
            else
            {
                if(i%2==0)
                    rob = y[i]*2;
                else
                    rob = y[i]*4;
            }
            wynik = wynik + rob;
        }
        wynik = wynik*h/3;
        cout <<endl<< "Wynik: "<<wynik;
    }
    else if(tryb == 2)
    {
        for(int i=0; i<=m; i++)
        {
            y[i]=pow(sin(x[i]),2)+2;
        }
        for(int i=0; i<=m; i++)
        {
            cout <<"y["<<i<<"]="<< y[i] << endl;
        }
        for(int i = 0; i<=m; i++)
        {
            float rob = 0;
            if(i==0 || i==m)
                rob = y[i];
            else
            {
                if(i%2==0)
                    rob = y[i]*2;
                else
                    rob = y[i]*4;
            }
            wynik = wynik + rob;
        }
        wynik = wynik*h/3;
        cout <<endl<< "Wynik: "<<wynik;
    }
    else if(tryb == 3)
    {
        cout <<"GBS";
        for(int i=0; i<=m; i++)
        {
            y[i]=exp(x[i])*2*pow(x[i],3);
        }
        for(int i=0; i<=m; i++)
        {
            cout <<"y["<<i<<"]="<< y[i] << endl;
        }
        for(int i = 0; i<=m; i++)
        {
            float rob = 0;
            if(i==0 || i==m)
                rob = y[i];
            else
            {
                if(i%2==0)
                    rob = y[i]*2;
                else
                    rob = y[i]*4;
            }
            wynik = wynik + rob;
        }
        wynik = wynik*h/3;
        cout <<endl<< "Wynik: "<<wynik;
    }
    else
        return;
    delete[] x;
    delete[] y;
}
