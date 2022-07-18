#include<iostream.h>
#include<conio.h>
void lower(int a[ ],int n)
{
int b[10][10],i,j,k=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
if(i+j>=n-1)
b[j][i]=a[k];
else
b[i][j]=0;
k++;
}
cout<<"\n\nResultant Array: \n";
for(i=0;i<n;i++)
{ cout<<endl;
for(j=0;j<n;j++)
cout<<b[i][j]<<" ";
}
}
void main()
{ clrscr();
int i,n,a[20];
cout<<"\nEnter number of elements: ";
cin>>n;
cout<<"\nEnter elements: ";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\nOriginal Array:\n";
for(i=0;i<n;i++)
cout<<a[i]<<"  ";
lower(a,n);
getch();
}