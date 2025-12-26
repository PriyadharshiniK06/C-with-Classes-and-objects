/*48.Write a program to search an element in an array.
Input:
5
1 2 3 4 5
3
Output:
Found*/
#include<iostream>
using namespace std;
int main(){
    int size,array[100],element;
    cout<<"Enter the size of the array: ";
    cin>>size;
     cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Enter the element to find in the array: ";
    cin>>element;
    for(int i=0;i<size;i++){
        if(array[i]==element){
            cout<<"Found";
        }
    }
}