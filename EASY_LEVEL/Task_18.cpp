/*18.Write a program to find the area of a circle.
Input:
7
Output:
153.94*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    double area=3.14159*radius*radius;
    cout<<fixed<<setprecision(2)<<area;
}