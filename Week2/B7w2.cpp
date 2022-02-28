#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 1 + n;
    double oldSum = 1;
    int i=2;
    double x=n;
    while (sum - oldSum > 0.001) {
        oldSum = sum;
        x= x*n/i;
        sum += x;
        i++;
    }
    cout << fixed << setprecision(4) << sum;
    return 0;
}
