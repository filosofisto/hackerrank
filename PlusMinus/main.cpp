#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double positive_fraction(int n, vector<int> arr) {
    int qtd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            qtd++;
        }
    }

    return (double) qtd / (double) n;
}

double negative_fraction(int n, vector<int> arr) {
    int qtd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            qtd++;
        }
    }

    return (double) qtd / (double) n;
}

double zeroes_fraction(int n, vector<int> arr) {
    int qtd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            qtd++;
        }
    }

    return (double) qtd / (double) n;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    cout << positive_fraction(n, arr) << endl;
    cout << negative_fraction(n, arr) << endl;
    cout << zeroes_fraction(n, arr) << endl;

    return 0;
}
