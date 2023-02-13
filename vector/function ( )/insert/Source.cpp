#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v = { 8 , 3 , 9 , 4 };

	v.insert(v.begin(), 2); // add in first 
	v.insert(v.end(), 11); // add in second 
	
	for (auto a = v.begin(); a != v.end(); a++)
	{
		cout << *a << endl;
	}
}