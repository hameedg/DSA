vector<vector<int>> levelOrder(Node* root) {
    
    vector<vector<int>> ans;
    if(!root) return ans;
    
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()){
        
        int sz=q.size();
        vector<int> v;
        
        while(sz--){
            auto curr=q.front();
            q.pop();       
            v.push_back(curr->val);
  
            for(auto it:curr->children){    //pushing curr node's children in queue
                q.push(it);
            }
        }
        ans.push_back(v);
    }
    return ans;
}