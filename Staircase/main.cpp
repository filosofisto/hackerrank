#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

inline string spaces(int n, int line) {
    return string(n-line-1, ' ');
}

inline string stair(int line) {
    return string(line+1, '#');
}

string build_line(int line, int n) {
    return spaces(n, line) + stair(line);
}

void printStaircase(int n) {
    for (int line = 0; line < n; line++) {
        cout << build_line(line, n) << endl;
    }
}

int main(){
    int n;
    cin >> n;

    printStaircase(n);

    return 0;
}
