/*32.Write a program to find the smallest of three numbers.
Input:
4 9 2
Output:
2*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<a;
    }
    else if(b<a && b<c){
        cout<<b;
    }
    else{
        cout<<c;
    }
}