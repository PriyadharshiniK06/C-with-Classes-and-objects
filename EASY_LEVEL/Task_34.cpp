/*34.Write a program to print the multiplication table of a number.
Input:
5
Output:
5 10 15 20 25*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    for(int i=1;i<=5;i++){
        cout<<number*i<<" ";
    }
}