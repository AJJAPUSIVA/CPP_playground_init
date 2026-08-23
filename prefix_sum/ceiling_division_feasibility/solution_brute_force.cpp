#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(const std::vector<int>&jobs,int cap,int workers){if(cap<=0)return jobs.empty();int used=0;for(int x:jobs){int chunks=0,remaining=x;while(remaining>0){remaining-=cap;++chunks;}used+=chunks;}return used<=workers;}
}  // namespace brute_force
