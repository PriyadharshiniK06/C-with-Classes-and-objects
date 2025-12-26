/*54.Write a program to check whether a string is a palindrome.
Input:
madam
Output:
Palindrome*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string strings;
    cout<<"Enter the string: ";
    cin>>strings;
    string reverse(strings.rbegin(),strings.rend());
    if(strings==reverse){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}