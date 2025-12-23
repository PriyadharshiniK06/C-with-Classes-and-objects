/*23.Write a program to find the factorial of a number.
Input:
5
Output:
120*/
#include<iostream>
using namespace std;
int main(){
    int number,fact=1;
    cout<<"Enter the number: ";
    cin>>number;
    for(int i=1;i<=number;i++){
        fact*=i;
    }
    cout<<fact;
}