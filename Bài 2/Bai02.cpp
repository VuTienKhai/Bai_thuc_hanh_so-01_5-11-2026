#include <iostream>
#include <cmath>
using namespace std;
bool SNT(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Nhap so nguyen duong N: ";
    cin >> n;
    if (SNT(n))
        cout << n << " la so nguyen to.\n";
    else
        cout << n << " khong phai la so nguyen to.\n";
    return 0;
}
