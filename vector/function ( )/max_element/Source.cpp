#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v = { 8,3,4,9,5,2 };
	auto it = v.begin();

	cout << *max_element(v.begin(), v.end()) << endl; // 9


	return 0;
}