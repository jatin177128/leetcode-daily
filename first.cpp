#include <bits/stdc++.h>
using namespace std;
// int maxprofit(int ind , vector<int>&dp, vector<int>&nums){
//         if(ind == 0 )return nums[0];
//         if(ind<0)return 0;
//         if(dp[ind]!= -1)return dp[ind];
//         int take = nums[ind]+maxprofit(ind-2,dp,nums);
//         int nottake = 0+maxprofit(ind-1,dp,nums);
//         return dp[ind] = max(take,nottake);
//     }
int rob1(vector<int>& nums) {
	int n = nums.size();
	// vector<int> dp(n,-1);
	int prev = nums[0];
	int prev2 = 0;
	// return maxprofit(n-1,dp,nums);
	//tabulation
	// dp[0]=nums[0];
	// for(int i = 1; i< n; i++){
	//     int take = nums[i];
	//     if(i > 1 )take += dp[i-2];
	//     int nottake = dp[i-1];
	//     dp[i] = max(take,nottake);
	// }
	// return dp[n-1];
	for (int i = 1; i < n; i++) {
		int take = nums[i];
		if (i > 1 )take += prev2;
		int nottake = prev;
		int curi = max(take, nottake);
		prev2 = prev ;
		prev = curi;
	}
	return prev ;

}
int rob(vector<int>& nums) {
	int n = nums.size();
	if (n == 1)return nums[0];
	vector<int> temp1, temp2;
	for (int i = 0 ; i < n; i++) {
		if (i != 0)temp1.push_back(nums[i]);
		if (i != n - 1)temp2.push_back(nums[i]);
	}
	return max(rob1(temp1), rob1(temp2));

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	// cin >> t ;
	cin.ignore();
	vector<int> arr;
	while (t--) {
		string input;
		getline(cin, input);
		stringstream ss(input);
		int number;
		while (ss >> number) {
			arr.push_back(number);
		}
	}
	cout << rob(arr);


}