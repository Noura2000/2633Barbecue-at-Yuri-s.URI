#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<int, string>mp;
	string s;
	int n,pr;
	while (cin >> n)
	{
		while (n--)
		{
			cin >> s >> pr;
			mp.insert(make_pair(pr, s));
		}
		auto it = mp.begin();
		cout << it->second;
		mp.erase(it);
		for (auto it:mp)
		{
			 cout <<" "<< it.second ;
		}
		cout << endl;
		mp.clear();
	}
	return 0;
}