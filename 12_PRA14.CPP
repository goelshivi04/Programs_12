#include<iostream.h>
#include<conio.h>
#include<process.h>
void insertsort(int b[],int n2)
{
int i,t,temp;
 for(i=1;i<n2;i++)
 {
  temp=b[i];
  t=i-1;
  while(temp<b[t] && t>=0)
  {
   b[t+1]=b[t];
    t--;
  }
  b[t+1]=temp;
  cout<<"\nAfter pass: "<<i<<endl;
  for(int j=0;j<n2;j++)
    cout<<b[j]<<"\t";
 }
}

void selectsort(int a[],int n1)
{
  int j,i,small,pos,temp;
  for(i=0;i<n1;i++)
  {
     small=a[i];
     pos=i;
     for(j=i+1;j<n1;j++)
     {
       if(a[j]<small)
	{
	  small=a[j];pos=j;
	}
     }
   temp=a[i];
   a[i]=a[pos];
   a[pos]=temp;
   cout<<"\nAfter pass: "<<i+1<<endl;
   for(j=0;j<n1;j++)
     cout<<a[j]<<"\t";
  }
}

void main()
{ clrscr();
char ch1;
int x,a[20],b[20],n1,n2,i,j;
do
{clrscr();
cout<<"\n\n1.Selection Sort";
cout<<"\n2.Insertion Sort";
cout<<"\n3.Exit";
cout<<"\nEnter choice: ";
cin>>x;
switch(x)
{
case 1 :
clrscr();
cout<<"\n\nEnter total number of elements: ";
  cin>>n1;
cout<<"\nEnter elements:";
for(i=0;i<n1;i++)
  cin>>a[i];
cout<<"\nOriginal Array:\n";
for(i=0;i<n1;i++)
cout<<a[i]<<"\t";
cout<<endl;
selectsort(a,n1);
break;

case 2 :
clrscr();
cout<<"\n\nEnter total number of elements: ";
  cin>>n2;
cout<<"\nEnter elements:";
for(i=0;i<n2;i++)
  cin>>b[i];
cout<<"\nOriginal Array:\n";
for(i=0;i<n2;i++)
cout<<b[i]<<"\t";
cout<<endl;
insertsort(b,n2);
break;

case 3:
exit(0);

default:
cout<<"\nIncorrect Choice";
}
cout<<"\n Do you want to continue(Y/N): ";
cin>>ch1;
}while(ch1=='Y'|| ch1=='y');
getch();
}






