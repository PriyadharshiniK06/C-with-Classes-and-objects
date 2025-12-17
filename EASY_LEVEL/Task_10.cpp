/*10.
Write a program to check whether a number is positive or negative.
Input:
-3
Output:
Negative*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if(a>0){
        cout<<"Positive";
    }
    else if(a==0){
        cout<<"Zero";
    }
    else{
        cout<<"Negative";
    }
}