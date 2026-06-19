class Solution {
public:
    string removeOccurrences(string s, string part) {
        // if(part.size() > s.size()) return s;
        // int n = s.size(), left = 0;
        // while(left != n){
        //     if(s.size() >= part.size()){
        //         string chunk = s.substr(part.size());
        //         if(chunk == part){
        //             s.erase(left + part.size() - 1, part.size());
        //         }
        //     }
        //     left ++;
        // }
        // return s;
        while(s.contains(part)){
            s.erase(s.find(part), part.size());
        }
        return s;
    }
};