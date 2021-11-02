vector<vector<int>> ans = verticalOrderTraversal(root);
    for(auto x:ans){
        for(auto y:x) cout<<y<<" ";
        cout<<endl;
    }