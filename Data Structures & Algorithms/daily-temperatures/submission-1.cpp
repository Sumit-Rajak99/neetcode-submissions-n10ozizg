class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        vector<int> result(n, 0);   // by default sab 0
        stack<int> st;              // stack me index store karenge
        
        for (int i = 0; i < n; i++) {
            
            // Jab tak stack empty nahi hai
            // aur current temperature stack ke top wale se bada hai
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                
                int prevIndex = st.top();
                st.pop();
                
                result[prevIndex] = i - prevIndex;
            }
            
            st.push(i);  // current index stack me daal do
        }
        
        return result;
    }
};