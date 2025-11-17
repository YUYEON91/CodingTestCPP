#include <iostream>
#include <map>

using namespace std;

int main()
{
    int S;
    int P;
    
    string site, password;
    map <string, string> passwordList;
    map <string, string> ::iterator it;
    
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> S >> P;
    for(int i = 0; i < S; i++)
    {
        cin >> site;
        cin >> password;
        passwordList.insert({site,password});
    }
    
    for(int i = 0; i < P; i++)
    {
        cin >> site;
        
        it = passwordList.find(site);
        cout << it->second << endl;
    }
    
    return 0;
}