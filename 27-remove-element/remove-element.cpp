class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0; // Pointer to track where the next valid element goes
        
        // Scan through the array with pointer 'i'
        for (int i = 0; i < nums.size(); i++) {
            
            // If the current element is NOT the value we want to remove
            if (nums[i] != val) {
                nums[index] = nums[i]; // Keep it by copying it to the 'index' position
                index++;               // Move the 'index' forward
            }
        }
        
        return index; // 'index' now represents the new logical length of the array
    }
};