#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    int len = my_string.length();
    
    for (int i = len; i > 0; i--)
    {
        answer += my_string[i - 1];
    }
    
    return answer;
}