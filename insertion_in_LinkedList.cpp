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
void trav(node* ptr)// traverse the list and print the elements
{
	while(ptr!=0)
	{
		cout<<"Elements:"<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
int main()
{
	node* first=new node();
	node* second=new node();
	node* third=new node();
	node* fourth=new node();
	first->data=10;
	first->next=second;

	second->data=20;
	second->next=third;

	third->data=30;
	third->next=NULL;

	cout<<"The LinkedList"<<endl;

	trav(first);
	/*cout<<"After insert in first postion"<<endl;
	first=f(first,99);
	trav(first);*/

	/*this will check the inedex and will insert the elemet*/
	cout<<"Enter the index to insert between 0-3"<<endl;
	int kol;
	cin>>kol;

	cout<<"After insertion in " <<kol <<" index:"<<endl;
	if(kol==0)
	{
		first=f(first,99);
		trav(first);

	}
	else
	{
	first=insertIndex(first,99,kol);
	trav(first);
	}
	return 0;


}
