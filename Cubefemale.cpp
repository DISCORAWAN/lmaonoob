#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        int n;
        cin >> n; // Input the value of n
        int c = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i + j == n)
                    c++;
            }
        }

        cout << c << endl; // Use endl to print on a new line
    }

    return 0;
}
