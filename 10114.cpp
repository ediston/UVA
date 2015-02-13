#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    double m, p, loan, r, mp;
    double cv;
    int cm;
    double dep[101], newdep, tempdep;;
    int tm;
    int ans = 0;
    while(1){
        cin >> m >> p >> loan >> r;
        if(m<0) break;
        mp = loan/m;
        cv = p + loan;
        cin >> cm >> newdep;
        cout << "init " <<
        while(r--){
            tempdep = newdep;
            cin >> tm >> newdep;
            while(tm > cm){
                dep[cm] = tempdep;
                cm++;
            }
        }
        while(cm <= m){
            dep[cm] = newdep;
            cm++;
        }
        cv = cv*(1-dep[0]);
        for(int i=1; i<m+1; i++){
            cv = cv*(1-dep[i]);
            loan = loan - mp;
            if(cv>loan){
                cout << i << " month" << (i>1? "s" : "") << endl;
                break;
            }
        }
    }
    return 0;
}
