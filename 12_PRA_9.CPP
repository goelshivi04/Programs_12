#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<process.h>
class product
{
	private:
		int pno,price;
		char pname[20];
	public:
		long int count();
		void enter();
		void modify();
		void display();
}p;
void product::display()
{
	clrscr();
	long int n;int i;
	n=count();
	ifstream fin("product.dat",ios::binary);
	fin.seekg(0,ios::beg);
	for(i=0;i<n;i++)
	{   fin.read((char*)&p,sizeof(p));
	    cout<<"\n\nProduct no.: "<<pno;
	    cout<<"\nProduct name: "<<pname;
	    cout<<"\nProduct price: "<<price;
	}
	fin.close();
}

void product::enter()
{
	clrscr();
	char ch;
	ofstream fout;
	fout.open("product.dat",ios::app|ios::binary);
	do{ clrscr();
	cout<<"\nEnter product number: ";
	cin>>pno;
	cout<<"\nEnter product name: ";
	gets(pname);
	cout<<"\nEnter Price: ";
	cin>>price;
	fout.write((char*)&p,sizeof(p));
	cout<<"\nDo you want to enter more record (Y/N)?\n";
	cin>>ch;
	}while(ch=='y'||ch=='Y');
	fout.close();

}
long int product::count()
{
	clrscr();
	ifstream fin;
	fin.open("product.dat",ios::binary);
	if(!fin)
	cout<<"File does not exist";
	fin.seekg(0,ios::end);
	long int n=fin.tellg()/sizeof(p);
	fin.close();
	return n;
}

void product::modify()
{
	clrscr();
	int p1;
	ifstream fin("product.dat",ios::binary);
	fstream f("new.dat",ios::in|ios::out|ios::binary|ios::app);
	cout<<"\n Enter the product number whose price has to be changed: ";
	cin>>p1;
	for(int i=0;i<count();i++)
	{
		fin.read((char*)&p,sizeof(p));
		if(pno!=p1)
		f.write((char*)&p,sizeof(p));
		else
		{
			clrscr();
			cout<<"\nOld Price: "<<price<<endl;
			cout<<"\nEnter new price: ";
			cin>>price;
			f.write((char*)&p,sizeof(p));
		}
	}
	f.close();
	fin.close();
	remove("product.dat");
	rename("new.dat","product.dat");

}
void main()
{
	clrscr();
	int ch;
	char ch1;
	do{clrscr();
	cout<<"\n\n1.Add details of product\n";
	cout<<"2.Modify the price\n";
	cout<<"3.Display the details\n";
	cout<<"4.Quit";
	cout<<"\nEnter choice: ";
	cin>>ch;
	switch(ch)
{
	case 1 :
	p.enter();
	break;
	case 2 :
	p.modify();
	break;
	case 3 :
	p.display();
	break;
	case 4 :
	exit(0);
	break;
	default:
	cout<<"\nIncorrect Choice";
}
	cout<<"\n Do you want to continue: ";
	cin>>ch1;
    }while(ch1=='y'|| ch1=='Y');
getch();}