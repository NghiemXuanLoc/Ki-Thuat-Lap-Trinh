// Cho một số nguyên không âm N, hãy tính tổng chữ số của N sử dụng kỹ thuật đệ quy.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// Tổng các chữ số của N

// Sample Input 0

// 123456789
// Sample Output 0

// 45

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// viet ham de quy tinh tong chu so cua n

int sum(ll n)
{
    if (n < 10)
    {
        return n;
    }
    return n % 10 + sum(n / 10);
}

int main()
{
    ll n;
    cin >> n;
    cout << sum(n) << endl;
}