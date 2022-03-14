#include <iostream>
using namespace std;

void printArrow(int n, bool left){
    if ( left == false ){
        int j1=n;
        string s= "";
        for (int i= 1; i<=n; i++){
            cout << s;
            for (int j=j1; j>=1; j--) cout << "*";
            cout << endl;
            j1--;
            s+="  ";
        }
        j1=2;
        if (s.length() >= 4) s.erase(s.length()-4,4);
        for (int i= 1; i<n; i++){
            cout << s;
            for (int j=1; j<=j1; j++) cout << "*";
            cout << endl;
            j1++;
            if (s.length() < 2) break;
            else s.erase(s.length()-2,2);
        }
    }
    else {
        int j1=n;
        string s="";
        for (int i= 1; i<n; i++)  s+=" ";
        for (int i= 1; i<=n; i++){
            cout << s;
            for (int j=j1; j>=1; j--) cout << "*";
            cout << endl;
            j1--;
            if (s.length() <= 0) break;
            else s.erase(s.length()-1,1);
        }
        j1=2;
        s=" ";
        for (int i= 1; i<n; i++){
            cout << s;
            for (int j=1; j<=j1; j++) cout << "*";
            cout << endl;
            j1++;
            s+=" ";
        }
    }
}
int main() {
    int n, left;
    cin >> n >> left;
    printArrow(n,left);
}
