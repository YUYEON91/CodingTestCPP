#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) 
{
    string answer = "";
    
    answer.reserve(s.length());
    
    for (int i = 0; i < s.length(); ++i)
    {
        if (' ' == s[i])
        {
            answer += ' ';
            continue;
        }
        
        int shifted = ('a' > s[i]) ? s[i] - 'A' : s[i] - 'a';

        
        shifted += n;
        shifted %= 26;
        
        answer += ('a' > s[i]) ? 'A' + shifted : 'a' + shifted;
    }
    
    return answer;
}