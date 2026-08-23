#include "../../include/playground_types.hpp"

namespace optimal {
long long rec(std::vector<int>&a,std::vector<int>&t,int l,int r){if(r-l<=1)return 0;int m=(l+r)/2;long long c=rec(a,t,l,m)+rec(a,t,m,r);int i=l,j=m,k=l;while(i<m||j<r){if(j==r||(i<m&&a[i]<=a[j]))t[k++]=a[i++];else{t[k++]=a[j++];c+=m-i;}}for(i=l;i<r;++i)a[i]=t[i];return c;}
long long solve(std::vector<int>a){std::vector<int>t(a.size());return rec(a,t,0,a.size());}
}  // namespace optimal
