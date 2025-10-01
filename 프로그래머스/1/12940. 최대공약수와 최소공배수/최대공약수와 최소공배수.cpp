#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) 
{
    int a = n; 
    int b = m;
    vector<int> answer;
    while(b!=0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int k = a;
    answer.push_back(a);
    
    int j = (n*m) / k;
    answer.push_back(j);
    return answer;
}