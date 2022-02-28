#include <iostream>
using namespace std;

int main(){
    int total, totalLegs;
    cin >> total >> totalLegs;
    bool flag = false;
    for (int numberChicken = 0; numberChicken <= total; numberChicken++)
        if (numberChicken*2+(total-numberChicken)*4 == totalLegs) {
            flag = true;
            cout << "chicken = " << numberChicken << ", dog = " <<total-numberChicken;
            break;
        }
    if (flag == false) cout << "invalid";
    return 0;
}
