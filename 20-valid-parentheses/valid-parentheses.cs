public class Solution {
    public bool IsValid(string s) {
        Stack<int>st = new Stack<int>();

        foreach(char c in s){
            if(c == '(') st.Push(')');
            else if(c == '{') st.Push('}');
            else if(c == '[') st.Push(']');
            else{
                if(st.Count == 0 || st.Peek() != c)return false;
                else st.Pop();
            }
        }
        return st.Count > 0 ? false : true;
    }
}