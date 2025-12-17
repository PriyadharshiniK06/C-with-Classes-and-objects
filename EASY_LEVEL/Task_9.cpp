/*9.Write a program to check whether a number is even or odd.
Input:
8
Output:
Even*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    if(a%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}