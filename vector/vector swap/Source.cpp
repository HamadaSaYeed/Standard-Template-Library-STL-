
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v1(5, 100);
    vector <int> v2(5, 200);

    v1.swap(v2);


    // print v
    for (int i = 0; i < v1.size(); i++)
    {
        cout << i << " v1 " << v1[i] << "\n";
    } cout << "\n \n";



    // print v2
    for (int i = 0; i < v2.size(); i++)
    {
        cout << i << " v2 " << v2[i] << "\n";
    }

    return 0;
}
