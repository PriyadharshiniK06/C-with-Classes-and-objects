/*27.Write a program to check whether a number is a palindrome.
Input:
121
Output:
Palindrome*/
#include<iostream>
using namespace std;
int main(){
    int number,reverse=0,original;
    cout<<"Enter the number: ";
    cin>>number;
    original=number;
    for(;number>0;number/=10){
        reverse=(reverse*10)+number%10;
    }
    if(reverse==original){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}