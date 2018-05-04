#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string str, elmOne, elmTwo;
    cin >> str;
    int n;
    cin >> n;
    elmOne = str.substr(0, n);
    //cout << elmOne;
    elmTwo = str.substr(n, str.length());
    reverse(elmOne.begin() ,elmOne.end());
    reverse(elmTwo.begin() ,elmTwo.end());
    cout << elmOne + elmTwo;
    return 0;
}
