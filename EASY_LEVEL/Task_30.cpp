/*30.Write a program to print Fibonacci series up to N terms.
Input:
5
Output:
0 1 1 2 3*/
#include<iostream>
using namespace std;
int main(){
    int a,b,number,c;
    a=0;
    b=1;
    cout<<"Enter the number: ";
    cin>>number;
    for(int i=1;i<=number;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
        
    }
}