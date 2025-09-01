#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) 
{
    int k = x;
    vector<long long> answer;
    for(int i = 0; i<n; i++)
    {
        answer.push_back(k);
        k += x;
    }
    
    
    
    
    
    return answer;
}