#include "../../include/playground_types.hpp"

namespace optimal {
std::string solve(const std::string&s){std::unordered_map<char,int>c;for(char x:s)++c[x];std::priority_queue<std::pair<int,char>>q;for(auto[x,n]:c)q.push({n,x});std::string out;std::pair<int,char>prev{0,0};while(!q.empty()){auto cur=q.top();q.pop();out+=cur.second;if(prev.first>0)q.push(prev);--cur.first;prev=cur;}return out.size()==s.size()?out:"";}
}  // namespace optimal
