#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char src[] = "Hello, world!";
    char dest[50]; 

    strcpy(dest, src); 

    cout << "Source: " << src << endl;
    cout << "Destination: " << dest << endl;

    return 0;
}
