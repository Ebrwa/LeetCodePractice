class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> cars;
        for (int i = 0; i < n; i++) {
            double t = double(target - position[i]) / speed[i];
            cars.push_back({position[i], t});
        }

        sort(cars.begin(), cars.end(), greater<>());

        int fleets = 0;
        double currentSlowest = 0.0;

        for (auto& car : cars) {
            double t = car.second;
            if (t > currentSlowest) {
                fleets++;
                currentSlowest = t;
            }
        }

        return fleets;
    }
};
