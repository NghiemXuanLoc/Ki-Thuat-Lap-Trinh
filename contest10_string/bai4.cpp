#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int dem[256];
int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end(), greater<char>());

    int min_val = INT_MAX, max_val = INT_MIN;

    for (int i = 0; i < s.size(); i++)
    {
        dem[s[i]]++;
        min_val = min(dem[s[i]], min_val);
        max_val = max(max_val, dem[s[i]]);
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (dem[s[i]] == max_val)
        {
            cout << s[i] << " " << dem[s[i]] << endl;
            break;
        }
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        if (dem[s[i]] == min_val)
        {
            cout << s[i] << " " << dem[s[i]] << endl;
            break;
        }
    }
}