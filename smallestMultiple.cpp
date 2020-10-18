#include <bits/stdc++.h>
using namespace std;

bool checkDivisibility(unsigned long long target){
    // only recieves even ending with 0 in increments of 20
    // so by default is a multiple of 1,2,4,5,10,20
    //
    // checking div by 12 => div by 6 and 3 => div by 15
    // checking div by 18 => div by 9
    // checking div by 16 => div by 8
    // checking div by 14 => div by 7
    //
    //
    // to be checked: 19, 18, 17, 16, 14, 13, 12, 11
    //const unsigned long long common = (unsigned long long) 19*18*17*16*14*13*12*11;
    //if (target%common == 0) return true; 
    // return false;
    vector<unsigned long long> divisors{19, 18, 17, 16, 14, 13, 12, 11};
    bool divisibility{true};
    for (auto& item: divisors){
        if(target % item != 0){
            divisibility = false;
            break;
        }
    }
    return divisibility;

}


int main(){
    unsigned long long number{2540};
    while(true){
        if(checkDivisibility(number)) {
            cout << number << " is divisible by all numbers from 1 to 20\n";
            break;
        }else if (number == 11174042880) {
            break;
        }
        number+=20;
    }
}
