#include<iostream>
using namespace std;

int main(){
    char c;
    int i;
    while(cin >> noskipws  >> c){
            if(c=='"'){
                if(i%2==0){
                    cout << "``";
                }else{
                    cout << "''";
                }
                i = (i+1)%2;
            }else{
                cout << c;
            }
    }
    return 0;
}
