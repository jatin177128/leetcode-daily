priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>pq;
        vector<int> vis(V,0);
        pq.push({0,0});
        int ans = 0 ;
        while(!pq.empty()){
            auto it = pq.top();
            int node = it.second;
            int wt = it.first;
            pq.pop();
            if(vis[node]==1)continue;
            vis[node]=1;
            ans += wt;
           
            for(auto it: adj[node]){
                int adjnode = it[0];
                int wt = it[1];
                if(!vis[adjnode]){
                    pq.push({wt,adjnode});
                }
                
            }
        }
        return ans;