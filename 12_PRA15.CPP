#include<iostream.h>
#include<conio.h>
void shift(int a[],int n)
{ int i,j,temp;
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
       a[j]=0;
    }
}
for(i=0;i<n-1;i++)
{
  if(a[i]==0)
  {
   temp=a[i];
   a[i]=a[i+1];
   a[i+1]=temp;
  }
}
cout<<"\nResultant Array :\n";
for(i=0;i<n;i++)
cout<<a[i]<<"  ";
}

void main()
{  clrscr();
  int i,n,a[20];
  cout<<"\nEnter number of elements: ";
  cin>>n;
  cout<<"\nEnter elements: ";
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<"\nOriginal array: \n";
  for(i=0;i<n;i++)
  cout<<a[i]<<"  ";
  shift(a,n);
  getch();
}