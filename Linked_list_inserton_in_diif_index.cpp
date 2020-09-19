#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
void trav(node* ptr)
{
    while (ptr!=NULL)
    {
        cout<<"Elements:-"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
node* insertAtFirst(node* head)
{
    node* p=head;

}
int main()
{
    node* head=new node();
        node* second =new node();
            node* third=new node();
                node* fourth=new node();

     head->data=10;
     head->next=second;

     second->data=20;
     second->next=third;

     third->data=30;
     third->next=fourth;

     fourth->data=40;
     fourth->next=NULL;

     cout<<"The list before insertion in Linked List"<<endl;
     trav(head);



}