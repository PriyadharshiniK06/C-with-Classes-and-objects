/*62.Write a program to check whether a number contains digit 5.
Input:
152
Output:
Yes*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    for(;number>0;number/=10){
        int digit=number%10;
        if(digit==5){
            cout<<"Yes";
        }
    }
}