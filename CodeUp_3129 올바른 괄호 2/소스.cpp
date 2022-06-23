#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<char> s;
	string str;
	int result;
	
	cin >> str;
	
	s.push(str[0]);

	for (int i = 1; i < str.length(); i++)
	{
		if (s.size())
		{
			if (s.top() == '(' && str[i] == ')')
				s.pop();
			else
				s.push(str[i]);
		}
		else
			s.push(str[i]);
	}

	if (s.size())
		cout << "bad";
	else
		cout << "good";

	return 0;
}