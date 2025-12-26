/*50.Write a program to remove duplicate elements from an array.
Input:
5
1 2 2 3 3
Output:
1 2 3*/
#include<iostream>
using namespace std;
int main(){
    int size,array[100],duplicate[100];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of the array: "<<" ";
    for(int o=0;o<size;o++){
        cin>>array[o];
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                array[i]='a';
            }
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]!='a'){
            cout<<array[i]<<' ';
        }
    }
}