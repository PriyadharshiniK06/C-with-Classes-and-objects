#include<iostream>
using namespace std;
class A
{
	private:
		int s;
	public:
	void Salary(int S)
	{
		s=S;
	}
	int GetSalary()
	{
		return s;
		
	}
};
int main()
{
	A obj;
	obj.Salary(67000);
	cout<<"Your salary is: "<<obj.GetSalary()<<endl;
	return 0;
}
