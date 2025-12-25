/*42.Write a program to find the sum of array elements.
Input:
3
1 2 3
Output:
6*/
#include<iostream>
using namespace std;
int main(){
    int size, array[100],sum=0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the elements of the array: ";
        cin>>array[i];
    }
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    cout<<sum;
}