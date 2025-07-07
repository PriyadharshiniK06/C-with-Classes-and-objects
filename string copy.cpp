#include <iostream>
#include<string>
using namespace std;

int main() {
    std::string original = "Hello, World!";
    char buffer[20];
    std::size_t length = original.copy(buffer,15,0); // Copies "Hello," into buffer
    buffer[length] = '\0'; // Null-terminate the string

    std::cout << "Buffer contains: " << buffer << std::endl;
    return 0;
}

