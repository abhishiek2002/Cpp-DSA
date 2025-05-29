# Merge Sorted Array

👉 <a href="https://leetcode.com/problems/merge-sorted-array">Leetcode Problem Statement</a>

```cpp
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;

        for(int i=0; i<m; i++){
            nums3.push_back(nums1[i]);
        }

        int index=0;
        int i = 0, j=0; // l -> nums3 pointer and r -> nums2 pointer

        while(i<m && j<n){
            if(nums3[i] <= nums2[j]){
                nums1[index] = nums3[i];
                index++;
                i++;
            }
            else{
                nums1[index] = nums2[j];
                index++;
                j++;
            }
        }

        while(i<m){
            nums1[index] = nums3[i];
            index++;
            i++;
        }

        while(j<n){
            nums1[index] = nums2[j];
            index++;
            j++;
        }
    }
};
```
