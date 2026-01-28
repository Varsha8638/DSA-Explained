class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int k = n - 1; k >= 2; k--) {
        int left = 0, right = k - 1;

        while (left < right) {
            int sum = arr[left] + arr[right];

            if (sum == arr[k])
                return true;
            else if (sum < arr[k])
                left++;
            else
                right--;
        }
    }
    return false;
    }
};