#include <iostream>
#include <vector>
using namespace std;
int MajElem(vector<int> nums){
    int ans = nums[0];
    int n = nums.size();
    int freq = 0;
    for(int i = 0; i < n; i++) {
        if (freq == 0){
            ans = nums[i];
        }
        if(ans = nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector <int> nums = {1,2,1,1,2,2,2};
    cout << MajElem(nums) << endl;
    return 0;
}
