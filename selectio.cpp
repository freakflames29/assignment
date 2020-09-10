#include<iostream>
using namespace std;
int main()
{
    int min,loc,temp,i,j,n;
    cout<<"Enter the lenngth"<<endl;
    cin>>n;
    int a[10];
    cout<<"Enter the elements"<<endl;
    for ( i = 0; i <n; i++)
    {
        cin>>a[i];
        /* code */
    }
    for ( i = 0; i <n-1; i++)
    {
        min=a[i];
        loc=i;
        for ( j = i+1;j <n;j++)
        {
            if (a[j]<min)
            {
                min=a[j];
                loc=j;
                /* code */
            }
            
            /* code */
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
        
    }
    cout<<"the sorted element"<<endl;
    for ( i = 0; i <n; i++)
    {
        cout<<a[i]<<endl;
        /* code */
    }
    
    
    
}