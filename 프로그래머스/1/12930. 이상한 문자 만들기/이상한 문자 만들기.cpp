#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int cnt = 0;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            cnt = 0;
            continue;
        }
        
        if (cnt % 2 == 0)
        {
            if (s[i] >= 'a')
            {
                s[i] -= 32;
            }
        }
        else
        {
            if (s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        
        cnt += 1;
    }
    
    return s;
}