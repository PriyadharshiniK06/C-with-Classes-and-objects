/*61.Write a program to check whether all digits of a number are even.
Input:
248
Output:
Yes*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    string num=to_string(number);
    int length=num.length();
    int digit;
    int count=0;
    for(;number>0;number/=10){
        digit=number%10;
        if(digit%2==0){
            count+=1;
        }
    }
    if(length==count){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }


}