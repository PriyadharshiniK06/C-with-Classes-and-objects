#include<iostream>
using namespace std;

enum title
{
    LOW,
    MEDIUM,
    HIGH
};

int main()
{
    title g;         
    g = HIGH;      
    cout << "The value is: " << g << endl;  
    return 0;
}
