#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int n,i;
cout<<"\n\nEnter total number of students:";
cin>>n;
float *ptr;
ptr=new float[n];
cout<<"\nEnter CGPA of students "<<endl;
for(i=0;i<n;i++)
{
  cout<<"Student "<<i+1<<" : ";
  cin>>*(ptr+i);
}
cout<<"\nDisplaying CGPA of students "<<endl;
for(i=0;i<n;i++)
{
  cout<<"Student "<<i+1<<" : "<<*(ptr+i)<<endl;
}
delete[]ptr;
getch();
}

