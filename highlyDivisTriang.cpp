#include <bits/stdc++.h>
using namespace std;

int numberOfDivisors(long long targetNumber){
    long long squareRoot = ceil(sqrt(targetNumber));
    long long divisor{1};
    long long counter{0};

    while (divisor < squareRoot){
        if (targetNumber % divisor == 0){
            counter++;
        }
        divisor++;
    }
    
    counter *=2;
    cout << "Number of divisors of " << targetNumber << " is " << counter << "\n";
    return counter;

    
}

int main(){

    long long start{1};
    long long sumOfSequence{1};
    while (true){
        if (numberOfDivisors(sumOfSequence) >= 500) break;
        start++;
        sumOfSequence+=start;
    }
    cout << start;
    return 0;
}   