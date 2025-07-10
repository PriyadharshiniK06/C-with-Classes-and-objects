#include<iostream>
using namespace std;
class A
{
		
	public:
		int x;
		void fun()
		{
			cout<<"Hello!!"<<endl;
		}
};
class B:public A
{

	public:
		int y;
		void func(int x)
		{
			cout<<"The number is"<<x<<endl;
		}
};
class C:public B
 {
	   public:
    	int z;
    	int funct()
    	{
    		return 56;
		}
};
int main()
{
	C obj;
	B obje;
	obje.x=90;
	obj.y=89;
	obj.z=78;
	obje.fun();
	obj.func(45);
	cout<<obj.funct()<<endl;
    cout<<obje.x<<endl;
    cout<<obj.y<<endl;
    cout<<obj.z<<endl;
}
    	
	  		
		
