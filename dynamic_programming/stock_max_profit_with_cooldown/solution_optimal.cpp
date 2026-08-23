#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>&p){long long hold=std::numeric_limits<long long>::lowest()/4,sold=0,rest=0;for(int x:p){long long oldHold=hold,oldSold=sold,oldRest=rest;hold=std::max(oldHold,oldRest-x);sold=oldHold+x;rest=std::max(oldRest,oldSold);}return std::max(sold,rest);}
}  // namespace optimal
