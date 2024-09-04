#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int my_char = 0;
    
    for (int i = 0; i < my_string.length(); i++)
    {
        my_char = my_string[i];
        
        if ((my_char > 47) && (my_char < 58))
        {
            answer += my_char - 48;
        }
    }
    
    return answer;
}