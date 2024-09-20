#include <string>
#include <map>
#include <vector>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    std::pair<int, int> curpos(0, 0);
    std::pair<int, int> temppos(0, 0);
    map<std::pair<int, int>, bool> rows;
    map<std::pair<int, int>, bool> columns;
    
    for (int i = -5; i < 5; i++)
    {
        for (int j = -5; j < 5; j++)
        {
            rows.insert(std::pair<std::pair<int, int>, bool>(std::pair(i, j), false));
            columns.insert(std::pair<std::pair<int, int>, bool>(std::pair(i, j), false));
        }
    }
    
    for (int i = 0; i < dirs.length(); i++)
    {
        if (dirs[i] == 'U')
        {
            if (curpos.first == 5)
            {
                continue;
            }
            
            temppos = curpos;
            columns[temppos] = true;
            curpos.first += 1;
        }
        else if (dirs[i] == 'D')
        {
            if (curpos.first == -5)
            {
                continue;
            }
            
            temppos = std::pair(curpos.first -1, curpos.second);
            columns[temppos] = true;
            curpos.first -= 1;
        }
        else if (dirs[i] == 'R')
        {
            if (curpos.second == 5)
            {
                continue;
            }
            
            temppos = curpos;
            rows[temppos] = true;
            curpos.second += 1;
        }
        else if (dirs[i] == 'L')
        {
            if (curpos.second == -5)
            {
                continue;
            }
            
            temppos = std::pair(curpos.first, curpos.second - 1);
            rows[temppos] = true;
            curpos.second -= 1;
        }
    }
    
    for (auto iter = rows.begin(); iter != rows.end(); ++iter)
    {
        if (iter->second == true)
        {
            answer += 1;
        }
    }
    for (auto iter = columns.begin(); iter != columns.end(); ++iter)
    {
        if (iter->second == true)
        {
            answer += 1;
        }
    }
    
    return answer;
}