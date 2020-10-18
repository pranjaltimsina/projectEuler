#include <bits/stdc++.h>
using namespace std;

int main(){
    long long sum{0};
    long long a{0};
    long long b{1};
    long long c;
    long long two{2};
    while(true){
        c = a+b;
        a = b;
        b = c;
        if (c % two !=0 ) continue;
        if (c<=4000000 ){
            sum+= c;
        } else break;
    }
    cout << sum;
}
