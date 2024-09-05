#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int m_size = my_string.size();
    int i_size = is_suffix.size();
    
    if (m_size < i_size)
    {
        return 0;
    }
    
    for (int i = 1; i <= i_size; i++)
    {
        if (my_string[m_size - i] != is_suffix[i_size - i])
        {
            return 0;
        }
    }
    
    return 1;
}