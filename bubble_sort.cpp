#include "iostream"
using namespace std;
int main()
{
  int swap,i,j,n,temp;
  std::cout << "Enter the length" << '\n';
  cin>>n;
  int a[n];
  std::cout << "Entr the elements" << '\n';
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=1;i<n;i++)
  {
    swap=0;
    for(j=0;j<n-i;j++)
    {
      if (a[j]>a[j+1])
       {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
         swap=1;
        /* code */
      }


  }
  if (swap==0)
   {
     break;
    /* code */
  }
}
std::cout << "the sorted list" << '\n';
for(i=0;i<n;i++)
{
  std::cout << a[i] <<" ";
}
}
