#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> nums = {1,2,3,4,5};  // declaration and assign both simultaneously
    
    cout<<"size "<<nums.size()<<endl;
    for(int i=0; i<nums.size(); i++){
      cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    nums.push_back(78);  // insert single value at last
    
    cout<<"size "<<nums.size()<<endl;  // nums.size() to find size of vector
    for(int i=0; i<nums.size(); i++){
      cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    nums.pop_back();  // remove single value from last
    
    cout<<"size "<<nums.size()<<endl;
    for(int i=0; i<nums.size(); i++){
      cout<<nums[i]<<" ";
    }
    cout<<endl;

    // nums.begin() point toward first index of vector nums 
    // nums.end() point toward last index of vector nums
    nums.insert(nums.begin() + 3, 78);  // insert at specific index 
    
    cout<<"size "<<nums.size()<<endl;
    for(int i=0; i<nums.size(); i++){
      cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    nums.erase(nums.begin() + 3);  // remove element from a specific index
    
    cout<<"size "<<nums.size()<<endl;
    for(int i=0; i<nums.size(); i++){
      cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    nums.insert(nums.begin() + 3, 3, 78);  // adding mutliple copies of value start from specific index
    
    cout<<"size "<<nums.size()<<endl;
    for(int i=0; i<nums.size(); i++){
      cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    nums.erase(nums.begin() + 3, nums.begin() + 6);  // removing values from vector from specified range
    
    cout<<"size "<<nums.size()<<endl;
    for(int i=0; i<nums.size(); i++){
      cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    
    
    nums.clear();   // removing all the values from vector
    
    cout<<"size "<<nums.size()<<endl;
    for(int i=0; i<nums.size(); i++){
      cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
