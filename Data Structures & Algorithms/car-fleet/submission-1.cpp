class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int n = position.size();
        
        vector<pair<int,double>> cars;
        
        // position aur time store karo
        for(int i = 0; i < n; i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }

        // position ke according sort
        sort(cars.begin(), cars.end());

        int fleets = 0;
        double currTime = 0;

        // piche se traverse karo
        for(int i = n - 1; i >= 0; i--) {

            // agar current car ka time jyada hai
            // to nayi fleet banegi
            if(cars[i].second > currTime) {
                fleets++;
                currTime = cars[i].second;
            }
        }

        return fleets;
    }
};