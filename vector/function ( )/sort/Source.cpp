#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v = { 8,3,4,9,5,2 };
	auto it = v.begin();

	sort(v.begin(), v.end()); 

	for (; it != v.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}