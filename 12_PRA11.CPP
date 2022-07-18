#include <iostream.h>
#include <string.h>
#include<conio.h>
class employee
{
private:
int n;
float *ptr;
float total;

public:
employee();
void cal();
}

employee::employee()
{int i;
cout<<"\n\nEnter total number of employees: ";
cin>>n;
ptr=new float[n];
cout <<"Enter salary of each employee:"<<endl;
for (i=0;i<n;i++)
{
cout<<"Employee "<<i+1<<" : ";
cin >>*(ptr + i);
}
}

void employee::cal()
{int i;
total=0;
cout<<endl<<"The salary of each employee is "<<endl;
for (i=0;i<n; ++i)
{
cout<<"Employee "<<i+1<<" : "<<"Rs."<<*(ptr+i)<<endl;
total+=*(ptr+i);
}
cout<<endl<<"Total salary paid by a company to its employees is: Rs."<<total;
}
void main()
{
clrscr();
employee e;
e.cal();
getch();
}
