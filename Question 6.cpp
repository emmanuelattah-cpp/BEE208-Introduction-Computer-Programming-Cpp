#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    cout << (isupper(ch) && ch >= 'A' && ch <= 'Z'? "Uppercase letter" : "Not an uppercase letter");
    return 0;
}
