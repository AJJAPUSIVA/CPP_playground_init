#include "../../include/playground_types.hpp"

namespace brute_force {
class SnapshotArray{std::vector<int>a;std::vector<std::vector<int>>snaps;public:explicit SnapshotArray(int n):a(n){}void set(int i,int v){a[i]=v;}int snap(){snaps.push_back(a);return snaps.size()-1;}int get(int i,int id)const{return snaps.at(id).at(i);}};
}  // namespace brute_force
