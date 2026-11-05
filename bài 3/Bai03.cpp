#include <iostream>
#include <vector>
using namespace std;
int timMax(const vector<int>& arr) {
    if (arr.empty()) throw invalid_argument("Mang rong");
    int maxVal = arr[0];
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
int main() {
    int n;
    cout << "Nhap so luong phan tui n: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Gia tri lon nhat trong mang la: " << timMax(arr) << "\n";
    return 0;
}
