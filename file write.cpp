#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("file.txt");
	file<<"Files have three ways they are read,write,append";
	file.close();//if we use only write it will run but nothing will be displayed in the output)
	string text;
	ifstream read("file.txt");
	while(getline(read,text))
	{
		cout<<text;
		
	}
	read.close();
}
