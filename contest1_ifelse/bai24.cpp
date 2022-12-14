// Hôm nay Patrick chờ đợi một chuyến thăm từ người bạn SpPal của mình. Để chuẩn bị cho chuyến thăm, Patrick cần mua một số quà tặng ở hai cửa hàng gần nhà. Có một con đường dài d1 mét giữa nhà anh ta và cửa hàng đầu tiên và một con đường dài d2 mét giữa nhà anh ta và cửa hàng thứ hai. Ngoài ra, có một con đường dài d3 kết nối trực tiếp hai cửa hàng này với nhau. Giúp Patrick tính toán khoảng cách tối thiểu mà anh ta cần đi bộ để đến cả hai cửa hàng và trở về nhà. Patrick luôn bắt đầu tại nhà của mình. Anh ta nên ghé thăm cả hai cửa hàng chỉ di chuyển dọc theo ba con đường hiện có và trở về nhà của anh ta. Anh ta không ngại ghé thăm cùng một cửa hàng hoặc đi qua cùng một con đường nhiều lần. Mục tiêu duy nhất là giảm thiểu tổng quãng đường đã đi.image

// Input Format

// Dòng đầu tiên của đầu vào chứa ba số nguyên d1, d2, d3 - độ dài của các đường dẫn. d1 là chiều dài của con đường nối nhà Patrick và cửa hàng đầu tiên; d2 là chiều dài của con đường nối nhà Patrick và cửa hàng thứ hai; d3 là chiều dài của đường dẫn kết nối cả hai cửa hàng.

// Constraints

// 1<=d1,d2,d3<=10^8

// Output Format

// In khoảng cách tối thiểu mà Patrick sẽ phải đi bộ để ghé thăm cả hai cửa hàng và trở về nhà của mình.

// Sample Input 0

// 832 56 273
// Sample Output 0

// 658

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int x = d1 + d2 + d3, y = 2 * d1 + 2 * d2, z = 2 * d1 + 2 * d3, t = 2 * d2 + 2 * d3;
    int min;
    min = x;
    if (min > y)
    {
        min = y;
    }
    if (min > z)
    {
        min = z;
    }
    if (min > t)
    {
        min = t;
    }

    cout << min << endl;
}