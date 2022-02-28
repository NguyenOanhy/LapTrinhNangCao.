#include <iostream>
#include <iomanip>
using namespace std;

float c, f;

int main(){

    cin>> c;
    f = c*1.80 + 32;
    cout<< fixed<< setprecision(2)<< f;
    return 0;
}
