#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    cout << (s.find('a')!= string::npos? "Contains 'a'" : "Does not contain 'a'");
    return 0;
}
