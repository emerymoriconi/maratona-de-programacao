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
    int N;
    vector<char> v;

    cin >> N;

    string S = to_string(N);

    char a = S[0];
    char b = S[1];
    char c = S[2];

    string bca;
    char temp = b;

    for (int i = 1; i < 3; i++){
        bca.push_back(temp);
        temp = c;
    }

    bca.push_back(a);

    string cab;
    temp = c;

    for (int i = 1; i < 3; i++){
        cab.push_back(temp);
        temp = a;
    }

    cab.push_back(b);

    int bca_int = stoi(bca);
    int cab_int = stoi(cab);

    cout << bca_int << " " << cab_int << endl;

    return 0;
}