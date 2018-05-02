#include <iostream>
using namespace std;

bool Pali(int n)
{
    int num = n;
    int numRev = 0;
    int temp;
    if (n / 10 == 0)
        return true;
    while(n / 10 != 0)
    {
        temp = n % 10;
        numRev *= 10;
        numRev += temp * 10;
        n /= 10;
    }
    numRev += n % 10;
    if (num == numRev){
        return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++){
        if (Pali(a[i]))
            cout << a[i] << " ";
    }
    return 0;
}
