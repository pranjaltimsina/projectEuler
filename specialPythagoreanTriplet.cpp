#include <bits/stdc++.h>
using namespace std;

bool checkTriplets(long long a, long long b, long long c){
    //cout << "Checking Triplets: " << a << " " << b << " " << c; 
    if ((a*a) + (b*b) == c*c) {
        cout << "a: " << a << " b: " << b << " c : " << c << " product: " << (a*b*c) << "\n";
        cout << "a^2: " << a*a << " b^2: " << b*b << " a^2 + b^2: " << (a*a)+(b*b) << " c^2: " << c*c << "\n\n";
        cout << " Test Passed\n";
        return true;
    }
    //cout << " Test Failed\n";
    return false;
}


long long solutionOne(){
    long long c = 997;
    long long a{1},b{2}, complement{1000-c};
    bool notfound{true};
    //cout << "Initial a: " << a << " b: " << b << " c: " << c << "\n";

    while (notfound){
        //cout << "--------------------------------------\n";
        //cout << "a: " << a << " b: " << b << " c: " << c << " complement: " << complement <<"\n";
        if(checkTriplets(a,b,c)) {
            notfound = false;
            break;
        }
        a++;
        b--;
        if (a > b) {
            c--;
            a = 1;
            b = 1000-c-a;
        }
        complement = 1000-c;

    }
    return (a*b*c);
}

int main(){
    // Pythagorean triplet => a^2 + b^2 = c^2
    // a < b < c
    // Find the product a*b*c for which a + b + c = 1000
    
    // if a == 1, b ==2, c = 997;
    // largest number is 997,
    // smallest number is 1
    
    // two conditions a^2 + b^2 = c^2
    // and a + b + c = 1000
    // max c^2 = 997^2
    
    

    cout << solutionOne() ;



    

    
    return 0;
}
