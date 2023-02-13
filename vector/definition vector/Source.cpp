#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v = { 8 , 4 , 9 , 2 };
    v[0] = 10;
    v.push_back(50);  // add element from back array
   
    cout << v[0] << "\n";
    cout << v[4]; // 5

    return 0;
}
