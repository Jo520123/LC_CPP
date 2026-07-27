#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& nums)

	{

		int l = 0;
		int r = nums.size() - 1;

		while (l < r) {
		
			if (nums[l] % 2 > nums[r] %2)
			{
				swap(nums[l], nums[r]);
			}

			if (nums[l] % 2 == 0) {
				
				l += 1 ;
			
			}

			if (nums[r] % 2 == 1) {
			
				r -= 1 ;
			
			}

		}

		return nums;
		

	}


};


int main() {


	Solution x;

	vector<int> nums = {3,1,2,4};

	vector<int> ans = x.sortArrayByParity(nums);


	cout << "ans : ";

	for (int num : ans)
	{
		
		cout << num << " ";

	}

	cin.get();

	return 0;


}