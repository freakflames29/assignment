#include "iostream"
using namespace std;
void bubble(int a,int b[10])
{
  int n=a;
  int swap;
  int i,j,temp;
  for(i=1;i<n;i++)
  {
    swap=0;
    for(j=0;j<n-i;j++)
    {
      if (b[j]>b[j+1])

       {
         temp=b[j];
         b[j]=b[j+1];
         b[j+1]=temp;
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
  std::cout << "after bubble sort" << '\n';
  for(i=0;i<n;i++)
  {
    std::cout << b[i] << '\n';
  }

}
void insertion(int c,int d[10])
{
  int temp,i,j;
  int n=c;
  for(i=1;i<n;i++)
  {
    temp=d[i];
    j=i-1;
    while (j>=0&&d[j]>temp)
     {
       d[j+1]=d[j];
       j--;
      /* code */
    }

    d[j+1]=temp;
  }
  std::cout << "after insertion sort" << '\n';
  for(i=0;i<n;i++)
  {
    std::cout << d[i] << '\n';
  }


}
void selection(int e,int f[10])
{
  int min,loc,i,j;
  int temp;
  int n=e;
  for(i=0;i<n-1;i++)
  {
    min=f[i];
    loc=i;
    for(j=i+1;j<n;j++)
    {
      if (f[j]<min)
       {
         min=f[j];
         loc=j;
        /* code */
      }
    }
    temp=f[i];
    f[i]=f[loc];
    f[loc]=temp;

  }
  std::cout << "after selection sort" << '\n';
  for(i=0;i<n;i++)
  {
    std::cout << f[i] << '\n';
  }

}
int main()
{
  int n;
  int f;
  int s;
  std::cout << "Enter the elemnts length" << '\n';
  cin>>n;
  int a[n];
  cout<<"Enter the elements"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

  cout<<"Enter 1 for bubble sort"<<endl;
  std::cout << "Enter 2 for insertion sort" << '\n';
  std::cout << "Enter the 3 selection sort" << '\n';
  std::cout << "Enter 4 for exit" << '\n';
  cin>>f;
  switch (f)
   {
    case 1:bubble(n,a);
    break;
    case 2:insertion(n,a);
    break;
    case 3:selection(n,a);
    break;
    case 4: exit;
    break;
    default:std::cout << "Wrong input !" << '\n';
    break;
  }
}
