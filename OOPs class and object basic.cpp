#include<iostream>
using namespace std;
class abc
{
	public:
		int age=19;
		string name="Priya";
};
int main()
{
	abc obj;
	obj.age=19;
	obj.name="Priya";
	
    cout<<"The name is:"<<obj.name<<endl;
    cout<<"The age is:"<<obj.age<<endl;
}
