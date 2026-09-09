class Solution {
public:
    long long countCommas(long long n) {
        long long count = 0;
        long long start = 1000;

        while (start <= n) {
            count += n - start + 1;

            if (start > LLONG_MAX / 1000)
                break;

            start *= 1000;
        }

        return count;
    }
};