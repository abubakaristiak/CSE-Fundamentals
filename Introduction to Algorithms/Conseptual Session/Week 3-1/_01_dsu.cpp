#include<bits/stdc++.h>
using namespace std;

int parent[105];
int level[105];

void initialize(int sz){
    for(int i=0; i<sz; i++){
        parent[i] = -1; 
        level[i] = 0;   
    }
}

int Find(int node){
    if(parent[node] == -1){
        return node;
    }
    else{
        int leader = Find(parent[node]);
        parent[node] = leader;
        return leader;
    }
}


void Union(int p, int q){
    int parentP = Find(p);
    int parentQ = Find(q);

    parent[parentQ] = parentP;
}


void UnionByRank(int p, int q){
    int parentP = Find(p);
    int parentQ = Find(q);

    if(level[parentP] > level[parentQ]){
        parent[parentQ] = parentP;
    }
    else if(level[parentP] < level[parentQ]){
        parent[parentP] = parentQ;
    }
    else{
        parent[parentQ] = parentP;
        level[parentP]++;
    }

    
}



int main()
{
    initialize(5);

    UnionByRank(1,2);
    UnionByRank(3,4);
    UnionByRank(2,3);

    cout << Find(2) << endl;
    cout << Find(4) << endl;

    return 0;
}