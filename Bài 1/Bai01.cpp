#include <iostream>
#include <cmath>
using namespace std;
void hpt(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) cout << "Phuong trinh co vo so nghiem.\n";
            else cout << "Phuong trinh vo nghiem.\n";
        } else {
            cout << "Phuong trinh co 1 nghiem: x = " << -c / b << "\n";
        }
        return;
    }
    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        cout << "Phuong trinh vo nghiem thuc.\n";
    } else if (delta == 0) {
        cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b / (2 * a) << "\n";
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Phuong trinh co 2 nghiem phan biet:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
}
int main() {
    double a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    hpt(a, b, c);
    return 0;
}
