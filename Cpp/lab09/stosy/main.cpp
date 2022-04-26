#include <iostream>
#include <time.h>
#include <stdlib.h>
#include<fstream>

using namespace std;

struct element
{
    int data;
    element *next = nullptr;
};

float a, i=0;

void push(element * &stack, int value);

void pop(element * &stack);

bool isEmpty(element *stack);

int top(element *stack);

void print_all(element * &stack);

int main()
{
    int n;
    element* stack_top = nullptr;
    /*int* tab;
    int n;
    wczytaj(tab,n,"grupa1zad1.csv");
    return 0;*/
    while(n!=6)
    {
        cout << "Menu:" << endl << "1.Sprawdz, czy stos jest pusty" << endl << "2.Dodaj element na stos(losowo z zakresu 1-10)" << endl << "3.Usun element ze stosu" << endl;
        cout << "4.Wyswietl ostatni element stosu" << endl << "5.Usun wszystko ze stosu" << endl <<"6.Wyswietl caly stos(zakonczy to program)" << endl << "7.wczytaj z pliku" << endl << "8.Wyjscie z programu" << endl << "Podaj numer: ";
        cin >> n;
        switch(n)
        {
        case 1:
        {
            if(isEmpty(stack_top)==true)
                cout << endl << "-------Stos jest pusty-------" <<endl  << endl;
            else
                cout << endl << "-------Stos nie jest pusty-------" << endl << endl;
            break;
        }
        case 2:
        {
            srand(time(NULL));
            int temp = 1 + rand()%(10);
            push(stack_top, temp);
            cout << endl << "-------Dodano element do stosu-------" << endl << endl;
            break;
        }
        case 3:
        {
            if(isEmpty(stack_top)==true)
                cout << endl << "-------Stos jest pusty, nie mozna nic usunac-------"<< endl << endl;
            else
            {
                pop(stack_top);
                cout << endl << "-------Usunieto ostatni element stosu-------" << endl << endl;
            }
            break;
        }
        case 4:
        {
            if(isEmpty(stack_top)==true)
                cout << endl << "-------Stos jest pusty, nie ma elementu do usuniecia-------" <<endl  << endl;
            else
                cout << endl << "-------Ostatni element stosu to: " << top(stack_top) <<"-------"<< endl << endl;
            break;
        }
        case 5:
        {
            while(!isEmpty(stack_top))
            {
                pop(stack_top);
            }
            cout << endl << "-------Usunieto caly stos-------"<< endl << endl;
            break;
        }
        case 6 :
        {
            cout << "--------Stos:--------" << endl;
            print_all(stack_top);
            break;
        }
        case 7:
        {
            cout <<"-------Wczytywanie z pliku--------" << endl << endl;
            ifstream odczyt;
            odczyt.open("grupa1zad1.csv".c_str());
            odczyt>>n;
            tab=new int[n];
            while(odczyt >> n)
            {
                cout << n << endl;
            }
            odczyt.close();
            break;
        }
        case 8 :
            delete stack_top;
            exit(11);
        }
    }
    return 0;
}

void push(element * &stack, int value)
{
    element *el = new element;
    el -> data = value;
    el -> next = stack;
    stack = el;
}

void pop(element * &stack)
{
    element *temp = stack;
    stack = stack-> next;
    delete temp;
}

bool isEmpty(element *stack)
{
    return stack == nullptr;
}

int top(element *stack)
{
    return stack-> data;
}

void print_all(element * &stack)
{
    if(isEmpty(stack)==true)
    {
        cout <<"Wynik to:" << a/i;//srednia arytmetyczna, bez /i suma
        delete stack;
        return;
    }
    else
    {
        //element *roboczy = new element;
        if(stack->data>9)
            cout << "\t|"<<stack->data <<" |"<< endl;
        else
            cout << "\t| "<<stack->data <<" |"<< endl;
        //push(roboczy, stack->data);
        i++;
        a = a + stack->data;
        pop(stack);
        print_all(stack);
        //push(stack, roboczy->data);
        //delete roboczy;
    }
}

void wczytaj(int *&tab, int &n, string nazwa_pliku) //n rozmiar tablicy, tab tablica
{
    /*ifstream odczyt;
    odczyt.open(nazwa_pliku.c_str());
    odczyt>>n;
    tab=new int[n];
    for(int i=0; i<n; i++)
    {
        odczyt>>tab[i];
    }
    odczyt.close();*/

}
