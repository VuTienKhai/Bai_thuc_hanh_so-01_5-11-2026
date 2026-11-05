#include <iostream>
using namespace std;
long long UCLN(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long BCNN(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / UCLN(a, b)) * b;
}
int main() {
    long long a, b;
    cout << "Nhap hai so nguyen duong a va b: ";
    cin >> a >> b;
    cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << BCNN(a, b) << "\n";
    return 0;
}
