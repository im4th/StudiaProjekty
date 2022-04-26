#include <iostream>
#include <time.h>

using namespace std;

void kreciSie(int d, int *tab);

int main()
{
    srand(time(NULL));
    int tab[10];
    int j = 0, x;
    kreciSie(10, tab);
    for (int i = 0; i < 10; i++)
    {
        x = rand();
        if(x % 2 == 0)
        {
            tab[j]=x;
            j++;
        }
    }
    if(j<10)
        kreciSie(10-j,tab);

    for (int i = 0; i < 10; i++)
    {
        cout << tab[i] << endl;
    }
}

void kreciSie(int d, int* tab)
{
    int c, x, j= 0;
    for (int i = 0; i < d; i++)
    {
        x = rand();
        if (x % 2 == 0)
        {
            tab[10-j] = x;
            j++;

        }
    }
}
