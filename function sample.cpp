#include<iostream>
using namespace std;
void fun()
{
	cout<<"The Function to do is:"<<endl;}
//parameterised function
void fun(int a,string b)
{
	cout<<"My name is:"<<b<<endl;
	cout<<"My age is:"<<a<<endl;
}
int main()
{
	fun();
	fun(18,"priya");
}
