
#include <iostream>
#include <utility>
using namespace std;


int main()
{

    pair<string, pair<int, double>> p;
    p.first = "hamada";
    p.second.first = 19;
    p.second.second = 621224;


    cout << "the name is : " << p.first << "\n" << "the age is  : " << p.second.first << "\n" << "the ID is   : " << p.second.second << endl;



    return 0;
}
