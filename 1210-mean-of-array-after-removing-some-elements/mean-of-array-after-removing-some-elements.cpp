class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int remove = n / 20;   // 5% of the elements

        double sum = 0;
        int count =0;

        for (int i = remove; i < n - remove; i++) {
            sum += arr[i];
            count++;
        }

        return sum /count;
    }
};