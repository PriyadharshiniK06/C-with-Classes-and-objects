/*14.Write a program to swap two numbers without using a temporary variable.
Input:
2 7
Output:
7 2*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}