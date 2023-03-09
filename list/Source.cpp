
#include <algorithm>
#include <iostream>
#include <list>

using namespace std;


int main()
{
    list<int> l = { 1,2,3,4,5,6 };

    l.emplace_front(0);
    l.emplace_back(7);

    for (auto li : l)
    {
        cout << li << endl;
    }

    return 0;
}

//  - Fast insert - remove at any place : O(1).

//  - Slow search : O(N).

//  - No random access [] - at().
