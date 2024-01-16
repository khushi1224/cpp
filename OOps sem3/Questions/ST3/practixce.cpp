//
// Created by khushi on 12/2/2023.
//
#include <iostream>
#include<cstring>
using namespace std;
class mat{
public:
    int row , col;
    int **ar;
    mat(int r , int c){
        row = r;
        col =c;
        ar = new int*[row];
        for(int i = 0 ; i<row ; i++)
            ar[i] = new int[col];
    }
    void get_arr(){
        for(int i =0 ;i<row ; i++){
            for(int j = 0 ;j<col ;j++){
                cin>>ar[i][j];
            }
        }
    }
    void out_arr(){
        for(int i =0 ;i<row ; i++){
            for(int j = 0 ;j<col ;j++){
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    mat operator*(mat &m2){
        mat result(row,m2.col);
        for(int i = 0 ;i<row ;i++){
            for(int j = 0 ;j<m2.col ;j++){
                result.ar[i][j]=0;
                for(int k =0 ; k<col ;k++){
                    result.ar[i][j] +=  ar[i][k] * m2.ar[k][j];
                }
            }
        }
        return result;
    }
};

int main(){
    int r,c;
    cin>>r,c;
    int r1,c1;
    cin>>r1>>c1;
    mat m1(r,c);
    mat m2(r1,c1);
    m1.get_arr();
    m2.get_arr();
    mat m3 = m1*m2;
    m3.out_arr();

    return 0;
}