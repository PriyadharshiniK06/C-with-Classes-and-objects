/*52.Write a program to find the length of a string without using length().
Input:
Hello
Output:
5*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string strings;
    cout<<"Enter the string: ";
    cin>>strings;
    int count=0;
    for(int i=0;strings[i]!= '\0';i++){
        count+=1;
    }
    cout<<count;
}