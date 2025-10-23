#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) 
{
    int arr[205] = {0};
    vector<int> answer;
    for(int i = 0; i<numbers.size(); i++)
    {
        for(int j = i+1; j<numbers.size(); j++)
        {
            arr[numbers[i] + numbers[j]]++;
        }
    }
    for(int i = 0; i<201; i++)
    {
        if(arr[i] > 0)
        answer.push_back(i);
    }
    return answer;
}