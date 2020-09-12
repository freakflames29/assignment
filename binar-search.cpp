#include "iostream"
using namespace std;
int main()
{
  int search,first=0,last,mid,n,i;
  cout<<"Enter the elemnt length"<<endl;
  cin>>n;
  int a[n];
  cout<<"enter the elements:"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Enter the elemnt to be searched"<<endl;
  cin>>search;
  last=n-1;
  while(first<=last)
  {
    mid=(first+last)/2;

    if(a[mid]<search)
    {
      first=mid+1;
    }
    else if(a[mid]==search)
    {
      cout<<search<<" elemnt found at location "<<(mid+1)<<endl;
      break;
    }
    else
    {
      last=mid-1;
    }
  }
  if(first>last)
  {
    cout<<search<<" not found "<<endl;
  }
  return 0;
}
