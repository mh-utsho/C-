#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     int findDuplicate(vector<int>& v) {
        
        for(int i=0;i<v.size();++i)
        {
            if(v[abs(v[i])-1]>=0)
              v[abs(v[i])-1] = -v[abs(v[i])-1];
            else
                return abs(v[i]); 
        }
        return 0;
    }
};

int main(){

}