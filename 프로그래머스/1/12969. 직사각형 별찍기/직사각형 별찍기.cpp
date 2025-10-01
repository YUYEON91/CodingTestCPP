#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    
    for(int k = 1; k <= b; k++)
    {
        for(int i = 1; i <= a; i++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}