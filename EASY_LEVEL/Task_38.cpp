/*38.Write a program to find LCM of two numbers.
Input:
4 6
Output:
12*/
#include<iostream>
#include<numeric>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    int lcm=(a*b)/gcd(a,b);
    cout<<lcm;
}