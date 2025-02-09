#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;
const ll SMALL = -1e9;

using namespace std;

int main(){
    optimize;
    int n;

    cin >> n;
    vector<int> nums, resp;

    for (int i = 1; i <= n; i++) {
        nums.push_back(i);
    }

    for (int i = 1; i < n; i=i+2) {
        resp.push_back(nums[i]);
    }

    for (int i = 0; i < n; i=i+2) {
        resp.push_back(nums[i]);
    }

    for (int j = 0; j < resp.size(); j++){
        if ((j != 0) && ((resp[j] - resp[j-1]) == 1 || (resp[j] - resp[j-1]) == -1)) {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
    }

    for (int num : resp) {
        cout << num << " ";
    }

    return 0;
}