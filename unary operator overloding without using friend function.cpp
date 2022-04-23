//unary operator overloding without using friend function

#include<iostream.h>
#include<conio.h>
class unary
{
private:
	int a,b;
public:
	void get();
	void dislay();
	void operator -();
}
void unary::get()
{
cout<<"Enter value of a:-";
cin>>a;
cout<<"Enter value of b:-";
cin>>b;
}
void unary::display()
{
cout<<"Value of a:-"<<a<<endl;
cout<<"Value of b:-"<<b<<endl;
}
void unary::operator -();
{
a=a;
b=b;
cout<<"***********************"<<endl;
}
main()
{
clrscr();
unary u;
u.get();
-u;
u.display();
getch();
}
