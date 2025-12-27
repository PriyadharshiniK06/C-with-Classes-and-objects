/*59.Write a program to count words in a sentence.
Input:
I love C++
Output:
3*/
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string sentence;
    cout<<"Enter the sentence: ";
    getline(cin,sentence);
    stringstream ss(sentence);
    string word;
    int count=0;
    while(ss>> word){
        count+=1;
    }
    cout<<count;
}
