#include <iostream>
#include <string>
using namespace std;

void Compare(const string& s1, const string& s2) {
    if (s1 == s2) {
        cout << s2 << " is equal to " << s1 << endl;
    } 
    else if (s1 < s2) {
        cout << s1 << " is smaller than " << s2 << endl;
    } 
    else {
        cout << s1 << " is greater than " << s2 << endl;
    }
}

int main() {
    string a = "priya";
    cout << "Length of a = " << a.length() << endl;

    string s1 = "Priya";
    string s2 = "Hi";

    Compare(s1, s2);

    return 0;
}
