#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    float fval = (float(num1) / float(num2)) * 1000.0f;
    int answer = int(fval);
    return answer;
}