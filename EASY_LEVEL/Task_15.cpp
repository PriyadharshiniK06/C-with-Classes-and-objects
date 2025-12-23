/*15.Write a program to convert Celsius temperature to Fahrenheit.
Input:
0
Output:
32*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the Celsius Temperature: ";
    cin>>a;
    int fahrenheit=(9/5)*(a+32);
    cout<<fahrenheit;
}