#include <bits/stdc++.h>
using namespace std;

const int length{13};

unsigned long long getSum(string Number){
    unsigned long long product{1};
    unsigned long long stringAsNumber = stoull(Number);
    unsigned long long digit;
    for (int i = 0; i < length; i++){
        digit = stringAsNumber % (unsigned long long) 10;
        if (digit == 0) return (unsigned long long) 0;
        product *=digit;
         stringAsNumber /= (unsigned long long) 10;
    }
    return product;
}

int main(){
    string number, subString, largestSubString{""};
    unsigned long long currentProduct, largestProduct{0};
    cin >> number;
    for (int i =0; i < 1000-length; i++){
        subString = number.substr(i, length);
        currentProduct = getSum(subString);
        if (currentProduct > largestProduct) {
            largestSubString = subString;
            largestProduct = currentProduct;
        } 
    }

    cout << "largest subString: " << largestSubString << "\n";
    cout << "largest product: " << largestProduct << "\n" ;
    return 0;
}
