/*45.Write a program to count even numbers in an array.
Input:
5
1 2 3 4 5
Output:
2*/
#include<iostream>
using namespace std;
int main(){
    int size,array[100],count=0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the elements of the array: ";
        cin>>array[i];
    }
    for(int i=0;i<size;i++){
        if(array[i]%2==0){
            count+=1;
        }
    }
    cout<<count;
}