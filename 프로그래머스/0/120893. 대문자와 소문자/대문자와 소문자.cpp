#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    int my_char = 0;
    
    for (int i = 0; i < my_string.length(); i++)
    {
        my_char = my_string[i];
        
        if (my_char < 91)
        {
            my_char += 32;
        }
        else
        {
            my_char -= 32;
        }
        
        answer.push_back(my_char);
    }
    
    return answer;
}