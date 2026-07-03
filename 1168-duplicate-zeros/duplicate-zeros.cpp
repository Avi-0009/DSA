class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>store;
        for(int i : arr){
            if(i == 0)
                store.push_back(0);
            store.push_back(i);
        }
        for(int i = 0; i < arr.size(); i++){
            arr[i] = store[i];
        }
        return;
    }
};