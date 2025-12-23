/*25.Write a program to print all prime numbers between 1 and N.
Input:
10
Output:
2 3 5 7*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    for(int i=2;i<=number;i++){
        bool prime=true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                prime=false;
                break;
            }
        }
        if(prime==true){
            cout<<i<<" ";
        }
    }
}