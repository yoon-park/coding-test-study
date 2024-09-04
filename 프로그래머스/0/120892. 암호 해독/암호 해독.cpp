#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    
    for (int i = 0; i < cipher.length(); i++)
    {
        if ((i + 1) % code == 0)
        {
            answer.push_back(cipher[i]);
        }
    }
    
    return answer;
}