#include <iostream>
#include <vector>

using namespace std;



int main()
{
    vector<int> v = { 10,8,9,2 };

    vector<int>::c it = v.begin();

    cout << *v.begin(); // 10 

    return 0;
}