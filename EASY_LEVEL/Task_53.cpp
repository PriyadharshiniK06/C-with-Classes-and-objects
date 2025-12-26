/*53.Write a program to reverse a string.
Input:
abc
Output:
cba*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string strings;
    cout<<"Enter the string: ";
    cin>>strings;
    string reverse(strings.rbegin(),strings.rend());
    cout<<reverse;
}