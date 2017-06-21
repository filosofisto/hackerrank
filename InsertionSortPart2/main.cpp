#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>

using namespace std;

inline void print(int ar_size, int* ar) {
    for (int i = 0; i < ar_size; i++) {
        cout << ar[i] << " ";
    }

    cout << endl;
}

void insertionSort(int ar_size, int* ar) {
    int j;

    for (int i = 1; i < ar_size; i++) {
        j = i;

        while (j > 0 && ar[j-1] > ar[j]) {
            swap(ar[j], ar[j-1]);
            j--;
        }

        print(ar_size, ar);
    }
}

int main(void) {
    int _ar_size;
    cin >> _ar_size;
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        cin >> _ar[_ar_i];
    }

   insertionSort(_ar_size, _ar);

   return 0;
}
