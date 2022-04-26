#include <iostream>

using namespace std;

struct element
{
    int data;
    element* next = nullptr;
    element* prev = nullptr;
};

struct double_list
{
    int counter = 0;
    element* head = nullptr;
    element* tail = nullptr;
};
void add_tail(double_list &l, int value);

void add_head(double_list &l, int value);

void add_position(double_list &l, int value, int position);

void show_all(double_list l);

void delete_tail(double_list &l);

void delete_head(double_list &l);

void delete_position(double_list &l, int position);

void show_position(double_list l, int position);

int main()
{
    double_list dl;
    add_tail(dl, 3);
    show_all(dl);
    add_tail(dl, 4);
    show_all(dl);
    add_tail(dl, 133);
    show_all(dl);
    add_tail(dl, 13);
    show_all(dl);
    add_tail(dl, 6);
    show_all(dl);
    add_position(dl, 5, 6);
    show_all(dl);
    add_position(dl, 5, 1);
    show_all(dl);
    add_position(dl, 5, 2);
    show_all(dl);
    add_position(dl, 5, 3);
    show_all(dl);
    show_position(dl,1);
    show_position(dl,2);
    show_position(dl,3);
    show_position(dl,4);
    show_position(dl,5);
    show_position(dl,6);
    show_position(dl,7);
    show_position(dl,8);
    show_position(dl,9);
    show_position(dl,10);
    /*delete_position(dl, 5);
    show_all(dl);
    delete_position(dl, 2);
    show_all(dl);
    delete_position(dl, 4);
    show_all(dl);
    delete_position(dl, 1);
    show_all(dl);
    /*delete_head(dl);
    show_all(dl);
    delete_head(dl);
    show_all(dl);
    delete_head(dl);
    show_all(dl);
    delete_head(dl);
    show_all(dl);
    delete_head(dl);
    show_all(dl);
    delete_head(dl);
    delete_head(dl);*/
    return 0;
}

void add_tail(double_list &l, int value)
{
    element *el = new element;
    el->data = value;
    el->next = nullptr;
    el->prev = nullptr;
    if(l.tail!=nullptr)
        {
            l.tail->next=el;
            el->prev =l.tail;
        }
    else
        l.head = el;
    l.tail = el;
    l.counter = l.counter +1;
}

void add_head(double_list &l, int value)
{
    element *el = new element;
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

void add_position(double_list &l, int value, int position)
{
    if(position==1)
    {
        add_head(l, value);
        return;
    }
    if(position>l.counter)
    {
        add_tail(l, value);
        return;
    }
    element *temp = l.head;
    for(int i=1;i<position-1; i++)
        temp = temp->next;
    element *el = new element;
    el->data = value;
    el->prev = temp;
    el->next = temp-> next;
    el->next->prev = el;
    temp->next = el;
    l.counter++;
}

void show_all(double_list l)
{
    element* iterator = l.head;
    while(iterator != nullptr)
    {
        cout << iterator->data << " ";
        iterator = iterator->next;
    }
    cout << endl;
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
    element *temp = l.head;
    int i = 1;
    while(i<position-1)
    {
        temp = temp->next;
        i++;
    }
    element *temp_us = new element;
    temp_us=temp->next;
    temp->next=temp_us->next;
    temp->next->prev = temp;
    delete temp_us;
    l.counter--;
}

void show_position(double_list l, int position)
{
    if(position>l.counter)
    {
        cout<<"Brak elementu o podanej pozycji"<<endl;
        return;
    }
    element*temp = l.head;
    int i = 0;
    while(temp->next != NULL && i<position-1)
    {
        temp = temp->next;
        i++;
    }
    cout<<temp->data<<endl;
}
