#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		string y;
		int z ;
		A(int a,string b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		
};
int main()
{
	A obj(13,"Priya",45);
	A obje(67,"Yes",56);
	cout<<obj.x<<""<<endl<<obj.y<<""<<endl<<obj.z<<""<<endl;
	cout<<obje.x<<""<<endl<<obje.y<<""<<endl<<obje.z<<""<<endl;
	return 0;
}
