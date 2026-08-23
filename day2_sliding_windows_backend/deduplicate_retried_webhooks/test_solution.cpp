#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<playground::Event>e{{"a",5,"x"},{"a",2,"x"},{"b",3,"y"}};auto a=brute_force::solve(e),b=optimal::solve(e);assert(a.size()==2&&b.size()==2);auto it=std::find_if(b.begin(),b.end(),[](auto&x){return x.id=="a";});assert(it->timestamp==2);
    return 0;
}
