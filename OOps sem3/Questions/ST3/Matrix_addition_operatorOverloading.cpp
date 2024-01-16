//
// Created by khushi on 11/30/2023.
//


#include <iostream>
using namespace std;
class matrix{
public:
    int rows,col;
    int **mat;  // [[],[],[]]
    matrix(int m , int n){
        rows = m ;
        col = n ;
        mat = new int *[rows];
        for(int i = 0 ; i< rows ; i++){
            mat[i] = new int[col];
        }
    }

//    to input matrix:
    void get_matrix(){
        for(int i =0 ;i<rows ; i++){
            for(int j = 0 ; j < col ; j++){
                cin>>mat[i][j];
            }
        }
    }
//     to display matrix:
    void display_matrix(){
        for(int i =0 ;i<rows ; i++){
            for(int j = 0 ; j < col ; j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
//    to add matrix:
    matrix operator+(matrix m2){
//        if(rows != m2.rows || col != m2.col){
//            cout<<"Addition not possible"<<endl;
//            return matrix(0,0);
//        }
//        else{
            matrix result(rows,col);
            for(int i = 0 ; i<rows ; i++ ){
                    for(int j = 0 ; j< col ; j++){
                        result.mat[i][j] = mat[i][j] + m2.mat[i][j];
                    }
                }
            return result;


    }


};
int main(){
    int m,n;
    cin>>m>>n;

    matrix m1(m,n);
    m1.get_matrix();

    matrix m2(m,n);
    m2.get_matrix();

    matrix m3 = m1 + m2;
    m3.display_matrix();

    return 0;
}