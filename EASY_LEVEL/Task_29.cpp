/*29.Write a program to check whether a number is an Armstrong number.
Input:
153
Output:
Armstrong*/
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    int number,original,digit_power,digit=0,length;
    cout<<"Enter the number: ";
    cin>>number;
    original=number;
    string strings;
    strings=to_string(number);
    length=strings.length();
    while(number>0){
        digit_power=pow((number%10),length);
        digit+=digit_power;
        number/=10;
    }
    if(digit==original){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
}