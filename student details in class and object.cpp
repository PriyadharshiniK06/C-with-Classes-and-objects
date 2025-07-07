#include<iostream>
using namespace std;
class student
{
	public:
	string stu1;
	string stu2;
	string stu3;
	string dept1;
	string dept2;
	string dept3;
	int rgno1;
	int rgno2;
	int rgno3;
};
int main()
{
	student obj;
	obj.stu1="Priya";
	obj.stu2="Raji";
	obj.stu3="harshu";
	obj.dept1="CSE";
	obj.dept2="CSE";
    obj.dept3="CSE";
    obj.rgno1=2345678;
    obj.rgno2=2345679;
    obj.rgno3=2345681;
    cout<<"The first student name is:"<<obj.stu1<<endl;
    cout<<"The first student register no is:"<<obj.rgno1<<endl;
    cout<<"The fist student department is:"<<obj.dept1<<endl<<endl;
    cout<<"The second student name is:"<<obj.stu2<<endl;
    cout<<"The second student register no is:"<<obj.rgno2<<endl;
    cout<<"The second student department is:"<<obj.dept2<<endl<<endl;
    cout<<"The third student name is:"<<obj.stu3<<endl;
    cout<<"The third student register no is:"<<obj.rgno3<<endl;
    cout<<"The third student department is:"<<obj.dept3<<endl;
}

