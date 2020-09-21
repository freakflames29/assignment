#include "iostream"
using namespace std;
struct node
{
    int data;
    node* next;
};
node* insertfirst(node* head,int data)
{
    node* a=new node();

    a->data=data;
    a->next=head;
    return a;
}
node* insertAtIndex(node* head,int data,int index)
{
    int aska=index;
    node* a=new node();
    node* b=head;
    int i=0;
    while (i!=index-1)
    {
        b=b->next;
        i++;

    }
    if (b==NULL)
    {
//        cout<<"Wrong"<<endl;
        cout<<"can not insert at this index-> "<<aska<<endl;
        cout<<" end of linked list"<<endl;
    }
    a->data=data;
    a->next=b->next;
    b->next=a;
    return head;
}
node* inserAtLast(node* head,int data)
{
    node* a=head->next;
    node *b=new node();
    b->data=data;
    while (a->next!=NULL)
    {
        a=a->next;
    }
    a->next=b;
    b->next=NULL;
    return head;

}
node* insertByValue(node* head,int value,int data)
{
    node* p=new node();
    p->data=data;
    node* a=head;
    //node* h=a->next;
    while (a->data!=value&&a->next!=NULL)
    {
        a=a->next;

    }
    if (a->data==value)
    {
       p->next=a->next;
//       h->next=p->next;
        a->next=p;


    }
    return head;

}

void talk(node* ptr)
{
    while (ptr!=NULL)
    {
        cout<<"Elements-->"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main()
{
    node* head=new node();
    node* second=new node();
    node* third=new node();
    node* fourth=new node();
    node* fif=new node();


    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=fif;

    fif->data=500;
    fif->next=NULL;
    cout<<"The Linked list"<<endl;
    talk(head);
    cout<<"insert value"<<endl;
    head=insertByValue(head,30,80);
    talk(head);
//
//    cout<<"insert at given index"<<endl;
//    head=insertAtIndex(head,300,2);
//    talk(head);
//    cout<<"insert at first"<<endl;
//    head=insertfirst(head,100);
//    talk(head);
    return  0;




}