#include <iostream>
using namespace std;
int main() {
    float a, b;
    cin >> a >> b;
    float larger = (a > b)? a : b;
    cout << "Larger: " << larger;
    return 0;
}
