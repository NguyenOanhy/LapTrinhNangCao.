#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int a[10000];
    for (int i = 0; i < n; i++) cin >> a[i];
    bool ktra = true;
    for (int k = 0; k < n/2; k++) {
        if ( a[k] != a[n-1-k] ){
        cout <<"Asymmetric array.";
        ktra = false;
        break;
        }
    }
    if (ktra == true) cout << "Symmetric array.";
    return 0;
}
