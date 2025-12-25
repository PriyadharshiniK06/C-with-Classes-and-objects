/*39.Write a program to calculate simple interest.
Input:
1000 2 5
Output:
100*/
#include<iostream>
using namespace std;
int main(){
    int principle,time,rate;
    cout<<"Enter the principle,time and rate: ";
    cin>>principle>>time>>rate;
    cout<<(principle*time*rate)/100;
}