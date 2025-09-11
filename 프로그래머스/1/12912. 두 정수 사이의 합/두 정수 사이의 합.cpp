#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a < b)
    {
        for(int i = 0 ; i < (b-a); i++)
        {
            answer += a + i;
        }
        return answer + b;
    }
    
    if(b < a)
    {
        int c = a;
        int d = b;
        for(int i = 0 ; i < (c-d); i++)
        {
            answer += d + i;
        }
        return answer + c;  
    }
    
    if(a == b)
    {
        answer = a;
        return answer;
    }
    
    return answer;
}