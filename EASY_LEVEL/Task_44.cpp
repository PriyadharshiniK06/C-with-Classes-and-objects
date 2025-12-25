/*44.Write a program to find the minimum element in an array.
Input:
5
3 8 1 6 2
Output:
1*/
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
    int min=array[0];
    for(int i=0;i<size;i++){
        if(min>array[i]){
            min=array[i];
        }
    }
    cout<<min;
}