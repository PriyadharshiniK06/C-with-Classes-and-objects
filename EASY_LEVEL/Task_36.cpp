/*36.Write a program to check whether a year is a leap year.
Input:
2024
Output:
Leap Year*/
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    if(year%4==0){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not Leap Year";
    }
}