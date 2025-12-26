/*46.Write a program to reverse an array.
Input:
4
1 2 3 4
Output:
4 3 2 1*/
#include<iostream>
using namespace std;
int main(){
    int size,array[100];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int reverse[100];
    for(int j=size-1,k=0;j>=0,k<size;j--,k++){
            reverse[k]=array[j];
    }
    for(int l=0;l<size;l++){
        cout<<reverse[l]<<" ";
    }
}