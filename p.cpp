#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
vector <string> ans;
void solve(vector<vector<char> > v, int in, string res){
    int row = v.size();
    if(in==row){
        ans.push_back(res);
        return;
    }
    for(char ch : v[in])
        solve(v, in+1, res+ch);
}
int main(int argc, char* argv[]){
    vector < vector <char> > v;
if(argc<2){
    cout<<"Please Specify the File";

}else{
    vector <vector <char> > v;
    freopen(argv[1], "r", stdin);
    string s;
    vector <char> ch;
    while(cin>>s){
        char c;
        for(int i=0;i<s.size();i++)
        {
            c=s[i];
            if(c!=',')
                ch.push_back(c);
        }
        v.push_back(ch);
        ch.clear();
    }
    fclose(stdin);
    // for(int i=0;i<v.size();i++){
    //     for(int j=0;j<v[i].size();j++)
    //     cout<<v[i][j]<<"-";
    //     cout<<endl;
    //     }
    solve(v,0,"");
    cout<<ans[0];
    for(int i=1;i<ans.size();i++)
    cout<<", "<<ans[i];


    }
return 0;
}