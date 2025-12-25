/*37.Write a program to find GCD of two numbers.
Input:
12 18
Output:
6*/
#include<iostream>
#include<numeric>
using namespace std;
int main(){
    int number1,number2;
    cout<<"Enter the two numbers: ";
    cin>>number1>>number2;
    cout<<gcd(number1,number2);
}