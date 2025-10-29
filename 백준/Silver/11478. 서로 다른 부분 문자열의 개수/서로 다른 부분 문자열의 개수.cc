#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    set<string> substrings;
    
    for(int i = 0; i < s.length(); ++i)
    {
        for(int j = 1; j <= s.length() - i; ++j)
        {
            substrings.insert(s.substr(i, j));
        }
    }
    
    cout << substrings.size() << endl;
    
    return 0;
}