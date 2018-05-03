#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(long long n){
    if (n == 1)
        return false;
    int temp = sqrt(n);

    for (int i = 2; i <= temp; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main(){
    long long n;
    cin >> n;
    cout << (isPrime(n) ? "YES" : "NO");
    return 0;
}
