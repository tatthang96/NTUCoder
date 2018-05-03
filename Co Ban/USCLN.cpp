#include <iostream>
using namespace std;

int USCLN(int a, int b){
    int temp;
    while (b != 0){
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << USCLN(a, b);
    return 0;
}
