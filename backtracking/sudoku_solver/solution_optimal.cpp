#include "../../include/playground_types.hpp"

namespace optimal {
bool rec(std::vector<std::vector<char>>& b,std::array<int,9>& row,std::array<int,9>& col,
         std::array<int,9>& box,int pos){
    int best=-1,bestMask=0,bestCount=10;
    for(int p=0;p<81;++p){int r=p/9,c=p%9;if(b[r][c]!='.')continue;
        int mask=(~(row[r]|col[c]|box[r/3*3+c/3]))&0x1FF;
        int cnt=__builtin_popcount(static_cast<unsigned>(mask));
        if(cnt<bestCount){best=p;bestMask=mask;bestCount=cnt;if(cnt==1)break;}
    }
    if(best==-1)return true;if(bestCount==0)return false;
    int r=best/9,c=best%9,bi=r/3*3+c/3;
    for(int m=bestMask;m;m&=m-1){int bit=m&-m;int d=0; while (((bit >> d) & 1) == 0) ++d;
        b[r][c]=char('1'+d);row[r]|=bit;col[c]|=bit;box[bi]|=bit;
        if(rec(b,row,col,box,pos+1))return true;
        row[r]^=bit;col[c]^=bit;box[bi]^=bit;b[r][c]='.';
    }return false;
}
bool solve(std::vector<std::vector<char>>& b){
    if(b.size()!=9)return false;std::array<int,9> row{},col{},box{};
    for(int r=0;r<9;++r)for(int c=0;c<9;++c)if(b[r][c]!='.'){int bit=1<<(b[r][c]-'1');row[r]|=bit;col[c]|=bit;box[r/3*3+c/3]|=bit;}
    return rec(b,row,col,box,0);
}
}  // namespace optimal
