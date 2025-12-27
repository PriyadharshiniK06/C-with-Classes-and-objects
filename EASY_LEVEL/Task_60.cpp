/*60.Write a program to compare two strings.
Input:
abc
abc
Output:
Equal*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string string1,string2;
    cout<<"Enter the two strings: ";
    cin>>string1>>string2;
    if(string1==string2){
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }
}