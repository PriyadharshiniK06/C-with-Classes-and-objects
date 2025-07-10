#include<iostream>
using namespace std;
int main()
{
	try 
	{
		int num=8;
		if(num<=5)
		{
			cout<<"number is lesser or equal to 5";
		}
		else
		{
			throw 505;
		}
	}
	//catch(int num)
	catch(...)
	{
		cout<<"number is greater "<<endl;
		//cout<<num; // (if it is declared in three dots then it appears as num is not declared.)
	}
}
