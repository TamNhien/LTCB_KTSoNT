#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap mot so nguyen duong n: ";
    cin >> n;

    cout << n << (isPrime(n) ? " la so nguyen to." : " khong phai la so nguyen to.") << endl;

    return 0;
}
