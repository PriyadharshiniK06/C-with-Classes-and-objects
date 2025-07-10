#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		int y;
		void fun()
		{
			cout<<"HI HELLO!!\n";
		}
		
};
class B:public A
{
	public:
		int d;
		int e;
		int func(int x)
		{
			return x+5;
		}
	
};
int main()
{
	B obj;
	obj.x=67;
	obj.y=69;
	obj.d=78;
	obj.e=90;
	cout<<obj.x<<endl;
	cout<<obj.y<<endl;
	cout<<obj.d<<endl;
	cout<<obj.e<<endl;
	obj.fun();
    cout<<obj.func(56);
}
