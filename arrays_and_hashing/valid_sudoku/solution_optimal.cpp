#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::vector<std::string>& b){
    std::array<std::array<bool,9>,9> row{},col{},box{};
    for(int r=0;r<9;++r) for(int c=0;c<9;++c){
        if(b[r][c]=='.') continue; int d=b[r][c]-'1', bi=(r/3)*3+c/3;
        if(row[r][d]||col[c][d]||box[bi][d]) return false;
        row[r][d]=col[c][d]=box[bi][d]=true;
    }
    return true;
}
}  // namespace optimal
