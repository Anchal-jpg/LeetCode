
class Solution {
public:
    int BinarySearch(vector<int>& numbers, int target, int low) {
        int high = numbers.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (numbers[mid] == target) {
                return mid;
            }
            else if (numbers[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return -1;
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        for (int i = 0; i < n; i++) {
            int need = target - numbers[i];

            int idx2 = BinarySearch(numbers, need, i + 1);

            if (idx2 != -1) {
                return {i + 1, idx2 + 1};
            }
        }

        return {};
    }
};
