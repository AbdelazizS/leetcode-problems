The error you’re seeing comes from the online judge / test harness (like LeetCode or similar). They expect your solution to be wrapped inside a class Solution with a method called twoSum.
In your code, you wrote standalone functions (twoSumBrute, twoSumHash) and a main(). That works locally, but the judge doesn’t run main(). Instead, it tries to call Solution().twoSum(...). Since you didn’t define that class, you get:
error: use of undeclared identifier 'Solution'



✅ Correct Format for Online Judge (C++)
Here’s how you should write it:
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};


- No main() function — the judge provides its own test runner.
- The method must be named exactly twoSum inside class Solution.
- You can only return the result; printing is not required.

🧭 Why Your Local Code Worked but Judge Failed
- Local run: You wrote main() and called your functions directly → works fine.
- Judge run: They don’t use your main(). They expect a Solution class with a twoSum method → your code didn’t match their format.

🚀 What To Do
- For practice locally → keep your main() version (good for testing).
- For submitting online → use the class Solution version above.

✅ So:
- The error is not about your logic, but about the required format.
- Wrap your function inside class Solution and name it twoSum.
Would you like me to also show you how to keep both versions in your repo (one with main() for local testing, one with class Solution for online judge submission), so your GitHub repo is complete and useful in both contexts?
