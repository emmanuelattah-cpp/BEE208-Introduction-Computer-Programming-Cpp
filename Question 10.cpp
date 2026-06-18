#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    if (n % 2 == 0 && n % 3 == 0)
        cout << "Divisible by 2 and 3";
    else
        cout << "Not divisible";
    return 0;
}
