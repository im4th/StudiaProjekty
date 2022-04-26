#include <iostream>

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

//float a;

void add_tail(single_list &l, int value);

void add_head(single_list &l, int value);

void add_position(single_list &l, int value,int position);

void delete_tail(single_list &l);

void delete_head(single_list &l);

void delete_position(single_list &l, int position);

element* show_position(single_list l, int position);

void show_all(single_list l);

void delete_all(single_list &l);

void add_after(single_list &l, int value,element* it);

void delete_after(single_list &l,element* it);

int main()
{
    single_list l;
    add_head(l, 2);
    show_all(l);
    add_head(l, 3);
    show_all(l);
    add_tail(l, 1);
    show_all(l);
    delete_head(l);
    show_all(l);
    //delete_position(l, 2);
    delete_tail(l);
    show_all(l);
    return 0;
}

void show_all(single_list l) // ------dziala------
{
    int a = 0;
    element* iterator = l.head;
    while(iterator != nullptr)
    {
        cout << iterator->data << " ";
        a = a + iterator->data;
        iterator = iterator->next;
    }
    cout << endl;
    cout << "wynik to: " << a << endl;
}

void delete_head(single_list &l) // ------dziala------
{
    element* temp = l.head;
    l.head = l.head->next;
    delete temp;
    if(l.head == nullptr)
        l.tail = nullptr;
    l.counter--;
}

void delete_tail(single_list &l)
{
    if(l.head == nullptr)
        return;
    element *el = show_position(l, l.counter-1);
    el->next = nullptr;
    element *temp = l.tail;
    delete temp;
    l.tail =el;
    l.counter--;
}

void delete_position(single_list &l, int position)
{
    if(position == 0)
    {
        delete_head(l);
        return;
    }
    element* it = show_position(l, position-1);
    delete_after(l, it);
    l.counter--;
}

void add_position(single_list &l, int value,int position)
{
    if(position == 0)
    {
        add_head(l, value);
        return;
    }
    element* it = show_position(l, position-1);
    add_after(l, value, it);
    l.counter++;
}

void add_after(single_list &l, int value,element* it)
{
    element *el = new element;
    el->data = value;
    el->next= it->next;
    it->next = el;
}

void add_tail(single_list &l, int value) // ------dziala------
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

void add_head(single_list &l, int value) // ------dziala------
{
    element* el = new element;
    el->data = value;
    el->next = l.head;
    l.head = el;
    if(l.tail == nullptr)
        l.tail = el;
    l.counter++;
}

element* show_position(single_list l, int position)
{
    element*temp = l.head;
    int i = 0;
    while(temp->next != NULL && i<position-1)
    {
        temp = temp->next;
        i++;
    }
    return temp;
}

void delete_after(single_list &l,element* it)
{
    element * temp = it->next;
    it->next = temp->next;
    delete temp;
}
