/*41.Write a program to read N elements into an array and print them.
Input:
3
1 2 3
Output:
1 2 3*/
#include<iostream>
using namespace std;
int main(){
    int size,array[100];
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the elements of the array: ";
        cin>>array[i];
    }
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}