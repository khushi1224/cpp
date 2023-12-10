//
// Created by Khushi on 12/9/2023.
//
#include<iostream>
using namespace std;
int main() {
    int n, m ,s;
    cin >> n >> m >>s;
    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    for (int i = 0 ; i <n; i++) {
        for (int j = 0; j <m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if(s==mat[i][j]){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}