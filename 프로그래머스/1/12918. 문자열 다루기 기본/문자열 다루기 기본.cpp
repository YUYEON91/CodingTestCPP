#include <string>
#include <vector>

using namespace std;

bool solution(string s) 
{
    bool answer = true;
    
    if(s.length() != 4 && s.length() !=6)
    {
        return false;
    }
    
    for(char ch : s) 
    {
        if(ch < '0' || ch > '9')
        {
            return false;
        }
    }
    
    return true;
}