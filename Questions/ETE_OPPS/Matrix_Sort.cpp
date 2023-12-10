#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    // copy to array temp;
    int s=0;
    int temp[s];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            temp[s] = mat[i][j];
            s++;
        }
    }
    sort(temp , temp+s);
    // copy back to matrix;
    s=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++,s++) {
            mat[i][j]=temp[s];

        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}