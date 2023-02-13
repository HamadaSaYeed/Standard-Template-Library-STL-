
#include <forward_list>
#include <iostream>

using namespace std;

int main()
{

    forward_list<float> fl = { 2,3,4,5,6,7,8,9 };

    fl.sort();

    fl.emplace_front(1);

    fl.emplace_after(fl.before_begin(), 0);

    //  fl.remove(1);           delete any : 1 


    for (auto it : fl)
    {
        cout << it << " ";
    }
    cout << "\n";


    cout << "next value on forward_list :.  " << *next(fl.begin(), 9) << endl; // 9 = index


    return 0;
}
