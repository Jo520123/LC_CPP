#include<iostream>
#include<vector>
#include<stack>
using namespace std;


class Solution {
public:
	bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

		stack<int> stackStore;
		int i = 0;

			for (int x : pushed) {
				
				stackStore.push(x);

				while (!stackStore.empty() && stackStore.top() == popped[i])
				{

					stackStore.pop();

					i++;

				}

			}

			return stackStore.empty();
	}
	
};


int main()
{	
	Solution x;

	vector<int> pushed1 = { 1, 2, 3, 4, 5 };
	vector<int> popped1 = { 4, 5, 3, 2, 1 };

	

	bool ans1 = x.validateStackSequences(pushed1, popped1);
	
	if (ans1) 
	{
		cout << "Answer = " << "true" << "\n";
	}
	else {
		cout << "Answer = " << "false" << "\n";
	}

	//Output : true

	//////////////////////////////////
	
	vector<int> pushed2 = { 1,2,3,4,5 };
	vector<int> popped2 = { 4,3,5,1,2 };

	bool ans2 = x.validateStackSequences(pushed2, popped2);

	if (ans2)
	{
		cout << "Answer = " << "true" << "\n";
	}
	else {
		cout << "Answer = " << "false" << "\n";
	}

 
	//Output : false



	cin.get();

	return 0;


}