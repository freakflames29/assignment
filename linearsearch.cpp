#include<iostream>
using namespace std;
int main()
{
    int search,count=0,n;
    int i;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
        /* code */
    }
    cout<<"Enter the element to find"<<endl;
    cin>>search;
    for ( i = 0; i <n; i++)
    {
        if (a[i]==search)
        {
            cout<<search<<" Element found at location "<<(i+1)<<endl;
            count++;
            /* code */
        }
        
        /* code */
    }
    if(count==0)
    {
        cout<<search<<"not found !"<<endl;
    }    
    return 0;
}