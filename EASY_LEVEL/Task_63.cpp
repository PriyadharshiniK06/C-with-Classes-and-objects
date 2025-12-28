/*63.Write a program to print only unique elements from an array.
Input:
5
1 2 2 3 1
Output:
1 2 3*/
#include<iostream>
using namespace std;
int main(){
    int size,array[size];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    for(int i=0;i<size;i++){
        int j;
        for(j=0;j<size;j++){
            if(array[i]==array[j]){
                break;
            }
        }
        if(i==j){
            cout<<array[i]<<" ";
        }
    }
    

}