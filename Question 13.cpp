#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << (n > 0 && (n & (n-1)) == 0? "Power of 2" : "Not power of 2");
    return 0;
}
