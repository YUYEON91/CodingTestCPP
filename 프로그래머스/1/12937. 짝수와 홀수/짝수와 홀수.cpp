#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    double i = num %= 2;
    if(i == 0)
    {
        answer = "Even";
    }
    else
    {
        answer = "Odd";
    }
    return answer;
}