// Có năm người chơi một trò chơi gọi là "Sự hào phóng". Mỗi người đưa ra một số lượng tiền xu khác không b như một lần đặt cược ban đầu. Sau khi tất cả người chơi đặt cược tiền xu của họ, thao tác sau được lặp lại nhiều lần: một đồng xu được chuyển từ người chơi này sang người chơi khác. Nhiệm vụ của bạn là viết một chương trình có thể, với số lượng xu mà mỗi người chơi có vào cuối trò chơi, xác định kích thước b của lần đặt cược ban đầu hoặc chỉ ra rằng kết quả của trò chơi không thể đạt được.

// Input Format

// Đầu vào bao gồm một dòng duy nhất chứa năm số nguyên c1, c2, c3, c4 và c5 - số lượng đồng xu mà người chơi thứ nhất, thứ hai, thứ ba, thứ tư và thứ năm có ở cuối trò chơi

// Constraints

// 0 ≤ c1, c2 , c3, c4, c5 <=100

// Output Format

// In dòng duy nhất chứa một số nguyên dương b duy nhất - số xu trong đặt cược ban đầu của mỗi người chơi. Nếu không có giá trị b như vậy, thì hãy in giá trị duy nhất "-1".

// Sample Input 0

// 2 5 4 0 4
// Sample Output 0

// 3

#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int c1, c2, c3, c4, c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    int x = (c1 + c2 + c3 + c4 + c5);
    int b = x / 5;
    if (b * 5 == x)
    {
        cout << b << endl;
    }
    else
        cout << "-1" << endl;
}
