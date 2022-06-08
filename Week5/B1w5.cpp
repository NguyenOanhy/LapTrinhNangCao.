#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNo, age, number;
    double marks[30];
};

void read() {
    cout << "Roll no. ";
    cin >> student.rollNo;
    cout << "Name: ";
    getline(cin, student.name);
    cout << "Age: ";
    cin >> student.age;
    cout << "Number of subjects: ";
    cin >> student.number;
    for (int i = 0; i < student.number; i++) {
        cout << "Mark of subject " << i + 1 << ": ";
        cin >> student.marks[i];
    }
}
void print() {
    cout << "Roll no. " << student.rollNo << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    for (int i = 0; i < student.number; i++)
        cout << "Mark of subject " << i + 1 << ": " << student.marks[i] << endl;
}

int main() {
    Student student;
    read();
    print();
    return 0;
}
