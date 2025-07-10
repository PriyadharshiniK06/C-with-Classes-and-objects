#include<iostream>
using namespace std;
class a
{
	public:
	int x;
};
class b
{
	public:
	int fn()
	{
		return 5678;
	}
};
class c:public a
{
	public:
		int y;
};
class d:public a
{
	public:
		int fun(int z)
		{
			return z;
			
		}
};
class e:public a
{
	public:
		int j;
		
};
class f:public b
{
	public:
		int u;
};
int main()
{
	f ob;
	ob.u=8;
	cout<<ob.u<<endl;
	cout<<ob.fn()<<endl;
	e obj;
	obj.j=9;
	obj.x=85;
	cout<<obj.x<<endl;
	cout<<obj.j<<endl;
	d obje;
	cout<<obje.fun(4)<<endl;
	obje.x=85;
	cout<<obje.x<<endl;
	c objec;
	objec.x=85;
	cout<<objec.x<<endl;
	objec.y=3;
	cout<<objec.y<<endl;
	
}
