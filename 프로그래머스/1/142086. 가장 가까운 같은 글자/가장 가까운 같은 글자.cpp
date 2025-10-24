#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer(s.size(), -1);
    unordered_map<char, int> lastIndex;
    
    for (int i = 0; i < s.size(); i++) 
    {
        if(lastIndex.find(s[i]) != lastIndex.end())
        {
            answer[i] = i - lastIndex[s[i]];
        }
        lastIndex[s[i]] = i;
    }
    
    return answer;
}