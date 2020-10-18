#include <bits/stdc++.h>
using namespace std;

bool isPrime(unsigned long long target){
    // if ends with 0, 2, 4, 5, 6, 8 return false;
    // check till sqrt(target)
    
    unsigned long long end = target % (unsigned long long) 10;
    if (end == (unsigned long long) 0 || end % (unsigned long long) 2 == 0){
        return false;
    }
    unsigned long long squareRoot = (unsigned long long) ceil(sqrt(target));
    for (unsigned long long i = 3; i <= squareRoot ; i+=2){
       if (target % i == 0) {
            return false;
       } 
    }
    return true;
}

int main(){
    unsigned long long sum{2};
    for (unsigned long long i = 3; i < 2000000; i += 2 ){
        if (isPrime(i)) sum+= i;
    }

    cout << sum;

    return 0;
}
