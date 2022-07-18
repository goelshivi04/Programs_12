#include<iostream.h>
#include<conio.h>
class rectangle
{
private:
 float length;
 float breadth;
public:
rectangle (float l,float b)
{
  length=l;
  breadth=b;
}
float area()
{
return (length*breadth);
}
int compare(rectangle rect)
{
return(this->area() > rect.area());
}
};

void main()
{
clrscr();
float l,b,l1,b1;
cout<<"\nEnter length of first rectangle: ";
cin>>l;
cout<<"Enter breadth of first rectangle: ";
cin>>b;
rectangle rect1(l,b);
cout<<"Enter length of second rectangle: ";
cin>>l1;
cout<<"Enter breadth of second rectangle: ";
cin>>b1;
rectangle rect2(l1,b1);
if(rect1.compare(rect2))
cout<<"\nRectangle 2 is smaller than Rectangle 1" <<endl;
else
cout<<"\nRectangle 2 is equal to or larger than Rectangle 1"<<endl;
getch();
}
