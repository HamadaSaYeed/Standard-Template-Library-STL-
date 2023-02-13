#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v = { 8,3,4,9,5,2 };
	auto it = v.begin();

	cout << *min_element(v.begin(), v.end()) << endl; // 2
	

	return 0;
}