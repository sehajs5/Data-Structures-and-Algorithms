#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(long long int arr[], long long int n, long long int mid, long long int k) {
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        long long int cut = arr[i] - mid;
        if (cut > 0) {
            sum += cut;
        }
        if (sum == k || sum > k) {
            return true;
        }
    }
    return false;
}

int woodCutter(long long int arr[], long long int n, long long int k) {
    long long int s = 0;
    sort(arr, arr + n);
    long long int e = arr[n - 1];
    long long int ans = -1;
    while (s <= e) {
        long long int mid = s + (e - s) / 2;
        if (isPossible(arr, n, mid, k)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    long long int arr[5] = {4,42,40,26,46};
    cout << woodCutter(arr, 5, 20);

    return 0;
}
