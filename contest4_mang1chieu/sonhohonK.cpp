// Bài 2. Số nhỏ hơn K
// Cho mảng A[] gồm n số nguyên dương và số k. Nhiệm vụ của bạn là hãy sắp đặt lại các
// phần tử của mảng sao cho các số nhỏ hơn hoặc bằng k đứng cạnh nhau. Ví dụ với mảng
// A[] = {2, 1, 5, 6, 3}, k = 3 ta chỉ cần thực hiện 1 phép đổi chỗ để có mảng A[] = {2, 1, 3, 6,
// 5}.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n
// là số phần tử của mảng A[] và số k; dòng kế tiếp đưa vào n số A[i] của mảng; các số được
// viết cách nhau một vài khoảng trống.
// T, n, k, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤107

// ; 1≤ A[i], k ≤107
// ;

// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input: Output:
// 2
// 5 3
// 2 1 5 6 3
// 7 5
// 2 7 9 5 8 7 4

// 1
// 2

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k)
            {
                cnt++;
            }
        }
        int dem = 0;
        for (int i = 0; i < cnt; i++)
        {
            if (a[i] <= k)
            {
                dem++;
            }
        }
        int ans = dem;
        for (int i = k; i < n; i++)
        {
            if (a[i] <= k)
            {
                dem++;
            }
            if (a[i - k] <= k)
            {
                dem--;
            }
            ans = max(ans, dem);
        }
        cout << cnt - ans << endl;
    }
}