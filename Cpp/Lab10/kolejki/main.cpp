#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

struct element
{
    int data;
    element *next = nullptr;
};

struct kolejka
{
    element *head = nullptr;
    element *tail = nullptr;
};

void push(kolejka &q, int value);

void pop(kolejka &q);

void print_all(kolejka &q);

int main()
{
    kolejka kl;
    int n;
    while(n!=6)
    {
        cout << "Menu:" << endl << "1.Sprawdz, czy kolejka jest pusty" << endl << "2.Dodaj element do kolejki(losowo z zakresu 1-10)" << endl << "3.Usun element z kolejki" << endl;
        cout << "4.Wyswietl element w glowie kolejki" << endl << "5.Usun wszystko z kolejki" << endl << "6.Wyswietl cala kolejke" << endl << "7.Wyjscie z programu" << endl << "Podaj numer: ";
        cin >> n;
        switch(n)
        {
        case 1:
        {
            if(kl.head ==nullptr)
                cout << endl << "-------Kolejka jest pusta-------" <<endl << endl;
            else
                cout << endl << "-------Kolejka nie jest pusta-------" << endl << endl;
            break;
        }
        case 2:
        {
            srand(time(NULL));
            int temp = 1 + rand()%(10);
            push(kl, temp);
            cout << endl << "-------Dodano element " << temp << " do kolejki-------" << endl << endl;
            break;
        }
        case 3:
        {
            if(kl.head == nullptr)
                cout << endl << "-------Kolejka jest pusta, nie mozna nic usunac-------"<< endl << endl;
            else
            {
                pop(kl);
                cout << endl << "-------Usunieto element head z kolejki------" << endl << endl;
            }
            break;
        }
        case 4:
        {
            cout << endl << "-------Element head kolejki to: " << kl.head->data <<"-------"<< endl << endl;
            break;
        }
        case 5:
        {
            while(kl.head!=nullptr)
            {
                pop(kl);
            }
            cout << endl << "-------Usunieto cala kolejke-------"<< endl << endl;
            break;
        }
        case 6:
        {
            cout << endl << "-------kolejka:-------"<< endl << endl;
            print_all(kl);
            break;
        }
        case 7:
            delete &kl;
            exit(13);
        }
    }
    return 0;
}

void push(kolejka &q, int value)
{
    element *el = new element;
    el->data = value;
    if(q.tail != nullptr)
    {
        q.tail->next = el;
    }
    else
    {
        q.head = el;
    }
    q.tail = el;
}

void pop(kolejka &q)
{
    element *temp = q.head;
    q.head = q.head->next;
    delete temp;
    if(q.head == nullptr)
    {
        q.tail = nullptr;
    }
}

void print_all(kolejka &q)
{
    if(q.head ==nullptr)
    {
        return;
    }
    else
    {
        cout <<"\t "<< q.head->data << endl;
        pop(q);
        print_all(q);
    }
}
