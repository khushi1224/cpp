//
// Created by khushi on 11/29/2023.
//

#include <iostream>

using namespace std;

class strs{
public:
    char ch[1000000];
//    int len;
    strs(char* c ){
        strcpy(c,ch);
    }
    int display(){
        cout<<ch<<endl;
        return 0;
    }
   bool operator<(char *s2){
//        char newstr[100000];
         return strcmp (ch,s2) < 0 ;
    }
};
int main(){
    strs s1("Apple");
    strs s2 ("banana");
    cout << (s1<s2) << endl;
    return 0;
}