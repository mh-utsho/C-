
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define vbe v.begin(),v.end()
ll j;
#define FOR(i, start, end) for (ll i = (start); i < (end); i++)
#define fastin {ios_base::sync_with_stdio(false);cin.tie(NULL);}


//_________________________________________________________________________________



 vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int, int>> v;
        int n = score.size();
        vector<string> ans(n);

        // Create a vector of pairs with (score, index)
        for (int i = 0; i < n; i++) {
            v.push_back({score[i], i});
        }

        // Sort in descending order based on scores
        sort(v.rbegin(), v.rend());

        // Assign medals and ranks
        for (int i = 0; i < n; i++) {
            switch (i) {
                case 0:
                    ans[v[i].second] = "Gold Medal";
                    break;
                case 1:
                    ans[v[i].second] = "Silver Medal";
                    break;
                case 2:
                    ans[v[i].second] = "Bronze Medal";
                    break;
                default:
                    ans[v[i].second] = to_string(i + 1);
                    break;
            }
        }

        return ans;
    }

int main() {

    vector<int> scores = {10, 5, 8, 2, 7};

    vector<string> result = findRelativeRanks(scores);

    // Print the result
    cout << "Medals and Ranks:\n";
    for (int i = 0; i < result.size(); i++) {
        cout << "Index " << i << ": " << result[i] << endl;
    }

    return 0;
}
