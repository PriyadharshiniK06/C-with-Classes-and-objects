#include<iostream>
using namespace std;
class A
{
	private:
		int x;
		string y;
		int z;

	public:
	void fun(int a,string b,int c)
	{
	
		x=a;
		y=b;
		z=c;
		cout<<"x is "<<x<<endl;
		cout<<"y is "<<y<<endl;
		cout<<"z is "<<z<<endl;
		
		
	}
	
};
int main()
{
	A obj;
	
	obj.fun(34,"Priya",56);
	return 0;
}
