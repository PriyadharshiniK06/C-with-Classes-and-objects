/*33.Write a program to count the number of digits in a number.
Input:
1234
Output:
4*/
#include<iostream>
using namespace std;
int main(){
    int a,count=0;
    cout<<"Enter the number: ";
    cin>>a;
    while(a>0){
        count+=1;
        a/=10;
    }
    cout<<count;
}