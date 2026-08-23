#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(std::vector<playground::Interval>a){if(a.empty())return 0;std::set<int>cand;for(auto x:a)for(int p=x.start;p<=x.end&&p<=x.start+1000;++p)cand.insert(p);std::vector<int>v(cand.begin(),cand.end());for(int k=1;k<=static_cast<int>(v.size());++k){std::vector<int>idx(k);std::function<bool(int,int)>dfs=[&](int pos,int start){if(pos==k){for(auto x:a){bool hit=false;for(int p:idx)if(v[p]>=x.start&&v[p]<=x.end)hit=true;if(!hit)return false;}return true;}for(int i=start;i<static_cast<int>(v.size());++i){idx[pos]=i;if(dfs(pos+1,i+1))return true;}return false;};if(dfs(0,0))return k;}return a.size();}
}  // namespace brute_force
