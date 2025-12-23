/*20.Write a program to print numbers from 1 to N.
Input:
5
Output:
1 2 3 4 5*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    for(int i=1;i<=number;i++){
        cout<<i<<" ";
    }
}