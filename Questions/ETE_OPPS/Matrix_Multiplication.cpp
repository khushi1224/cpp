//
// Created by khushi on 12/10/2023.
//
#include <bits/stdc++.h>
using namespace std;
    class Matrix{
    public:
        int row , col;
        int **mat;
        Matrix(int r , int c){
            row = r;
            col = c;
            mat = new int *[row];
            for(int i = 0 ; i <row ; i++){
                mat[i] = new int[col];
            }
        }
        void get_mat(){
            for(int i = 0 ; i<row;i++){
                for(int j = 0 ; j< col ; j++){
                    cin>>mat[i][j];
                }
            }
        }


        void out_mat(){
            for(int i = 0 ; i<row;i++){
                for(int j = 0 ; j< col ; j++){
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        ~Matrix(){
            for(int i = 0 ; i<row;i++){
                delete [] mat[i];
            }
            delete []mat;
        }

        Matrix operator*(Matrix &m2) {
            Matrix result(row, m2.col);
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < m2.col; j++) {
                    result.mat[i][j] = 0;
                    for (int k = 0; k < col; k++) {
                        result.mat[i][j] += mat[i][k] * m2.mat[k][j];
                    }
                }
            }
        }

    };
   int main(){
       int r , c;
       cin>>r>>c;


       Matrix m1(r,c);
       Matrix m2(r,c);
       m1.get_mat();
       m2.get_mat();
       Matrix m3 = m1*m2;
       m3.out_mat();
       return 0;
   }