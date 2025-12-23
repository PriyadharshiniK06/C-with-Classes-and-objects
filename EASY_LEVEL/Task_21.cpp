/*21.Write a program to print all even numbers between 1 and N.
Input:
10
Output:
2 4 6 8 10*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    for(int i=1;i<=number;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
}