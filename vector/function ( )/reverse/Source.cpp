#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v = { 8,3,4,9,5,2 };
	auto it = v.begin();
	
	reverse(v.begin(), v.end()); // ÚßÓ

	for (; it != v.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}