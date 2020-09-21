#include "iostream"
using namespace std;
struct node
{
	int data;
	node* next;

};
node* f(node* gg,int data) /* it will insert the data in the first positon*/
{
	node* o=new node();
	o->data=data;
	o->next=gg;
	return o;

}

node* insertIndex(node* head,int data,int index) //this will insert the data in the given index
{
	node* a=new node();
	node* b=head;
	int i=0;
	while(i!=index-1)
	{
		b=b->next;
		i++;

	}
	a->data=data;
	a->next=b->next;
	b->next=a;
	return head;

}
//insert by value
node* insertByValue(node* head,int data,int value)
{
    node* a=new node();
    a->data=data;
    node* p=head;

    while (p->data!=value&&p->next!=nullptr)
    {
        p=p->next;
    }
    if (p->data==value)
    {
        a->next=p->next;
        p->next=a;

    }
    return head;



}
// insert at last index
node* lastinsert(node* head,int data)
{
	node* a=new node();
	a->data=data;
	node* p=head;
	while (p->next!=nullptr)
	{
		p=p->next;
		/* code */
	}
	p->next=a;
	a->next=nullptr;
	return head;
	

}
void trav(node* ptr)// traverse the list and print the elements
{
	while(ptr!=nullptr)
	{
		cout<<"Elements:"<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
int main() {

    node *first = new node();
    node *second = new node();
    node *third = new node();
    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    cout << "The LinkedList" << endl;

    trav(first);
//	insert by value
    cout << "Enter the value" << endl;
    int val;
    cin >> val;
    cout << "Enter the data" << endl;
    int dat;
    cin >> dat;
    cout << "After inserting by value" << endl;
    first = insertByValue(first, dat, val);
    trav(first);
//	cout<<"The elemnt after inserting at last"<<endl;
//	first=lastinsert(first,599);
//	trav(first);
    /*cout<<"After insert in first postion"<<endl;
    first=f(first,99);
    trav(first);*/

    /*this will check the inedex and will insert the elemet*/

    // i comment this for  checking the insert in last function

    // cout<<"Enter the index to insert between 0-3"<<endl;
    // int kol;
    // cin>>kol;

    // cout<<"After insertion in " <<kol <<" index:"<<endl;
    // if(kol==0)
    // {
    // 	first=f(first,99);
    // 	trav(first);

    // }
    // else
    // {
    // first=insertIndex(first,99,kol);
    // trav(first);
    // }
    return 0;
}