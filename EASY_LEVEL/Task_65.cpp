/*65.Write a program to check whether array is sorted or not.
Input:
5
1 2 3 4 5
Output:
Sorted*/
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
    bool isSorted=true;
    for(int i=1;i<size;i++){
        if(array[i]<array[i-1]){
            isSorted=false;
            break;
        }
    }
    if(isSorted==true){
        cout<<"Sorted";
    }
    else{
        cout<<"Not Sorted";
    }
}