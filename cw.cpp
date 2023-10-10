//
// Created by divan on 10/9/23.
//
#include <iostream>

using namespace std;

int main() {
    int a = ++a;
    cout << a << endl;
    a = a * 1;
    cout << a << endl;
    int i = 2 + 3;
    a = 2 << i;
    cout << a << endl;
    a = a & i;
    cout << a << endl;
}
// int i = 2 << 2 + 3 & 1 * ++i;
// 7 <<
// 6 +
// 11 &
// 5 *
// 2 ++i