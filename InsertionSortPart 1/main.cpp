#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

/*inline void swap_items(int& v1, int& v2) {
    int temp = v1;
    v1 = v2;
    v2 = temp;
}*/

inline void print(vector<int> ar) {
    for (size_t k = 0; k < ar.size(); k++) {
        cout << ar[k] << " ";
    }

    cout << endl;
}

void insertionSort(vector <int> ar) {
    size_t pos_target = ar.size()-1;
    int target = ar[pos_target];

    for (int i = ar.size()-2; i >= 0; i--) {
        if (target < ar[i]) {
            ar[pos_target] = ar[i];
            print(ar);
            pos_target = i;
            ar[pos_target] = target;
        }
    }

    print(ar);
}

int main(void) {
    vector <int> _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }

    insertionSort(_ar);
    return 0;
}
