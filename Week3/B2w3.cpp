#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[10000];
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    for (int i=n-1; i>=0; i--) cout << fixed << setprecision(2) << a[i] << " ";
    return 0;
}
