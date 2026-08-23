#include "../../include/playground_types.hpp"

namespace brute_force {
bool dfs(std::map<char,int>&c,std::string&cur,int n){if(static_cast<int>(cur.size())==n)return true;for(auto it=c.begin();it!=c.end();++it)if(it->second&& (cur.empty()||cur.back()!=it->first)){char x=it->first;--it->second;cur+=x;if(dfs(c,cur,n))return true;cur.pop_back();++it->second;}return false;}
std::string solve(const std::string&s){std::map<char,int>c;for(char x:s)++c[x];std::string out;if(dfs(c,out,s.size()))return out;return"";}
}  // namespace brute_force
