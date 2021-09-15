#include<bits/stdc++.h>
using namespace std;

void permute(string str, vector<string> &ans,
                            int l, int r){
        if(l==r){
            ans.push_back(str);
            return;
        }
        else
        {
            for(int i = l;i<=r;i++){
                if(l != i && str[l] == str[i]) {
                    continue;
                }
                swap(str[l], str[i]);
                permute(str, ans, l+1, r);
            }
        }
        return;

    }

vector<string> solve(string str) {
        vector<string> ans;
        sort(str.begin(),str.end());
        permute(str, ans, 0, str.length()-1);
        return ans;
        
    }
    
    
int main(){
string str;

cin>>str;

vector<string> arr;

arr= solve(str);

for(auto s:arr){

  cout<< s<<" ";

}
return 0;

}
