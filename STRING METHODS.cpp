#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Compare(string s1, string s2) {
    if (s1 == s2) {
        cout << s1 << " and " << s2 << " are equal" << endl;
    }
    else if (s1 < s2) {
        cout << s1 << " is smaller than " << s2 << endl;
    }
    else {
        cout << s1 << " is greater than " << s2 << endl;
    }
}

int main() {
    string a = "Priya";
    cout << "Length of a = " << a.length() << endl;
    reverse(a.begin(), a.end());
    cout << "Reversed a = " << a << endl;
    char dest[20];
    string src = "Priya";
    strcpy(dest, src.c_str()); 
    cout << "Copied string: " << dest << endl;
    string s1 = "Priya";
    string s2 = "Hi";
    Compare(s1, s2);
    string first = "Priya";
    string second = "Dharshini";
    cout << "Appended: " << first.append(second) << endl;

    return 0;
}
