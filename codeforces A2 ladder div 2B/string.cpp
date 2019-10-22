#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
for(int z=0;z<t;z++ ){
int n;
cin>>n;
vector<string>s;
vector<int>l;
for(int q=0;q<n;q++){
string h;
int y;
cin>>h>>y;
s.push_back(h);
l.push_back(y);}
map<string,int>d;
map<string,int>g;
for(int i=0;i<=s.size();i++){
    if(d[s[i]]!=0){
    d[s[i]]=0;
}
       if(g[s[i]]!=0){
        g[s[i]]=0;
}}
for(int i=0;i<s.size();i++){
    if(l[i]==0){
        d[s[i]]+=1;
    }
    else{
        g[s[i]]+=1;
    }
}
int count=0;
vector<int>k;
map<string, int>::iterator itr;
for(itr = d.begin(); itr != d.end(); itr++){
    string key = itr->first;
    if(d[key]>= g[key]) count+= d[key];

    else count+= d[key];
}
cout<<count<<endl;}}