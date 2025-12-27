/*58.Write a program to convert a string to lowercase.
Input:
HELLO
Output:
hello*/
#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string strings;
    cout<<"Enter the string: ";
    cin>>strings;
    transform(strings.begin(),strings.end(),strings.begin(),::tolower);
    cout<<strings;
}