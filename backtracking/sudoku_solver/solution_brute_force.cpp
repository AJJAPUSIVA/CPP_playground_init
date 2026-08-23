#include "../../include/playground_types.hpp"

namespace brute_force {
bool valid(const std::vector<std::vector<char>>& b,int r,int c,char x){
    for(int i=0;i<9;++i) if(b[r][i]==x||b[i][c]==x) return false;
    int br=r/3*3,bc=c/3*3;
    for(int i=0;i<3;++i)for(int j=0;j<3;++j)if(b[br+i][bc+j]==x)return false;
    return true;
}
bool rec(std::vector<std::vector<char>>& b,int pos){
    if(pos==81)return true; int r=pos/9,c=pos%9;
    if(b[r][c]!='.')return rec(b,pos+1);
    for(char x='1';x<='9';++x)if(valid(b,r,c,x)){b[r][c]=x;if(rec(b,pos+1))return true;b[r][c]='.';}
    return false;
}
bool solve(std::vector<std::vector<char>>& b){return rec(b,0);}
}  // namespace brute_force
