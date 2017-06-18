#include <bits/stdc++.h>
#include <climits>

using namespace std;

struct values {
    long long min;
    long long max;
};

struct values min_max_sum(vector<int> arr) {
    vector<long long> sumes(5);

    for (int i = 0; i < 5; i++) {
        sumes[i] = 0;

        for (int j = 0; j < 5; j++) {
            if (i != j) {
                sumes[i] += arr[j];
            }
        }
    }

    struct values result = { LONG_MAX, LONG_MIN };

    for(int i = 0; i < 5; i++) {
        if (sumes[i] > result.max) {
            result.max = sumes[i];
        }
        if (sumes[i] < result.min) {
            result.min = sumes[i];
        }
    }

    return result;
}

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }

    struct values result = min_max_sum(arr);

    cout << result.min << " " << result.max << endl;

    return 0;
}
