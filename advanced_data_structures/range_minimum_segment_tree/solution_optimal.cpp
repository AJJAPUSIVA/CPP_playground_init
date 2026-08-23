#include "../../include/playground_types.hpp"

namespace optimal {
class SegTree{int n;std::vector<int>t;public:explicit SegTree(const std::vector<int>&a){n=1;while(n<static_cast<int>(a.size()))n*=2;t.assign(2*n,std::numeric_limits<int>::max());for(int i=0;i<static_cast<int>(a.size());++i)t[n+i]=a[i];for(int i=n-1;i;--i)t[i]=std::min(t[2*i],t[2*i+1]);}void update(int i,int v){i+=n;t[i]=v;for(i/=2;i;i/=2)t[i]=std::min(t[2*i],t[2*i+1]);}int query(int l,int r)const{int ans=std::numeric_limits<int>::max();for(l+=n,r+=n+1;l<r;l/=2,r/=2){if(l&1)ans=std::min(ans,t[l++]);if(r&1)ans=std::min(ans,t[--r]);}return ans;}};
}  // namespace optimal
