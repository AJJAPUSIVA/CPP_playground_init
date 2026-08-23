#include "../../include/playground_types.hpp"

namespace brute_force {
bool one(const std::string&a,const std::string&b){int d=0;for(std::size_t i=0;i<a.size();++i)d+=a[i]!=b[i];return d==1;}
int solve(const std::string&begin,const std::string&end,const std::vector<std::string>&words){std::vector<std::string>w=words;w.push_back(begin);int s=w.size()-1,t=-1;for(int i=0;i<s;++i)if(w[i]==end)t=i;if(t<0)return 0;std::vector<std::vector<int>>g(w.size());for(int i=0;i<static_cast<int>(w.size());++i)for(int j=i+1;j<static_cast<int>(w.size());++j)if(one(w[i],w[j])){g[i].push_back(j);g[j].push_back(i);}std::queue<std::pair<int,int>>q;q.push({s,1});std::vector<char>seen(w.size());seen[s]=1;while(!q.empty()){auto[u,d]=q.front();q.pop();if(u==t)return d;for(int v:g[u])if(!seen[v]){seen[v]=1;q.push({v,d+1});}}return 0;}
}  // namespace brute_force
