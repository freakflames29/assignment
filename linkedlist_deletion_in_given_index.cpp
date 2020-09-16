#include "iostream"
using namespace std;
struct node
{
    int data;
    node* next;
};
node* firstnode(node* head)
{
    node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
node* indexdelete(node* ptr,int index)
{
    node* p=ptr;
    node* q=p->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;

    }
    p->next=q->next;
    free(q);
    return ptr;


}
node* lastnumber(node* head)
{
    node* a=head;
    node* b= a->next;
    while (b->next!=NULL)
    {
       a=a->next;
       b=b->next;
    }
    a->next=NULL;
    free(b);
    return head;
}
node* delByValue(node* head,int value)
{
    node* p=head;
    node* q=p->next;

    while (q->data!=value&&q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }

    if (q->data==value)
    {
        p->next=q->next;
        delete q;

    }

    return head;

}
void trav(node* ptr)
{
    while (ptr!=NULL)
    {
        cout<<"Elements:-"<<ptr->data<<endl;
        ptr=ptr->next;
    }

}
int main()
{
    node* head=new node();
    node* second=new node();
    node* third=new node();
    node* fourth=new node();

    cout<<"Enter the first element:"<<endl;
    cin>>head->data;
//    head->data=1;;
    head->next=second;
    cout<<"Enter the second element:"<<endl;
    cin>>second->data;
    second->next=third;
    cout<<"Enter the third element:"<<endl;

    cin>>third->data;
    third->next=fourth;

    cout<<"Enter the Fourth element:"<<endl;
    cin>> fourth->data;
    fourth->next=NULL;

    cout<<"before deletion in linked list"<<endl;
    trav(head);
    //deleting by value
    cout<<"Eneter the value to be deleted"<<endl;
    int val;
    cin>>val;
    cout<<"linked list after deleting by value"<<endl;

    head=delByValue(head,val);
    trav(head);

//    cout<<"Enter the index number of deleting element"<<endl;
//    int in;
//    cin>>in;
//    if(in==0)
//    {
//    cout<<"Linked list after deleting first element"<<endl;
//    head=firstnode(head);
//    trav(head);
//    }
//    else if (in==3)
//    {
//        cout<<"after deleting last element"<<endl;
//        head=lastnumber(head);
//        trav(head);
//
//    }
//    else {
//        cout << "Linked list after deleting a given index " << endl;
//        head = indexdelete(head, in);
//        trav(head);
//    }
    return 0;




}