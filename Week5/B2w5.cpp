#include iostream
using namespace std;

struct Student {
    string name;
    int roll_number;
    float marks;
};

int main() {
    int n, i;
    cin >> n;
    Student s[n + 1];
    for (i = 0; i <n; i++) {
        s[i].roll_number = i + 1;
        cout << "Roll Number:" << s[i].roll_number << endl;
		cin.ignore();
        cout << "Enter the name: ";
        getline (cin, s[i].name);

        cout << "Enter the marks: ";
        cin >> s[i].marks;
    }

    for (i = 0; i < n; i++) {
        cout << "The Roll Number: " << (i + 1) << endl;

        cout << "The Name: ";
        cout << s[i].name<<endl;

        cout << "The Marks: " << s[i].marks << endl;
        cout << endl;
    }
    return 0;
}