//
// Created by khushi on 11/30/2023.
//
#include <iostream>
using namespace std;
class Time{
public:
    int hr;
    int min;
    int sec;
    Time(int h , int m, int s){
        hr = h;
        min = m;
        sec = s;
    }
    Time  operator+(Time t2){
//        11:59:59 12:59:59
//59+59 =118/60 = 1 min 58 sec
// 59+59 =118/60 = 1 hr 58 min + (118/60) = 1hr 59 min =118
// 11+12 = 23 + 1 = 24hrs
        int NewS = sec + t2.sec;
        int NewM = (min + t2.min) + (NewS / 60);
        int NewH = (hr + t2.hr) + (NewM / 60);

        NewS = NewS % 60;
        NewM = NewM % 60;
        NewH = NewH % 24 ;
        return Time(NewH , NewM , NewS);
    }
void display(){
        cout<<hr<<" "<<min<<" "<<sec<<endl;
    }

};

int main(){
    int hr1,min1,sec1;
    int hr2,min2,sec2;

    cin>>hr1>>min1>>sec1;
    cin>>hr2>>min2>>sec2;
    Time t1(hr1,min1,sec1);
    Time t2(hr2,min2,sec2);
    Time t3 = t1 + t2 ;
    t3.display();
    return 0;
}