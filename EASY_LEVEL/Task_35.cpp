/*35.Write a program to calculate power of a number without using pow().
Input:
2 3
Output:
8*/
#include<iostream>
using namespace std;
int main(){
    int number1,number2,result=1;
    cout<<"Enter the two numbers: ";
    cin>>number1>>number2;
    for(int i=0;i<number2;i++){
        result*=number1;
    }
    cout<<result;
}