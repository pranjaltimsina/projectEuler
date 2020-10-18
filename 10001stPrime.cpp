#include <bits/stdc++.h>
using namespace std;

// find the 10001st prime number 1st=2;
bool isPrime(long long target){
    // if ends with 0, 2, 4, 5, 6, 8 return false;
    // check till sqrt(target)
    
    long long end = target % (long long) 10;
    if (end == (long long) 0 || end % (long long) 2 == 0){
        return false;
    }
    long long squareRoot = (long long) ceil(sqrt(target));
    for (long long i = 3; i <= squareRoot ; i+=2){
       if (target % i == 0) {
            return false;
       } 
    }

    return true;

}
int main(){

    long long primesEncountered{1};
    long long finalPrime{0};
    long long currentNumber{3};

    while (true){
        if (isPrime(currentNumber)){
            primesEncountered++;
        }
        if (primesEncountered == 10001) break;
        currentNumber+=2;
    }
    cout << "Primes Encountered: " << primesEncountered << " => " << currentNumber;
    
    return 0;
}
