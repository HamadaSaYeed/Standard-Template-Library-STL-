#include <iostream>
#include <vector>

using namespace std;

// auto ==> Automatic Data Type.

int main()
{
    vector<int> v = { 7 , 5 , 2 };
    

    for (auto a = v.begin(); a != v.end(); a++)
    {
        cout << *a << endl;
    }

    /*

    out put :
    7
    5
    2

    */

    return 0;
}
