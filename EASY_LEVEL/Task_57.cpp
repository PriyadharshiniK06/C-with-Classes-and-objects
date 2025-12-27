/*57.Write a program to convert a string to uppercase.
Input:
hello
Output:
HELLO*/
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string strings;
    cout<<"Enter the string: ";
    cin>>strings;
    transform(strings.begin(),strings.end(),strings.begin(),::toupper);
    cout<<strings;
}