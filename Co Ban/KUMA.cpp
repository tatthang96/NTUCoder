#include <iostream>
using namespace std;
int main(){
    long long m, n, t;
    cin >> m >> n >> t;
    long long tien = 0;
    while (n >= m){
        n = n - m - 1;
        tien += m*t;
    }
    if (n >= 0){
        tien += n*t;
    }

    cout << tien;
    return 0;
}
