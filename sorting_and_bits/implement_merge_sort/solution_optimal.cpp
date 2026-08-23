#include "../../include/playground_types.hpp"

namespace optimal {
void ms(std::vector<int>&a,std::vector<int>&tmp,int l,int r){if(r-l<=1)return;int m=(l+r)/2;ms(a,tmp,l,m);ms(a,tmp,m,r);int i=l,j=m,k=l;while(i<m||j<r)tmp[k++]=(j==r||(i<m&&a[i]<=a[j]))?a[i++]:a[j++];for(i=l;i<r;++i)a[i]=tmp[i];}
std::vector<int> solve(std::vector<int>a){std::vector<int>t(a.size());ms(a,t,0,a.size());return a;}
}  // namespace optimal
