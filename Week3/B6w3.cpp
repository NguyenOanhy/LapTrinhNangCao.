#include <iostream>
#include <string>
using namespace std;

int main () {
    string s;
    int n;
    getline(cin,s);
    int j = 0;
    for (int i = 0; i < s.length(); i++ ) {
        if (s[i] == ' ') j++;
    };
    cout << j+1;
}
