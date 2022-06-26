#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int majorityElement(vector<int>& nums) {
    set<int> appeared;
    int retMajor = 0, curr = 0, elem = 0;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        if (appeared.find(nums[i]) == appeared.end()) {
            appeared.insert(nums[i]);

            curr = 0; 
            curr++;
        }
        else {
            curr++;
        }

        if (curr > retMajor) {
            retMajor = curr;
            elem = nums[i];
        }
    }

    return elem;
}

int main()
{
    vector<int> ivec = { 2, 2, 1, 1, 1, 2, 2 };

    cout << majorityElement(ivec) << endl;

    return 0;
}
