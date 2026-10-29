
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int lp = 0, rp = n - 1;
        int leftMax = 0, rightMax = 0;
        int water = 0;

        while (lp < rp) {
            if (height[lp] < height[rp]) {
                if (height[lp] >= leftMax) {
                    leftMax = height[lp];
                } else {
                    water += leftMax - height[lp];
                }
                lp++;
            } else {
                if (height[rp] >= rightMax) {
                    rightMax = height[rp];
                } else {
                    water += rightMax - height[rp];
                }
                rp--;
            }
        }

        return water;
    }
};
