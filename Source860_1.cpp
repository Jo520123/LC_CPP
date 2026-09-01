#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	bool lemonadeChange(vector<int>& bills) {
		int five = 0;
		int ten = 0;
		int b_size = bills.size();

		for (int i = 0; i < b_size; i++) {
			if (bills[i] == 5) {

				five++;

			}

			else if (bills[i] == 10) {

				if (five > 0) {

					five--;
					ten++;

				}
				else {

					return false;

				}

			}


			else {

				if (ten > 0 && five > 0) {

					ten--;
					five--;

				}
				else if (five >= 3) {

					five -= 3;

				}

				else {

					return false;

				}

			}

		}

		return true;

	}
};

	int main()
	{

		Solution x;

		vector<int> arr1 = { 5,5,5,10,20 };

		bool ans1 = x.lemonadeChange(arr1);

		cout << "Input Array : [5,5,5,10,20]" << "\n";

		if (ans1) {

		cout << "Answer:" <<"true"<<"\n";
		
		}
		else {
			cout << "Answer:" << "false" << "\n";
		}

		vector<int> arr2 = { 5,5,10,10,20 };

		bool ans2 = x.lemonadeChange(arr2);

		cout << "Input Array : [5,5,10,10,20]" << "\n";

		if (ans2) {

			cout << "Answer:" << "true" << "\n";

		}
		else {
			cout << "Answer:" << "false" << "\n";
		}

		cin.get();

		return 0;

	}