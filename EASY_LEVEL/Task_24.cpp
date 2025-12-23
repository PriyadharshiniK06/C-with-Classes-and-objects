/*24.Write a program to check whether a number is prime.
Input:
7
Output:
Prime*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number,prime=true;
    cout<<"Enter the number: ";
    cin>>number;
    for(int i=2;i<=sqrt(number);i++){
        if(number%i==0){
            prime=false;
        }
    }
    if(prime==true){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}