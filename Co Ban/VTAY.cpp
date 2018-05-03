#include <iostream>
using namespace std;
int main()
{
    int n;
    int leftHand = 7;
    int rightHand = 0;
    cin >> n;
    if ((n / 7)%2 == 0){
        rightHand = n%7;
        leftHand = 7 - rightHand;
    }
    else
    {
        leftHand = n % 7;
        rightHand = 7 - leftHand;
    }
    cout << leftHand << " " << rightHand;
    return 0;
}
