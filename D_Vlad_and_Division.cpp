#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

bool isDifferentBits(int a, int b, int startBit, int endBit) {
    for (int i = startBit; i <= endBit; ++i) {
        if (bitset(a)[i] != bitset(b)[i]) {
            return true;
        }
    }
    return false;
}

int minGroups(const vector<int>& numbers) {
    int n = numbers.size();
    vector<bool> visited(n, false);
    int groupCount = 0;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            groupCount++;
            visited[i] = true;
            vector<int> neighbors;
            for (int j = i + 1; j < n; ++j) {
                if (!visited[j] && isDifferentBits(numbers[i], numbers[j], 0, 30)) {
                    neighbors.push_back(j);
                }
            }
            for (int neighbor : neighbors) {
                visited[neighbor] = true;
            }
        }
    }

    return groupCount;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> numbers(n);
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }

        int groups = minGroups(numbers);
        cout << groups << endl;
    }

    return 0;
}
