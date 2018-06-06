#include <iostream>
#include <sstream>

using namespace std;

int round(int grade) {
    if (grade < 38 || (grade % 5) == 0 || (grade % 5) == 1 || (grade % 5) == 2)
        return grade;
    if ((grade % 5) == 3)
        return grade + 2;
    if ((grade % 5) == 4)
        return grade + 1;
    return grade;
}

int main() {
    int n = 0;
    int grade = 0;
    string line;

    getline(cin, line);
    // cout << line << endl;
    while (getline(cin, line)) {
        // cout << line << endl;
        stringstream ss(line);
        ss >> grade;
        cout << round(grade) << endl;
    }

    return 0;
}