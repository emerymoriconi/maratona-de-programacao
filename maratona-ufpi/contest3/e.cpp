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
    int q;
    deque<int> deq;

    cin >> q;

    bool reversed = false;

    for (int i = 0; i < q; i++) {
        string s;
        int n;
        cin >> s;

        if (s == "toFront") {
            cin >> n;
            if (!reversed)
                deq.push_front(n);
            else
                deq.push_back(n);
        } else if (s == "push_back") {
            cin >> n;
            if (!reversed)
                deq.push_back(n);
            else
                deq.push_front(n);
        } else if (s == "back") {
            if (!deq.empty()) {
                if (!reversed) {
                    cout << deq.back() << endl;
                    deq.pop_back();
                } else {
                    cout << deq.front() << endl;
                    deq.pop_front();
                }
            } else {
                cout << "No job for Ada?" << endl;
            }
        } else if (s == "front") {
            if (!deq.empty()) {
                if (!reversed) {
                    cout << deq.front() << endl;
                    deq.pop_front();
                } else {
                    cout << deq.back() << endl;
                    deq.pop_back();
                }
            } else {
                cout << "No job for Ada?" << endl;
            }
        } else if (s == "reverse") {
            reversed = !reversed;
        }
    }
}
