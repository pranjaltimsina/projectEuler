#include <bits/stdc++.h>
using namespace std;

//Find the difference between the sum of the squares of the 
//first one hundred natural numbers and the square of the sum.

int main(){
    long long min{1}, max{100};
    long long squareOfSum, sumOfSquares, difference;
    long long sum = (max*(max+1))/2;
    cout << "The sum is " << sum << "\n";
    squareOfSum = sum*sum;
    cout << "Square of Sum is " << squareOfSum << "\n";
    
    sumOfSquares = max * (max+1) * (2*max + 1) /6;
    cout << "Sum of Squares is " << sumOfSquares << "\n";
    difference = squareOfSum - sumOfSquares;
    cout << "The difference is " << (long long) difference << "\n";
    return 0;
}
