#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x){
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x > 2){
        for (int i = 2; i <= sqrt(x); i++){
            if (x % i == 0) return false;
        }
    }
    return true;
}

int main(){
    int num, amount = 0;
    cout << "Enter num: ";
    cin >> num;
    for (int i = 2; i < num; i++){
        if (isPrime(i)) amount++;
    }
    cout << "\nResult: " << amount << endl;
    return 0;
}