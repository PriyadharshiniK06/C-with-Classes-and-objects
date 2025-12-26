/*47.Write a program to copy one array into another.
Input:
3
5 6 7
Output:
5 6 7*/
#include<iostream>
using namespace std;
int main(){
    int array1[100],array2[100],size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>array1[i];
    }
    for(int i=0;i<size;i++){
        array2[i]=array1[i];
    }
    for(int i=0;i<size;i++){
        cout<<array2[i]<<" ";
    }
}