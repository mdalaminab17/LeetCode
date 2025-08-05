// 05-08-2025 11:02 PM
//LeetCode Algorithm Problem Solved 

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        
        while(st<=end){
          int mid = st + ( end - st)/2;
          if(nums[mid]==target){
           return mid;
          }
          else if(nums[mid]>target){
          end = mid -1;
          }
          else{
           st = mid +1;
          }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    Solution s;
    cout<<s.search(nums,target);

    

    return 0;
}
