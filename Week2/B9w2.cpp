#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX_N = 1000;
    int n;
    cin >> n;
    double arr[MAX_N];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = n-1; i >= 0; i--) cout << fixed << setprecision(2) << arr[i] << " ";
    return 0;
}
