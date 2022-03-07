#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[10000];
    for (int i=0; i<n; i++) cin >> a[i];
    double k;
    cin >> k;
    int j = 0;
    for (int i=0; i<n; i++) {
      if (a[i]>k) { j=i; break;}
      cout << fixed << setprecision(2) << a[i] << " ";
      }
    cout << fixed << setprecision(2) << k << " ";
    for (int i=j; i<n; i++) cout << fixed << setprecision(2) << a[i] << " ";
    return 0;
}
