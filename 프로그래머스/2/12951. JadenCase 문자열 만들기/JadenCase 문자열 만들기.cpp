#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = s;
    bool newWord = true;
    
    for(size_t i = 0; i < answer.size(); ++i)
    {
        if(isspace(answer[i]))
        {
            newWord = true;
        }
        else
        {
            if(newWord)
            {
            answer[i] = toupper(answer[i]);
            newWord = false;
            }
            else
            {
                answer[i] = tolower(answer[i]);
            }

        }
        
    }
    
    return answer;
}