class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b) {
            int distA = a[0]*a[0] + a[1]*a[1];
            int distB = b[0]*b[0] + b[1]*b[1];
            return distA < distB;
        });

        vector<vector<int>> result;
        for(int i = 0; i < k; i++) {
            result.push_back(points[i]);
        }

        return result;
    }
};