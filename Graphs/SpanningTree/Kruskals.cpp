#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class DSU{
    int *par;
    int *rank;
    public:
    DSU(int n){
        par=new int[n];
        rank= new int[n];
        for(int i=0;i<n;i++)rank[i]=0,par[i]=i;
    }
int find_par(int x){
    if(par[x]==x)return x;
    return par[x]=find_par(par[x]);
}
void Union(int u,int v){
    int pu=find_par(u);
    int pv=find_par(v);
    if(pu!=pv){
        if(rank[pu]>rank[pv])par[pv]=pu;
        else if(rank[pu]<rank[pv])par[pu]=pv;
        else {
            par[pu]=pv;
            rank[pv]++;
        }
    }
}
};
int main(){
    int n,e;
    cin>>n>>e;
    vector<pair<int,pair<int,int>>>edges(e);
    vector<int>rank(n,0);
    vector<int>par(n);
    for(int i=0;i<n;i++)par[i]=i;
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges[i]=make_pair(w,make_pair(u,v));
    }
    sort(edges.begin(),edges.end());
    int cost=0;
    DSU d(n);
    for(int i=0;i<e;i++){
        int w=edges[i].first;
        int u=edges[i].second.first;
        int v=edges[i].second.second;
        int pu=d.find_par(u);
        int pv=d.find_par(v);
        if(pu!=pv){
            d.Union(u,v);
            cost+=w;
        }
    }
    cout<<"cost:"<<cost<<endl;
    return 0;
}
Time:O(eloge)(sorting)+O(e)(armotised complexity for dsu O(1))
if we consider worst case then O(eloge)+O(elogv).
/*
4 5
0 1 10
0 2 6
0 3 5
1 3 15
2 3 4
*/
