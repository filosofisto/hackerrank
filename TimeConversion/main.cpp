#include <bits/stdc++.h>
#include <string>

using namespace std;

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string pm_am_symbol = s.substr(8,2);

    if (pm_am_symbol == "PM" && hour != 12) {
        hour += 12;
    }
    if (pm_am_symbol == "AM" && hour == 12) {
        hour = 0;
    }

    return (hour < 10 ? "0" : "") + to_string(hour) + s.substr(2,6);
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
