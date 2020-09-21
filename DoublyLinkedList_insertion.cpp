#include<iostream>
using namespace std;
struct node
{
    int data;
    node* prev;
    node* next;
};
//insert at first

node* insertAtFirst(node* head,int data)
{
    node* nowhead=new node();
    nowhead->data=data;
    nowhead->next=head;
    head->prev=nowhead;

    nowhead->prev= nullptr;
    return nowhead;

}
//insert at a given index
node* insertAtIndex(node* head,int data,int index)
{
    node* a=new node();
    node* b=head;
    int i=0;
    for(i=0;i<index-1;i++)
    {
        b=b->next;
    }
    a->data=data;
    a->next=b->next;
    a->prev=b;
    b->next=a;

    return head;
}
//insert at last
node* insertAtLast(node* head,int data)
{
    node* a=new node();
    node* b=head;
    while (b->next!=NULL)
    {
        b=b->next;
    }
    a->data=data;
    b->next=a;
    a->prev=b;
    a->next=NULL;
    return head;

}
//insert by value
node* insertByValue(node* head,int data,int value)
{
    node* p=new node();
    p->data=data;
    node* q=head;
    while (q->data!=value&&q->next!=NULL)
    {
        q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;
        q->next=p;
        p->prev=q;

    }
    return head;


}
void trav(node* ptr)
{
    while (ptr!=nullptr)
    {
        cout<<"Elements are:- "<<ptr->data<<endl;
        ptr=ptr->next;

        /* code */
    }

}
int main()
{
    node* head=new node();
    node* sec=new node();
    node* third=new node();
    node* fourth=new node();

    head->data=10;
    head->prev=NULL;
    head->next=sec;

    sec->data=20;
    sec->prev=head;
    sec->next=third;

    third->data=30;
    third->prev=sec;
    third->next=fourth;

    fourth->data=40;
    fourth->prev=third;
    fourth->next=NULL;
    int abc;
    cout<<"The linked list"<<endl;
    trav(head);
    while (true) {
        cout << "Enter 1 for insert at first node" << endl;
        cout << "Enter 2 for insert at given index " << endl;
        cout << "Enter 3 for insert last node" << endl;
        cout << "Enter 4 for insert at by value" << endl;
        cout << "Enter 5 for printng the linked list" << endl;
        cout << "Enter 6 for exit" << endl;
        cout<<"Enter the input :"<<endl;
        cin >> abc;

        switch (abc) {
            case 1:
                int data;
                cout << "Enter the data" << endl;
                cin >> data;
                head = insertAtFirst(head, data);
                trav(head);
                break;
            case 2:
                int in, dat;
                cout << "Enter the index number" << endl;
                cin >> in;
                cout << "Enter the data" << endl;
                cin >> dat;
                if (in == 0) {
                    head = insertAtFirst(head, dat);
                    trav(head);
                    break;
                } else {
                    head = insertAtIndex(head, dat, in);
                    trav(head);
                    break;
                }
            case 3:
                int op;
                cout << "Enter the data" << endl;
                cin >> op;
                head = insertAtLast(head, op);
                trav(head);
                break;
            case 4:
                int val, x;
                cout << "Enter the value" << endl;
                cin >> val;
                cout << "Enter the data" << endl;
                cin >> x;
                head = insertByValue(head, x, val);
                trav(head);
                break;
            case 6:exit(0);
            default: cout<<"Wrong input!"<<endl;
                break;
        }
    }
//
//    cout<<"The Linked list"<<endl;
//    trav(head);
//    cout<<"Enter the index number"<<endl;
//    int index;
//    cin>>index;
//
//    cout<<"insert at index "<<endl;
//    if (index==0)
//    {
//        head=insertAtFirst(head,69);
//        trav(head);
//    }
//
//    else {
//        head = insertAtIndex(head, 69,index);
//        trav(head);
//    }

//    cout<<"insert at last"<<endl;
//    head=insertAtLast(head,49);
//    trav(head);

//    cout<<"insert by value"<<endl;
//        head=insertByValue(head,500,10);
//        trav(head);
    return 0;



}
