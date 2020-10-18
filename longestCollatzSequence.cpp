#include <bits/stdc++.h>
using namespace  std;

long long getNext(long long previous){
    if (previous % (long long) 2 == 0) return previous/(long long) 2;
    else return (((long long) 3* previous) + 1);
}

int main(){
    long long numberIterator{2};
    long long longest{0}, longestNumber;
    long long temp, chainLength{1}, tempNumber = numberIterator;
    while (numberIterator < 1000000){
        // cout << "For number: " << numberIterator << " -->";
        while (true){
            temp = getNext(tempNumber); 
            // cout << temp;
            chainLength+=1;
            if (temp==1) break;
            // cout << "-->";
            tempNumber = temp;
        }
        if (chainLength > longest){ 
            longest = chainLength;
            longestNumber = numberIterator;    
        }
        // cout << "\n";
        chainLength = 1;
        numberIterator++;
        tempNumber = numberIterator;
    }
    cout << "Longest chain is of: " << longestNumber << " of length: " << longest << "\n";
}