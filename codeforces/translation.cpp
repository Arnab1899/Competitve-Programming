#include<bits/stdc++.h>
using namespace std;

int main()
 {
	string first,last;
	cin >> first >> last;

	reverse(first.begin(),first.end());
	if (first == last)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}

