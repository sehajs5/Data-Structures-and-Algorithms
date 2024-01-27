#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > construct2DArray(vector<int>& original, int m, int n) {
    if (original.size() != m * n) {
        // Handle error or return an empty vector, depending on your requirements.
        return {};
    }

    vector<vector<int> > arr(m, vector<int>(n, 0));

    int k = 0;
    for (int i = 0; i < m; i++) {
        for (int a = 0; a < n; a++) {
            arr[i][a] = original[k++];
        }
    }

    return arr;
}

int main() {
    vector<int> original;
    original.push_back(5);
    original.push_back(10);
    original.push_back(15);
    original.push_back(20);

    vector<vector<int> > ans = construct2DArray(original, 2, 2);

    // Check if the vector is not empty before accessing its elements
    if (!ans.empty()) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Failed to create a 2D array." << endl;
    }

    return 0;
}
