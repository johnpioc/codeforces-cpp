#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long n,k;
    cin >> n >> k;

    if (k % 2 == 0) {
      if (n % 2 == 0) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    } else {
      if ((n - k) % 2 == 0 || n % k == 0 || n % 2 == 0) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
  }
}