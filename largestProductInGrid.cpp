#include <bits/stdc++.h>
using namespace std;

long long numbersArray[20][20];

long long leftToRight(){
    long long largest{0};
    long long product{1};
    for (int i = 0; i  < 20; i ++){
        for (int j = 0; j < 17; j++){
            product = numbersArray[i][j] * numbersArray[i][j+1] * numbersArray[i][j+2] * numbersArray[i][j+3];
            if (product > largest) {
                largest = product;
            }
        }
    }
    cout << "leftToRight: " << largest << "\n";
    return largest;
}

long long rightToLeft(){
 long long product{1}, largest{0};
    for (int i = 0; i < 20; i++ ){
        for (int j = 19; j > 2; j--){
            product = numbersArray[i][j] * numbersArray[i][j-1] * numbersArray[i][j-2] * numbersArray[i][j-3];
            if (product > largest) {
                largest = product;
            }
        }
    }
    cout << "rightToLeft: " << largest << "\n";
    return largest;
}

long long traverseHorizontal(){
    return max(rightToLeft(), leftToRight());
}

long long upToDown(){
    long long product{1}, largest{0};
    for (int j = 0; j < 20; j ++){
        for (int i = 0; i <17; i++){
            product = numbersArray[i][j]*numbersArray[i+1][j]*numbersArray[i+2][j]*numbersArray[i+3][j];
            if (product > largest) {
                largest = product;
            }
        }
    }
    cout << "upToDown: " << largest << "\n";
    return largest;
}

long long downToUp(){
    long long product{1}, largest{0};
    for (int j = 0; j < 19 ; j++){
        for (int i = 19; i > 2; i--){
            product = numbersArray[i][j]*numbersArray[i-1][j]*numbersArray[i-2][j]*numbersArray[i-3][j];
            if (product > largest) {
                largest = product;
            }
        }
    }
    cout << "downToUp: " << largest << "\n";
    return largest;
}

long long traverseVertical(){
    return max(downToUp(), upToDown());
}

long long leftToRightDiagonal(){
    long long largest{0}, product{1};
    for (int i = 0; i < 17; i++){
        for (int j = 0; j < 17; j++){
            product = numbersArray[i][j]* numbersArray[i+1][j+1]* numbersArray[i+2][j+2]* numbersArray[i+3][j+3];
            if (product > largest) largest = product;
        }
    }
    cout << "leftToRightDiag: " << largest << "\n"; 
    return largest;
}

long long rightToLeftDiagonal(){
  long long largest{0}, product{1};
    for (int i = 0; i < 17; i++){
        for (int j = 19; j > 2; j--){
            product = numbersArray[i][j]* numbersArray[i+1][j-1]* numbersArray[i+2][j+2]* numbersArray[i+3][j-3];
            if (product > largest) largest = product;
        }
    }
    cout << "rightToLeftDiag: " << largest << "\n"; 
    return largest;
}

long long traverseDiagonal(){
    return max(leftToRightDiagonal(), rightToLeftDiagonal());
}


long long leftToRightDiagonalUp(){
    long long largest{0}, product{1};
    for (int i = 3; i < 20; i++){
        for (int j = 0; j < 17; j++){
            product = numbersArray[i][j]* numbersArray[i-1][j+1]* numbersArray[i-2][j+2]* numbersArray[i-3][j+3];
            if (product > largest) largest = product;
        }
    }
    cout << "leftToRightDiagUp: " << largest << "\n"; 
    return largest;
}

long long rightToLeftDiagonalUp(){
  long long largest{0}, product{1};
    for (int i = 3; i < 20; i++){
        for (int j = 3; j < 20; j++){
            product = numbersArray[i][j]* numbersArray[i-1][j-1]* numbersArray[i-2][j-2]* numbersArray[i-3][j-3];
            if (product > largest) largest = product;
        }
    }
    cout << "rightToLeftDiagIUp: " << largest << "\n"; 
    return largest;
}


long long traverseDiagonalUp(){
    return max(rightToLeftDiagonalUp(), leftToRightDiagonalUp());
}

int main(){
    long long inputNumbers;
    int i{0}, j{0};
    while (cin >> inputNumbers){
        numbersArray[i][j] = inputNumbers;
        j++;
        if (j==20){
            i++;
            j = 0;
        } 
    }
    long long a = 99;
    cout << a*a*a*a << "\n";
    
    long long largest{traverseHorizontal()};
    long long vertical = traverseVertical();
    long long diagonal1 = traverseDiagonal();
    long long diagonal2 = traverseDiagonalUp();
    
    if (vertical > largest) largest = vertical;
    if (diagonal1 > largest) largest = diagonal2;
    if (diagonal2 > largest) largest = diagonal2;
    cout << "Largest product is: " << largest << "\n";




}