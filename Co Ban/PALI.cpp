#include <iostream>
using namespace std;

bool Pali(int n)
{
    int m = n;
    int temp = 0;
    int rev = 0;
    while(n != 0)
    {
        temp = n % 10;
        rev = rev*10 + temp;
        n /= 10;
    }
    return (m == rev ? true : false);
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
