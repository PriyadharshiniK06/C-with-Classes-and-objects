#include <iostream>  
#include <cstring>  
using namespace std;  
int main ()  
{  
  char key[6] = "mango";  
  char buffer[6];  
  do {  
     cout<<"What is my favourite fruit? ";  
     cin>>buffer;  
  } while (strcmp (key,buffer) != 0);  
 	cout<<"Answer is correct!!"<<endl;
  return 0;  
}  
