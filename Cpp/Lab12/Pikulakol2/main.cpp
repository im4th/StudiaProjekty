#include <iostream>
#include <fstream>

using namespace std;

struct element
{
    int data;
    element* next = nullptr;
};

struct single_list
{
    int counter = 0;
    element* head = nullptr;
    element* tail = nullptr;
};

struct element2
{
    int data;
    element2* next = nullptr;
    element2* prev = nullptr;
};

struct double_list
{
    int counter = 0;
    element2* head = nullptr;
    element2* tail = nullptr;
};
void zadanie2(double_list list, string nazwa_pliku);

void usun1(single_list l);

bool czy1(int n);

void show_all(single_list l);

void add_tail(single_list &l, int value);

void add_head(single_list &l, int value);

void zadanie1(single_list list , string nazwa_pliku);

void delete_position(double_list &l, int position);

void delete_tail(double_list &l);

void delete_head(double_list &l);

void show_all2(double_list l);

void add_head2(double_list &l, int value);
void delete_head1(single_list &l);

int main()
{
    string a = "zad1a.txt";
    string b = "zad2a.txt";
    single_list list;
    double_list list2;
    cout << "zadanie1: "<< endl;
    zadanie1(list, a);
    cout << "zadanie2: "<< endl;
    zadanie2(list2, b);
    while(list2.head!=nullptr)
    {
        delete_head(list2);
    }
    while (list.head!=nullptr)
    {
        delete_head1(list);
    }
    return 0;
}

void add_tail(single_list &l, int value)
{
    element* el = new element;
    el->data = value;
    if(l.tail!=nullptr)
        l.tail->next = el;
    else
        l.head = el;
    l.tail = el;
    l.counter++;
}

void add_head(single_list &l, int value)
{
    element* el = new element;
    el->data = value;
    el->next = l.head;
    l.head = el;
    if(l.tail == nullptr)
        l.tail = el;
    l.counter++;
}

void show_all(single_list l)
{
    element* iterator = l.head;
    while(iterator != nullptr)
    {
        cout << iterator->data << " ";
        iterator = iterator->next;
    }
    cout << endl;
}

void zadanie1(single_list list, string nazwa_pliku)
{
    string path = nazwa_pliku;
    ifstream source(path);
    int wczytane;
    while(source>>wczytane)
        if(wczytane%2==0)
        {
        add_head(list, wczytane);
        }
        else
        {
        add_tail(list, wczytane);
        }
    source.close();
    show_all(list);
}

bool czy1(int n)
{
    if(n<2)
    {
       return false;
    }
    for(int i=2; i*i<n;i++)
    {
       if(n%i==0)
            return false;
    }
    return true;
}

void usun1(double_list l)
{
    element2* iterator = l.head;
    while(iterator != nullptr)
    {
        if(czy1(iterator->data)==true)
        {
            delete_position(l, l.counter);
        }
        iterator = iterator->next;
    }
    cout << endl;
}

void zadanie2(double_list list, string nazwa_pliku)
{
    string path = nazwa_pliku;
    ifstream source(path);
    int wczytane;
    while(source>>wczytane)
        add_head2(list, wczytane);
    source.close();
    usun1(list);
    show_all2(list);
}

void delete_tail(double_list &l)
{
    if(l.counter == 0)
        return;
    if(l.counter == 1)
    {
        l.tail = nullptr;
        l.head = nullptr;
    }
    else
    {
        l.tail = l.tail->prev;
        l.tail->next=nullptr;
    }
    l.counter--;
}

void delete_head(double_list &l)
{
    if(l.counter == 0)
        return;
    if(l.counter == 1)
    {
        l.tail = nullptr;
        l.head = nullptr;
    }
    else
    {
        l.head = l.head->next;
        l.head->prev=nullptr;
    }
    l.counter--;
}

void delete_position(double_list &l, int position)
{
     if(position == 1)
    {
        delete_head(l);
        return;
    }
    if(position >= l.counter)
    {
        delete_tail(l);
        return;
    }
    element2 *temp = l.head;
    int i = 1;
    while(i<position-1)
    {
        temp = temp->next;
        i++;
    }
    element2 *temp_us = new element2;
    temp_us=temp->next;
    temp->next=temp_us->next;
    temp->next->prev = temp;
    delete temp_us;
    l.counter--;
}
void show_all2(double_list l)
{
    element2* iterator = l.head;
    while(iterator != nullptr)
    {
        cout << iterator->data << " ";
        iterator = iterator->next;
    }
    cout << endl;
}
void add_head2(double_list &l, int value)
{
    element2 *el = new element2;
    el->data = value;
    el->next = nullptr;
    el->prev = nullptr;
    if(l.head!=nullptr)
    {
        l.head->prev=el;
        el->next = l.head;
    }
    else
        l.tail = el;
    l.head = el;
    l.counter++;
}

void delete_head1(single_list &l)
{
    element* temp = l.head;
    l.head = l.head->next;
    delete temp;
    if(l.head == nullptr)
        l.tail = nullptr;
    l.counter--;
}

