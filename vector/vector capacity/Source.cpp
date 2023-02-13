#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v(100);

    v.push_back(5);


    cout << "Size = " << v.size() << endl; // 101
    cout << "Capacity = " << v.capacity() << endl; // 150           add     50 %   ÚäÏ ÇÖÇÝå Çí ÚäÕÑ

    return 0;
}