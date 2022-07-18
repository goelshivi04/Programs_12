#include<iostream.h>
#include<conio.h>
void merge(int a1[], int a2[],int a3[],int n1,int n2)
{
int i=0,j,k=0;
j=n2-1;
while (i<n1 && j>=0)
{
  if (a1[i] < a2[j])
     a3[k++] = a1[i++];
  else
     a3[k++] = a2[j--];
}
while (i < n1)
  a3[k++] = a1[i++];
while (j>=0)
  a3[k++] = a2[j--];
cout<<"\n\nMerged Array: \n";
for(i=0;i<n1+n2;i++)
cout<<a3[i]<<"  ";
}
void main()
{ clrscr();
int i,n1,n2,a1[10],a2[10],a3[20];
cout<<"\nEnter number of elements in array 1(Ascending Order): ";
cin>>n1;
cout<<"\nEnter elements: ";
for(i=0;i<n1;i++)
cin>>a1[i];

cout<<"\nEnter number of elements in array 2(Descending Order): ";
cin>>n2;
cout<<"\nEnter elements: ";
for(i=0;i<n2;i++)
cin>>a2[i];

cout<<"\nOriginal Array 1 :\n";
for(i=0;i<n1;i++)
cout<<a1[i]<<"  ";

cout<<"\n\nOriginal Array 2 :\n";
for(i=0;i<n2;i++)
cout<<a2[i]<<"  ";
merge(a1,a2,a3,n1,n2);
getch();
}