/*28.Write a program to find the sum of digits of a number.
Input:
123
Output:
6*/
#include<iostream>
using namespace std;
int main(){
    int number,sum=0;
    cout<<"Enter the number: ";
    cin>>number;
    for(;number>0;number/=10){
        sum+=number%10;
    }
    cout<<sum;
}