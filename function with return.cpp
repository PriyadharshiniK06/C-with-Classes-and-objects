#include<iostream>
using namespace std;

//return and argument
int fun(int x)
{
	cout<<"\n";
	return x+5;
	
}

//return and no argument
int func()
{
	cout<<"\n";
	return 6;
	
}

//Argument and no return
void funct(int x)
{
	cout<<"\n";
	cout<<"the x value is:"<<x;
	
}

void functi()
{
	cout<<"\n";
	cout<<15;
}
int main()
{
	functi();
	cout<<fun(10);
	funct(15);
	cout<<func();
}

