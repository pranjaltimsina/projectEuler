#include <bits/stdc++.h>
using namespace std;

int main(){
    double sum{0};
    double threeMult, fiveMult;
    double counter=1;
    while(true){
        cout << "Loop " << counter; 
        threeMult = 3*counter;
        if (threeMult<1000){
            sum+=threeMult;
            cout << " added " << 3 << "*" << counter <<"=" << threeMult <<" | ";
        }else{
            break;
            cout << " breaking! \n";
        }
        fiveMult = 5*counter;
        if ((int)fiveMult%3 != 0 && fiveMult <1000){
            sum+=fiveMult;
            cout << " added " << 5 << "*" << counter << "=" << fiveMult <<"\n";
            counter++;
            continue;
        }
        cout << " didn't add " << 5 << "*" << counter << "=" << fiveMult  << "\n" ;
        counter++;
    }
    cout << "\n";

    cout << sum ;
}
