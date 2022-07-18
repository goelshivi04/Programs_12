#include<iostream.h>
#include<conio.h>

void revrow(int p[ ][20],int n,int m)
{int i,j,temp;
for(i=0;i<n;i++)
{
for(j=0;j<m/2;j++)
{
temp= p[i][j];
p[i][j]=p[i][m-j-1];
p[i][m-j-1]=temp;
}
}
cout<<"\n\nResultant Array: \n";
for(i=0;i<n;i++)
{
for(j=0;j<m; j++)
cout<<p[i][j]<<"  ";
cout<<endl;
}
}

void main()
{ clrscr();
int i,j,r,c,a[20][20];
cout<<"\nEnter number of rows: ";
cin>>r;
cout<<"\nEnter number of columns: ";
cin>>c;
cout<<"\nEnter elements: ";
for(i=0;i<r;i++)
  for(j=0;j<c;j++)
cin>>a[i][j];
cout<<"\nOriginal Array:\n";
for(i=0;i<r;i++)  {
for(j=0;j<c;j++)
cout<<a[i][j]<<"  ";
cout<<endl;}
revrow(a,r,c);
getch();
}