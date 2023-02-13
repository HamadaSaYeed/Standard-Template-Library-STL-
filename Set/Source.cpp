#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int>s = { 12,22,3,4 };

    // add
    s.insert(0);
    s.emplace(1);


    // delete
    s.erase(22);


    for (auto it : s)
    {
        cout << it << endl;
    }

    cout << "set of size : " << s.size() << endl;


    return 0;
}



