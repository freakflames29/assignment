#include <iostream>

using namespace std;
struct node
{
    int data;
    node *next;
};

void trav(node *head)
{
    node *p = head;
    do
    {
        cout << "Element is " << p->data << endl;
        p = p->next;
    } while (p != head);
}

node *insertatfirst(node *head, int data)
{
    node *a = new node();
    a->data = data;
    node *b = head;
    while (b->next != head)
    {
        b = b->next;
    }
    b->next = a;
    a->next = head;
    return a;
}

node *insertatlast(node *head, int data)
{
    node *p = new node();
    p->data = data;
    node *q = head;
    while (q->next != head)
    {
        q = q->next;
    }

    p->next = q->next;
    q->next = p;
    return head;
}

node *insertbyindex(node *head, int data, int index)
{
    node *x = new node();
    node *y = head;
    int i = 0;
    for (i = 0; i < index - 1; i++)
    {
        y = y->next;
        /* code */
    }
    x->data = data;
    x->next = y->next;
    y->next = x;

    return head;
}

node *insertbyvalue(node *head, int data, int value)
{
    node *a = new node();
    a->data = data;
    node *b = head;
    while (b->data != value && b->next != head)
    {
        b = b->next;
    }
    if (b->data == value)
    {
        a->next = b->next;
        b->next = a;
        /* code */
    }
    return head;
}

//deletion in ciruclar linked list
node *delbyindex(node *head, int index)
{
    node *p = head;
    node *q = p->next;
    int i = 0;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

node *delfi(node *head)
{
    node *p = head;
    node *q = p->next;
    while (q->next != head)
    {
        q = q->next;
    }
    q->next = p->next;
    head = head->next;
    free(p);
    return head;
}

node *dellast(node *head)
{
    node *p = head;
    node *q = p->next;
    while (q->next != head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

node *delebyval(node *head, int val)
{
    node *p = head;
    node *q = p->next;
    node *r = q->next;
    while (p->data != val && q->data != val && r->data != val && r->next != nullptr)
    {
        p = p->next;
        q = q->next;
        r = r->next;
    }
    if (p->data == val)
    {
        head = q;
        free(p);
    }
    else if (q->data == val)
    {
        p->next = q->next;
        free(q);
    }
    else if (r->data == val)
    {
        q->next = r->next;
        free(r);
    }
    return head;
}

int main()
{
    node *head = new node();
    node *sec = new node();
    node *thir = new node();

    head->data = 10;
    head->next = sec;

    sec->data = 20;
    sec->next = thir;

    thir->data = 30;
    thir->next = head;
    cout << "the circular linked list is " << endl;
    trav(head);
    //    cout << "insert at first" << endl;
    //    head = insertatfirst(head, 59);
    //    trav(head);
    //    cout << "insert at last " << endl;
    //    head = insertatlast(head, 800);
    //    trav(head);
    //    cout << "insert by index" << endl;
    //    head = insertbyindex(head, 400, 1);
    //    trav(head);
    //    cout << "insert by value" << endl;
    //    head = insertbyvalue(head, 2222, 59);
    //    trav(head);
    /* cout << "Delete by index" << endl;
     head = delbyindex(head, 1);

     trav(head);*/

    //    cout << "delete first node" << endl;
    //    head = delfi(head);
    //    trav(head);

    //    cout << "delete last" << endl;
    //    head = dellast(head);
    //    trav(head);
    cout << "delby val" << endl;
    cout << "Enter the value to be deleted" << endl;
    int val;
    cin >> val;
    head = delebyval(head, val);
    trav(head);
    return 0;
}