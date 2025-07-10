#include<iostream>
using namespace std;
int main()
{
	try
	{
		int age=19;
		if(age>=18)
		{
			cout<<"you are accessed";
		}
	    else
	    {
	    	throw(age);
	    	
		}
	}
	catch(int num)
	{
		cout<<"Sorry you are not accessed"<<endl;
		cout<<"Age is:"<<num;
	}
}
