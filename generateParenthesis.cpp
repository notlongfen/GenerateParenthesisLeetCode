#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
    vector<string>generateParenthesis(int n){
        vector<string>arr;
        string s="(";
        generate(n, s,1, 0, arr);
        return arr;
    }
    void generate(int n, string s, int somo, int sodong, vector<string>&a){
            if(somo>n){
                return;
            }
            if(sodong>somo){
                return;
            }
            if(somo==sodong && somo==n){
                a.push_back(s);
                return;
            }
            s+="(";
            generate(n, s,somo+1, sodong,a);
            s.pop_back();
            s+=")";
            generate(n,s,somo,sodong+1,a);
            s.pop_back();
    }
};

int main(){
 Solution sol;
 int n;
 cin>>n;
 vector<string>res=sol.generateParenthesis(n);
 for(auto it: res){
    cout<<it<<endl;
 }
 return 0;
}