/*64.Write a program to find the second largest element in an array.
Input:
5
3 5 1 4 2
Output:
4*/
#include<iostream>
using namespace std;
int main(){
    int size,array[100];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int p=0;p<size;p++){
        cin>>array[p];
    }
    int o=array[0];
    for(int i=0;i<size;i++){
       if(o<array[i]){
          o=array[i];
       }
    }
    int l=INT_MIN;
    for(int j=0;j<size;j++){
        if(l<array[j] && array[j]<o){
            l=array[j];
        }
    }
    cout<<l;
}
