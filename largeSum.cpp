#include <bits/stdc++.h>
using namespace std;

string numberInput[100];
long long convertedNumbers[100];

void extractEleven(){
    for (int i = 0; i < 100; i++){
        convertedNumbers[i] = stoull(numberInput[i].substr(0, 15));
    }
}

long long getSum(){
    long long finalSum{0};
    for (int i = 0; i < 100; i++){
        finalSum += convertedNumbers[i];
    }
    return finalSum;
}

int main(){
    for (int i = 0; i < 100; i++){
        cin >> numberInput[i];
    }
    extractEleven();
    cout << "The final sum is: " << getSum() << "\n";
}
