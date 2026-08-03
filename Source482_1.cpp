#include<iostream>
#include<algorithm>
using namespace std;


class Solution {
public:
	string licenseKeyFormatting(string s, int k) {

		int c = 0;
		string result = "";

		
		for (int i = s.size() - 1; i >= 0; --i) {
		
			if (s[i] != '-'){

				if (c > 0 && c%k == 0) {

					result.push_back('-');

				}
				
				result.push_back(toupper(s[i]));

				c++;
			}

		}

		reverse(result.begin(), result.end());
		
		return result;

	}
};


int main()
{
	
	Solution x;

	string s = "5F3Z-2e-9-w";
	int k = 4;

	string ans = x.licenseKeyFormatting(s, k);

	cout << "ans :" ;

	for (char x : ans)
	{

		cout << x << "";

	}


	cin.get();

	return 0;

}


