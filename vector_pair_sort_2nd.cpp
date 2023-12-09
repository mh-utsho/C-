#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ff first
#define ss second
#define pb push_back
ll j;
#define FOR(i, start, end) for (ll i = (start); i < (end); i++)
#define fastin {ios_base::sync_with_stdio(false);cin.tie(NULL);}


//_________________________________________________________________________________


int main() {
    vector<int> input = {1, 2, 3, 2, 1, 3, 4, 5, 1, 2, 4, 4, 5,1};

    
    map<int, int> m;

  
    for (int x : input) {
        m[x]++;
    }
    //copy element map to vector
    vector<pair<int, int>> v(m.begin(), m.end());
    
    // Sort in descending order
    // Sort the vector based on values (second element of pairs) 
    sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;  
    });
   
   
    for (const auto& pair : v) {
        cout << "Number: " << pair.first << ", Frequency: " << pair.second << endl;
    }

    return 0;
}




