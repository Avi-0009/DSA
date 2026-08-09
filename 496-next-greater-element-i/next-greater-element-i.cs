public class Solution {
    public int[] NextGreaterElement(int[] nums1, int[] nums2) {
        Stack<int>st = new Stack<int>();
        Dictionary<int, int>map = new Dictionary<int, int>();

        foreach(int i in nums2){
            while(st.Count > 0 && st.Peek() < i){
                map[st.Peek()] = i;
                st.Pop();
            }
            st.Push(i);
        }

        while(st.Count > 0){
            map[st.Peek()] = -1;
            st.Pop();
        }

        int[] res = new int[nums1.Length];
        for(int i = 0; i < nums1.Length; i++){
            res[i] = map[nums1[i]];
        }
        return res;
    }
}