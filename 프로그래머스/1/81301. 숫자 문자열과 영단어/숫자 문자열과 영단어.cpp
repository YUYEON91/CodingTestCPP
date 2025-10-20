#include <string>
#include <vector>

using namespace std;
string number(int n) {
    if (n == 0) return "zero";
    else if (n == 1) return "one";
    else if (n == 2) return "two";
    else if (n == 3) return "three";
    else if (n == 4) return "four";
    else if (n == 5) return "five";
    else if (n == 6) return "six";
    else if (n == 7) return "seven";
    else if (n == 8) return "eight";
    else if (n == 9) return "nine";
}
int solution(string s) {
    // 0~9까지 영어로 바뀐 문자열을 원래대로 숫자로 되돌려 놓기
    string str; int idx = -1;
    for (int i = 0; i <= 9; i++)
    {
        str = number(i);
        idx = s.find(str);
        while (idx >= 0) { // 찾는 문자가 있으면
            s.replace(idx, str.size(), to_string(i)); // 숫자로 교체
            idx = s.find(str);
        }
    }
    return stoi(s);
}