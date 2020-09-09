#include<iostream>
using namespace std;
int main()
{
    int n,temp,i,j;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for ( i = 1; i <n; i++)
    {
        temp=a[i];
        j=i-1;
        while (j>=0&&a[j]>temp)

        {
            a[j+1]=a[j];
            j--;
            /* code */
        }
        a[j+1]=temp;
        /* code */
    }
    cout<<"Elemnt after insertion sort"<<endl;
    for ( i = 0; i <n; i++)
    {
        cout<<" "<<a[i]<<endl;
        /* code */
    }
    return 0;


}
