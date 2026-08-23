#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){std::vector<std::string>t{"fetch","parse","save","email"};std::vector<std::pair<std::string,std::string>>d{{"parse","fetch"},{"save","parse"},{"email","parse"}};auto a=brute_force::solve(t,d),b=optimal::solve(t,d);assert(a.size()==3&&b.size()==3);assert(b[2].size()==2);
    return 0;
}
