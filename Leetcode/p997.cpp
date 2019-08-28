//找到所有的b值，如果b在a中出现过，就表示不是judge
//这里存在的问题就是不知道怎么表示两个属性的东西.还有就是去除key值相同的东西时，会特别不方便
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(N == 1){
            return 1;
        }
        map<int,int> a;
        vector<int> b;
        for(auto vec:trust){
            b.push_back(vec[1]);
            a[vec[0]]++;
        }
        int sub = -1;
        for(auto value:b){
            if(a[value]==0){
                sub = value;
            }
        }

        int count = 0;
        for(auto vec:trust){
            if(vec[1] == sub){
                count++;
            }
        }

        int count2 = 0;
        for(auto tmp:a){
            count2++;
        }

        if(count == count2-1){
            return sub;
        }else{
            return -1;
        }


    }
};