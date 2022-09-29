// Yêu cầu: Cho ba số nguyên a , b và c, hãy tính S = a*(b+c)+b*(a+c).

// Input Format

// 3 số a, b, c trên 1 dòng.

// Constraints

// -10^8≤a,b,c≤10^8

// Output Format

// In ra giá trị của biểu thức.

// Sample Input 0

// 1 2 3
// Sample Output 0

// 13

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    long long kq1 = 1ll * a*(b+c), kq2 = 1ll * b*(a+c);
    long long kq = 1ll * kq1 + kq2;
    cout << kq << endl;
    return 0;
}