/*13.Write a program to swap two numbers using a temporary variable.
Input:
3 5
Output:
5 3*/
#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter the two numbers : ";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a = "<<a<<" b = "<<b;
}