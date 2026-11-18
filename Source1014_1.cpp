#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
	int maxScoreSightseeingPair(vector<int>& values) {

		int max_score = 0;

		int prev = values[0] + 0;

		for (int j = 1; j < values.size(); j++)
		{

			max_score = max(max_score, prev + values[j] - j);


			prev = max(prev, values[j] + j);

		}

		return max_score;

	}
};


int main() {

	Solution x;

	vector<int> arr1 = {8,1,5,2,6};

	int ans1 = x.maxScoreSightseeingPair(arr1);

	cout << "Input Array : [8,1,5,2,6] " << "\n";

	//Output: 11

	cout << "Answer = " << ans1 << "\n\n";

	
	vector<int> arr2 = {1,2};

	int ans2 = x.maxScoreSightseeingPair(arr2);

	cout << "Input Array : [1,2]" << "\n";

	//Output: 2

	cout << "Answer = " << ans2 << "\n";


	cin.get();

	return 0;
}