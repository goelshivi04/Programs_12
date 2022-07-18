#include<iostream.h>
#include<conio.h>
void ChangeOver(int P[ ],int N)
{ int temp=P[N-1];
for(int i=N-2; i>=0; i--)
P[i+1]=P[i];
P[0]=temp;
cout<<"\nResultant Array: \n";
for(i=0;i<N;i++)
cout<<P[i]<<"  ";
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
ChangeOver(a,n);
getch();
}