class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int i = 0;
        int j = n - 1;
        int maxWater = 0;

        while (i < j)
        {

            // Width (j-i)
            int w = j - i;
            // Height
            int h = min(height[i], height[j]);
            // Area
            int area = w * h;
            // maxWater
            maxWater = max(maxWater, area);
            // Increase or decrease
            if (height[i] > height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return maxWater;
    }
};