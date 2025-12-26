/*49.Write a program to count the frequency of an element in an array.
Input:
5
1 2 2 3 2
2
Output:
3*/
#include<iostream>
using namespace std;
int main(){
    int size,array[100],element,count=0;
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
            count+=1;
        }
    }
    cout<<count;
}