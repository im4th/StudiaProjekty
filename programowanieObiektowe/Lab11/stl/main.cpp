#include <iostream>
#include <string.h>
#include <cstring>
#include <bits/stdc++.h>

template <typename T>

bool czy_palindrom(const T& t, int dlugosc)
{
    for(int i=0;i<dlugosc;i++)
    {
        if(t[i] != t[dlugosc-i-1])
        {
        return false;
        }
    }
    return true;
}

using namespace std;

int main()
{
    cout << "Czy jest to palindrom 1-tak, 0-nie: " << endl;

    char *tekst1 = "anilina";
    cout << "anilina: " << czy_palindrom(tekst1, strlen(tekst1)) << endl;

    char tekst2[] = "Taki sobie napis";
    cout << "Taki sobie napis: " << czy_palindrom(tekst2, strlen(tekst2)) << endl;

    string tekst3("malajalam");
    cout << "malajalam: "<< czy_palindrom(tekst3, tekst3.length()) << endl;

    int tab1[] = {1,2,3,6,3,2,1};
    cout << "[1,2,3,6,3,2,1]: " << czy_palindrom(tab1, sizeof(tab1)) << endl;

    int tab2[] = {1,2,3,4,4,2,1};
    cout << "[1,2,3,4,4,2,1]: "<< czy_palindrom(tab2, sizeof(tab2)) << endl;

    char tab3[] = {'r', 'o', 't', 'a', 't', 'o', 'r'};
    cout << "{'r', 'o', 't', 'a', 't', 'o', 'r'}: " << czy_palindrom(tab3, sizeof(tab3)) << endl;

    return 0;
}
