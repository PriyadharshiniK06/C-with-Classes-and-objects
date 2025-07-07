#include<iostream>
using namespace std;
class fun
{
	public:
	void function(){
		cout<<"Hi hello!!!"<<endl;//[with no return and no argument]
	}
	void funct(int a,int b)
	{
		int c=a+b;//[with no return and has an operation or an argument]
		cout<<c<<endl;
	}
	int functi()
	{
		return 67;//[with return and no argument]
	}
	int functions(int x){
		cout<<"\n";
		return x+76;//[with return and argument]
	}
	
};
int main()
{
	fun obj;
	obj.function();
	obj.funct(34,56);
	cout<<obj.functi();
	cout<<obj.functions(90);//[cout is only for return values] 

	return 0;
}
