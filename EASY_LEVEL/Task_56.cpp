/*56.Write a program to count consonants in a string.
Input:
hello
Output:
3*/
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        char character=str[i];
        if(character!='a'&& character!='e' &&  character!='i' &&  character!='o' &&  character!='u' && character!='A' &&  character!='E' && character!='I'&& character!='O'&& character!='U'){
            count+=1;
        }
    }
    cout<<count;
}