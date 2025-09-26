#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) 
{
    int answer = 0;
    
    for(int k = left; k <= right; k++)
    {
        int count = 1;
        
        for (int i = 2; i <= k; i++) 
        {
		    if (k % i == 0) 
            {
			   count++;
            }
        }
        
        if(count % 2 == 0)
        {
            answer += k;
        }
        else
        {
            answer -= k;
        }
        
    }
    return answer;
}