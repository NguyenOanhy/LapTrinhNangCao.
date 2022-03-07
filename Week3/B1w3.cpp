#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000], b[1000];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) {
        cin >> b[i];
        if (b[i] != a[i])  { cout << "NO"; return 0;}
    }
    cout << "YES";
    return 0;
}
