#include<iostream>
using namespace std;
template<class T>
void lsearch(T a,T arr[20])
{
     T search,count=0;
    T n=a;
    cout<<"Enter the element to be searched"<<endl;
    cin>>search;
    //int abc[5];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==search)
        {
            cout<<search<<" found at location "<<(i+1)<<endl;
            count++;
        }
        /* code */
    }
    if (count==0)
    {
        cout<<search<<" not found"<<endl;
        /* code */
    }
    
    

}
template<class R>
void bsearch(R b,R abc[20])
{
    R search,n,last=0,mid,first=0;
    n=b;
    cout<<"Enter the element to be searched: "<<endl;
	cin>>search;
	last=n-1;
    while(first<=last)
	{
		mid=(first+last)/2;
		if (abc[mid]<search)

		{
			first=mid+1;
		}
		else if (abc[mid]==search)

		{
			cout<<search<<" found at locaton "<<(mid+1)<<endl;
			break;
			/* code */
		}
		else
		{
			last=mid-1;
		}
	}
	if (first>last)
	{
		cout<<search<<" element not found"<<endl;
		/* code */
	}
}
int main()
{
    int n;
    cout<<"Enter the length"<<endl;
    cin>>n;
    int ar[n];
    cout<<"Enter the elemnts in sorted order for binary search "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
        /* code */
    }
    cout<<"press 1 for linear search:"<<endl;
     cout<<"press 2 for binary  search:"<<endl;
      cout<<"press 3 for exit:"<<endl;
      int a;
      cin>>a;
      switch (a)
      {
      case 1:    lsearch(n,ar);
                    break;
      case 2: bsearch(n,ar);
      break;
      case 3:exit;

      
      default:cout<<"wrong input !"<<endl;
          break;
      }
    return 0;
    
    
}