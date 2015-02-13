#include<iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int a,b,c,d;
    int degree;
    while(cin >> a >> b >> c >> d){
        if(!a && !b && !c && !d){
            break;
        }
        degree = 120;
        if(a<b)
            degree += 40 - abs(a - b);
        else
            degree += abs(a - b);
        if(b>c)
            degree += 40 - abs(b - c);
        else
            degree += abs(b-c);
        if(c<d)
            degree += 40 - abs(c - d);
        else
            degree += abs(c - d);
        cout << degree*9 << endl;
    }
    return 0;
}
