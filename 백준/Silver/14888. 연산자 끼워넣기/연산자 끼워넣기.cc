#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> nums(n);
int operators[4];
int maxResult = -1000000000;
int minResult = 1000000000;

int calculate(int a, int b, int op)
{
    switch(op)
    {
        case 0 : return a + b;
        case 1 : return a - b;
        case 2 : return a * b;
        case 3 : return a / b;
    }
    return 0;
}


void dfs(int idx, int curResult)
{
    if(idx == n)
    {
        maxResult = max(maxResult, curResult);
        minResult = min(minResult, curResult);
        return;
    }
    
    for(int i = 0; i < 4; i++)
    {
        if(operators[i] > 0)
        {
            operators[i]--;
            dfs(idx + 1, calculate(curResult, nums[idx], i));
            operators[i]++;
        }
    }
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> n;
    nums.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for(int i = 0; i < 4; i++)
    {
        cin >> operators[i];
    }

dfs(1, nums[0]);

cout << maxResult << "\n";
cout << minResult << "\n";

return 0;
}