#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    int unmbers = x;
    vector<int> t;
    while(x > 0)
    {
        t.push_back(x % 10);
        x /=10;
    }

    int sum = 0;
    for(int num : t)
    {   
        sum += num;
    }
    return (sum != 0 && unmbers % sum == 0);
}