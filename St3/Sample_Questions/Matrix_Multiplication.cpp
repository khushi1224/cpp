//
// Created by khushi on 12/1/2023.
//
//Create a C++ class Matrix to represent a 2x2 matrix.
// Overload the * operator for matrix multiplication.

#include <iostream>
using namespace std;

class Matrix{
public:

    int row , col;
    int **mat;
    Matrix(int r , int c){
        row = r;
        col = c;
        mat = new int *[row];
        for(int i =0 ; i<row ; i++){
            mat [i] = new int [col];
        }
    }
    void get_Matrix(){
        for (int i = 0 ; i<row ; i++)
            for(int j = 0 ; j<col; j++){
                cin>>mat[i][j];
            }
    }
    void display_Matrix(){
        for (int i = 0 ; i<row ; i++) {
            for (int j = 0; j < col; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    ~Matrix(){
       for(int i = 0 ; i<row;i++){
           delete [] mat[i];
       }
       delete []mat;
    }
    Matrix operator*( Matrix &m2){
        Matrix result(row,m2.col);
        for(int i =0 ; i<row ; i++)
            for( int j = 0 ; j<m2.col ; j++) {
                result.mat[i][j] = 0;
                for (int k = 0; k < col; k++) {
                    result.mat[i][j] += mat[i][k] * m2.mat[k][j];
                }
            }
        return result;
    }

};


int main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1;
    cin>>r2>>c2;
    Matrix m1(r1,c1);
    Matrix m2(r2,c2);
    m1.get_Matrix();
    m2.get_Matrix();
    Matrix m3 = m1*m2;
    m3.display_Matrix();
    return 0;
}