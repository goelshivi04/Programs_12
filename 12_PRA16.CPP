#include<iostream.h>
#include<conio.h>
void addup(int arr[],int n)
{ int i;
for(i=0;i<n;i++)
{
if(i%2==0)
arr[i]=arr[i]+arr[i+1];
else
arr[i]=arr[i]+10;
}
cout<<"\nResultant Array: \n";
for(i=0;i<n;i++)
cout<<arr[i]<<"  ";
}

void main()
{ clrscr();
int i,n,arr[20];
cout<<"\nEnter number of elements: ";
cin>>n;
cout<<"\nEnter elements: ";
for(i=0;i<n;i++)
cin>>arr[i];
cout<<"\nOriginal Array:\n";
for(i=0;i<n;i++)
cout<<arr[i]<<"  ";
addup(arr,n);
getch();
}