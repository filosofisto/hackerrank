//https://www.hackerrank.com/challenges/diagonal-difference?h_r=next-challenge&h_v=zen

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int diagonal_difference(int n, vector< vector<int> > matrix) {
    int first_diagonal = 0;
    int second_diagonal = 0;

    for (size_t i = 0; i < n; i++) {
        first_diagonal += matrix[i][i];
        second_diagonal += matrix[i][n-i-1];
    }

    return abs(first_diagonal-second_diagonal);
}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }

    cout << diagonal_difference(n, a) << endl;

    return 0;
}
