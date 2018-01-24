#include<bits/stdc++.h>
using namespace std;
int hash[100]={0};
 vector<int> v[1000];
dfs (int n){
            hash[n]=1;
       cout << n;
    for(int i=0;i<v[n].size();i++){
            if(hash[v[n][i]]==0)
                dfs(v[n][i]);
                hash[v[n][i]]=1;
            }
    }
int main(){
    int i,j,n,m,p;
   int hash[100]={0};
   vector<int> :: iterator it;
   cin >> n;
   for(i=0;i<n;i++){
   cin >> m >> p;
   v[m].push_back(p);
   }

   dfs(1);
for(i=0;i<n;i++){
        cout << i;
for(j=0;j<v[i].size();j++){
    cout << v[i][j];
}
cout << "\n";
}

}
