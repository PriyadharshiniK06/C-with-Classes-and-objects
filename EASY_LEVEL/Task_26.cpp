/*26.Write a program to reverse a given number.
Input:
123
Output:
321*/
#include<iostream>
using namespace std;
int main(){
    int number,reverse=0;
    cout<<"Enter the number: ";
    cin>>number;
    for(;number>0;number/=10){
        reverse=(reverse*10)+number%10;
    }
    cout<<reverse;
}
