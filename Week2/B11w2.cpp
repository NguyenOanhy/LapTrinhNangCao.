#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX_N = 1000;
    int n;
    cin >> n;
    double arr[MAX_N];
    double sum = 0;
    for (int i = 0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    double mean = sum/n;
    double var = 0;
    for (int i = 0; i<n; i++) {
        var += (arr[i] - mean)*(arr[i] - mean);
    }
    cout << fixed << setprecision(2) << var/n;
    return 0;
}
