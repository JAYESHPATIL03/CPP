#include<iostream.h>
#include<conio.h>
class student
{
protected:
	   int rollno;
	   char name[20];
public:
	   void get();
	   void put();
};
class mark:public student
{
protected:
	   int m1,m2;
public:
	   void get_mark();
	   void put_mark();
};
class result:public mark
{
private:
	int total;
public:
	void display();
};
void student::get()
{
cout<<"Enter Student Roll No:";
cin>>rollno;
cout<<"Enter Student Name:";
cin>>name;
}
void student::put()
{
cout<<"Roll No:"<<rollno<<endl;
cout<<"Name:"<<name<<endl;
cout<<"******************************"<<endl;
}
void mark::get_mark()
{
get();
cout<<"Enter 1st Subject Marks";
cin>>m1;
cout<<"Enter 2nd Subject Marks";
cin>>m2;
}
void mark::put_mark()
{
put();
cout<<"1st Subject Marks:"<<m1<<endl;
cout<<"2nd Subject Marks:"<<m2<<endl;
cout<<"*********************************"<<endl;
}
void result::display()
{
get_mark();
put_mark();
total=m1+m2;
cout<<"Total:"<<total<<endl;
}
main()
{
clrscr();
result r;
r.display();
getch();
}
