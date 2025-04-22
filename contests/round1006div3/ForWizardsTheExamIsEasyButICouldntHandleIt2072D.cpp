#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;

    for (int t = 1; t<=testCases;t++) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int best_diff = 0, L = 0, R = 0;
        for (int i = 0; i < n; ++i) {
            int cnt_greater = 0, cnt_less = 0;
            for (int j = i + 1; j < n; ++j) {
                cnt_greater += a[j] > a[i];
                cnt_less += a[j] < a[i];

                if (best_diff > cnt_greater - cnt_less) {
                    best_diff = cnt_greater - cnt_less;
                    L = i, R = j;
                }
            }
        }

        cout << L + 1 << ' ' << R + 1 << '\n';
    }
}