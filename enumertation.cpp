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
    title g;         // Correct declaration using the enum name
    g = HIGH;      // Assign the MEDIUM value to g
    cout << "The value is: " << g << endl;  // Use cout for C++ output
    return 0;
}
