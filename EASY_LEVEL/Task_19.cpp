/*19.Write a program to check whether a number is divisible by 5.
Input:
20
Output:
Yes*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    if(number%5==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}