#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int MAXN = 1 + 1e5;
    int a[10000];
    a[0]=MAXN; a[n+1]=MAXN;
    for (int i=1; i<=n; i++) cin >> a[i];
    int j=0;
    for (int i=1; i<=n; i++) {
      if (a[i] != a[i-1]) cout << a[i] << " ";
    }
    return 0;
}

