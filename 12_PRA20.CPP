#include<iostream.h>
#include<conio.h>

void transfer(int a[][20],int r,int c)
{
	int i,j;
                if(r>1)
		for( j=0; j<c; j++)
		{
			a[1][j]=a[1][j]+a[r-2][j];
			a[r-2][j]=a[1][j]-a[r-2][j];
			a[1][j]=a[1][j]-a[r-2][j];
		}
		if(c>1)
		for(i=0; i<r; i++)
		{
			a[i][1]=a[i][1]+a[i][c-2];
			a[i][c-2]=a[i][1]-a[i][c-2];
			a[i][1]=a[i][1]-a[i][c-2];
		}
		cout<<"\nResultant Array: \n";
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			cout<<"\t"<<a[i][j];
			cout<<endl;
		}
		
}

void main()
{ clrscr();
char ch='y';
int i,j,r,c,a[20][20];
do{ clrscr();
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
transfer(a,r,c);
cout<<"\nDo you want to do it again(Y/N) ? ";
cin>>ch;
}while(ch=='y'|| ch=='Y');
getch();
}