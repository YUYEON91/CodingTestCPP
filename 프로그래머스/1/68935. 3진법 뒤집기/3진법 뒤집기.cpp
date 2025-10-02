#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    
    // 10진수를 3진수로 변환(int->string)
    string temp = "";
    while(n != 0)
    {
        temp = to_string(n % 3) + temp;
        n /= 3;
    }
        
    // 앞뒤 반전(3진법)
    reverse(temp.begin(), temp.end());
    
    // 10진법으로 표현(3진법->10진법)
    int t = 1;
    for(int i = temp.length() - 1; i > -1; i--)
    {
        answer += (temp[i] - '0') * t;
        t *= 3;
    }
    
    return answer;
}