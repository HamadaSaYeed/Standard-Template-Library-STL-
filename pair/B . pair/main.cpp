
#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<string , pair<int , pair <int , string>>> p;
    
    p.first = "hamada";
    p.second.first = 18;
    p.second.second.first= 621224;
    p.second.second.second = "software engineer";
    
    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second.first << endl;
    cout << p.second.second.second << endl;
    
    return 0;
}
