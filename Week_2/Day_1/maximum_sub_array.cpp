vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        multiset<int> ms;
        for(int i=0; i<k; i++) {
            ms.insert(arr[i]);
        }
        vector<int> a;
        // cout << *(--ms.end());
        a.push_back((*(--(ms.end()))));
        // cout <<  << " ";
        for(int i=k; i<n; i++) {
            ms.erase(ms.find(arr[i-k]));
            ms.insert(arr[i]);
            
            a.push_back(*(--(ms.end())));    
        }
        return a;
    }
