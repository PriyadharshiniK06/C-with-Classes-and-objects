#include<iostream>
using namespace std;

class C
{
	private:
		int x;
		int y;
		int c;
	public:
		
	void F(int a, int b)
	{
    	cout<<"Enter two numbers";
		x=a;
		y=b;
		
		c=x+y;
     }
	void display()
	{
		cout<<"c is : "<<c<<endl;
	}	
};
int main()
{
	C object;
	object.F(20,30);
	object.display();
}
