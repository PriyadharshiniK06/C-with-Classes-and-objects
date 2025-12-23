/*11.Write a program to find the sum of first N natural numbers.
Input:
5
Output:
15*/
#include<iostream>
using namespace std;
int main(){
    int a,sum = 0;
    cout<<"Enter the number : ";
    cin>>a;
    for(int i=0;i<=a;i++){
        sum=sum+i;
    }
    cout<<sum;
}