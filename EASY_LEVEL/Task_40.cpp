/*40.Write a program to calculate compound interest.
Input:
1000 2 2
Output:
1040*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double principle,time,rate;
    cout<<"Enter the principle,time and rate: ";
    cin>>principle>>time>>rate;
    double inter=pow((1+rate/100),time);
    cout<<(int) (principle*inter);
}