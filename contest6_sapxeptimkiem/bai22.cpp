// Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là đưa ra mảng đã được sắp xếp bao gồm các chữ số của mỗi phần tử trong A[]. Ví dụ A[] = {110, 111, 112, 113, 114 }ta có kết quả là {0, 1, 2, 3, 4}.

// Input Format

// Dòng đầu tiên đưa vào n là số phần tử của mảng A[]; Dòng tiếp theo là n số A[i] ; Các số được viết cách nhau một vài khoảng trống.

// Constraints

// 1<=n<=10^5; 0<=A[i]<=10^6;

// Output Format

// In ra các chữ số xuất hiện trong các số của mảng A theo thứ tự tăng dần

// Sample Input 0

// 3
// 976117 988196 993766
// Sample Output 0

// 1 3 6 7 8 9

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt[10] = {0};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            cnt[0] = 1;
        }
        while (x)
        {
            cnt[x % 10] = 1;
            x /= 10;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (cnt[i])
        {
            cout << i << " ";
        }
    }
}