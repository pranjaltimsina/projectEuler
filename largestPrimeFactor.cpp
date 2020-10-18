#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long number){
    cout <<"\nPrimality test for " << number <<" | ";
    long long tempsqrt = ceil(sqrt(number)  + 1 );
    bool primality = true;
    for (long long i = 2; i < tempsqrt; i++){
        if(number % i == 0){
            cout << "Divisible by " << i << " | Not Prime " << "\n";
            return false;
        } 
    }
    cout << "Prime\n";
    return primality;
    
}

void dashes(){

    cout << "\n---------------------------------------------------------------------\n ";
}

int main(){
    dashes();
    long long target{600851475143};
    long long squareRoot = ceil(sqrt(target)+2);
    cout << "The square root + 2, ceiled is " << squareRoot << "\n";
    long long largestPrime = 1;
    long long complement{1};
    for (long long i = 2; i<=squareRoot; i++){
        if (target % i == 0){
            complement = target/i;
            if (isPrime(i) && i > largestPrime) largestPrime = i;
            if (isPrime(complement) and complement > largestPrime) largestPrime = complement;
        }
    }
    if(isPrime(target)) largestPrime = target;
    cout << "\nThe largest prime is " << largestPrime << "\n";
    return 0;
}
