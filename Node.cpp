#include<bits/stdc++.h>
using namespace std;

int main(){

}

  int findDuplicate(std::vector<int>& v) {
        std::unordered_set<int> m;
        for (int x : v) {
            if (m.find(x) != m.end()) {
                return x;
            }
            m.insert(x);
        }
        return -1;  
    }


     