class Solution {
public:
    int mySqrt(int x) {
        long long left = 0, right = x;
        int ans = 0;

        while (left <= right) {
            long long mid = (left + right) / 2;

            if (mid * mid == x) {
                return mid; // perfect square
            }
            else if (mid * mid < x) {
                ans = mid;      // possible answer
                left = mid + 1; // right side जाओ
            }
            else {
                right = mid - 1; // left side जाओ
            }
        }

        return ans;
    }
};