#include<iostream>
#include<deque>

using namespace std;

// complexty ==> o(1) const

int main()
{
	deque<char> d = { 'r','o','g','r','a','m','m','e' };
	d.push_back('r');
	d.emplace_back('r'); // fast
	
	d.push_front('p');

	auto it = d.begin();

	for (; it != d.end(); it++)
	{
		cout << *it;
	}
	cout << endl;

	return 0;
}