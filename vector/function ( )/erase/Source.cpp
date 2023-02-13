#include <iostream>
#include <vector>
using namespace std;

//  erase ==> œ«·Â Õ–›

int main()
{
	vector<int> v = { 8 , 3 , 9 , 4 };

	v.erase(v.begin()+1,v.end()); // delete 3 : end
	

	for (auto a = v.begin(); a != v.end(); a++)
	{
		cout << *a << endl;
	}

	return 0;
}