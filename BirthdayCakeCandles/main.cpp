#include <bits/stdc++.h>
#include <climits>

using namespace std;

inline int max(int n, vector<int> ar) {
    int ret = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (ar[i] > ret) {
            ret = ar[i];
        }
    }

    return ret;
}

inline int count_highest(int n, vector<int> ar, int max) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (ar[i] == max) {
            count++;
        }
    }

    return count;
}

int birthdayCakeCandles(int n, vector <int> ar) {
    int max_height = max(n, ar);
    int count = count_highest(n, ar, max_height);

    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
