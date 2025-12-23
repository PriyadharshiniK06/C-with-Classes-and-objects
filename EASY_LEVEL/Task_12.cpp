/*12.Write a program to find the average of three numbers.
Input:
4 6 8
Output:
6*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c,avg;
    cout<<"Enter the three numbers : ";
    cin>>a>>b>>c;
    avg=(a+b+c)/3;
    cout<<avg;
}