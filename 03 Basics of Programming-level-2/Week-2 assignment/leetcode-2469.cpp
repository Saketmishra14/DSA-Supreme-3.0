//leetcode:  2469. Convert the Temperature

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> arr;
        double k=(celsius +273.15);
        double f=(celsius * (9.0 / 5)) + 32;
        arr.push_back(k);
        arr.push_back(f);
        return arr;    
    }
};