//unary operator overloading using friend function

#include<iostream.h>
#include<conio.h>
class unary
{
private:
	int a,b;
public:
	void get();
	void display();
	void friend operator -(unary &x);
};
void unary::get()
{
cout<<"Enter Value Of a:";
cin>>a;
cout<<"Enter Value Of b:";
cin>>b;
}
void unary::display()
{
cout<<"value of A:"<<a<<endl;
cout<<"Value of B:"<<b<<endl;
}
void operator -(unary &x)
{
x.a=-x.a;
x.b=-x.b;
}
main()
{
clrscr();
unary u;
u.get();
u.display();
 -u;
 u.display();

getch();
}
