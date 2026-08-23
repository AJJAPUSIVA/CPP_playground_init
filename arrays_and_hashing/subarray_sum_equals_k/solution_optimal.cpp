#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>& nums, long long k){
    std::unordered_map<long long,long long> freq{{0,1}};
    long long sum=0,ans=0;
    for(int x:nums){ sum+=x; auto it=freq.find(sum-k); if(it!=freq.end()) ans+=it->second; ++freq[sum]; }
    return ans;
}
}  // namespace optimal
