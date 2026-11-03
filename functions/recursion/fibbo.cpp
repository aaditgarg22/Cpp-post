#include <iostream>
using namespace std;

long long fibonacci(int n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout<<"enter how many terms u want: ";
    cin >> n;
    cout<<"fibonachhi series's "<<n<<" terms are :";
    for (int i = 0; i < n; i++)
        cout << fibonacci(i) << " ";

    return 0;
}