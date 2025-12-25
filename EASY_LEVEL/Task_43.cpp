/*43.Write a program to find the maximum element in an array.
Input:
5
3 8 1 6 2
Output:
8*/
#include<iostream>
using namespace std;
int main(){
    int size,array[100],max=0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the elements of the array: ";
        cin>>array[i];
    }
    for(int j=0;j<size;j++){
        if(max<array[j]){
            max=array[j];
        }
    }
    cout<<max;
}
