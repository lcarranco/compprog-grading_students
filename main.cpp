#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int values;
    string line;
    vector<int> grades;

    while (getline(cin, line)) {
        stringstream ss(line);
        ss >> values;
        grades.push_back(values);
    }
    for (vector<int>::iterator it = grades.begin(); it != grades.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}