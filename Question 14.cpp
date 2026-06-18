#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    string bin;
    cin >> bin;
    int dec = 0;
    for(int i = 0; i < bin.length(); i++)
        dec += (bin[i]-'0') * pow(2, bin.length()-1-i);
    cout << dec;
    return 0;
}
