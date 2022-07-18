#include<iostream.h>
#include<conio.h>

void change(int a[ ],int s)
{ int i,j,temp;
if(s%2==0)
{for(i=0,j=s/2; j<s; i++,j++) 
{ temp=a[i];
a[i]=a[j];
a[j]=temp;
}}
else
{for(i=0,j=(s/2)+1; j<s; i++,j++) 
{ temp=a[i];
a[i]=a[j];
a[j]=temp;}
}
cout<<"\nResultant Array: \n";
for(i=0;i<s;i++)
cout<<a[i]<<"  ";
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
change(a,n);
getch();
}