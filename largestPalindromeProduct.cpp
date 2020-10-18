#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(long long number){
    // pop each digit using % 10 and store in array
    // if array from left to right == array from right to left
    // it is a palindrome
    vector<long long> digits;
    long long digit;
    while(number!=0){
        digit = number%10;
        digits.push_back(digit);
        number = floor(number/10);
    }
    long long forward{0}, backward{0};
    long long counter = 1;
    long long reverseCounter = (long long) digits.size() - 1;
    reverseCounter = pow(10, reverseCounter);
    for(auto i = digits.begin(); i !=digits.end(); ++i){
        digit = *i;
        forward += digit*counter;
        counter*=10;
        backward += digit*reverseCounter;
        reverseCounter /= 10;
    }
    if (forward == backward) return true;
    return false;

}

int main(){
    long long left{100}, right{100};
    long long largest{0};
    long long product{0};
    long long largestLeft{left};
    long long largestRight{right};
    while(true){
        product = left *right;
        if (checkPalindrome(product) && product > largest){
            largest = product;
            largestLeft = left;
            largestRight = right;
        }
        right++;
        if (right == 1000){
            right = left+1;
            left++;
        }
        if (left == 1000){
            break;
        }
    }
    cout << largestLeft << "*" << largestRight << "=" << largest;
    return 0;
}
