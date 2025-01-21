#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool checkLength = true;
    bool isAlphabet = true;
    bool isNumber = true;
    
    if (s.length() == 4 || s.length() == 6)
    {
        
    }
    else
    {
        checkLength = false;
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        if (((s[i] > 64) && (s[i] < 91)) || ((s[i] > 96) && (s[i] < 123)))
        {
            
        }
        else
        {
            isAlphabet = false;
        }
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] > 47) && (s[i] < 58))
        {
            
        }
        else
        {
            isNumber = false;
        }
    }
    
    return checkLength * (isAlphabet || isNumber);
}