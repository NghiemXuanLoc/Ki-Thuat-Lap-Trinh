// Nhập vào 1 dãy số có không quá 10000 số nguyên. Hãy xác định trong quá trình nhập có xuất hiện số 2022 hay không?

// Input Format

// Dòng đầu tiên là số lượng số nguyên sẽ nhập : N Dòng thứ 2 là N số viết cách nhau một khoảng trắng.

// Constraints

// 1≤N≤10000; Các số được nhập là số nguyên không quá 10^6.

// Output Format

// In YES nếu trong các số vừa nhập có số 2022, ngược lại in NO

// Sample Input 0

// 4
// 2019 2020 2021 2022
// Sample Output 0

// YES

#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 2022)
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}