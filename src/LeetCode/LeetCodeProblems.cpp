/*
 * LeetCodeProblems.cpp
 *
 *  Created on: Jun 23, 2022
 *      Author: Mr _Mohamed
 */

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i] + nums[j]) == target){
                    res.push_back(i);
                    res.push_back(j);
                    i=nums.size();
                    j=nums.size();
                }
            }
        }
        return res;
}
vector<int> runningSum(vector<int>& nums) {
    vector<int> rs;
    rs=nums;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<i;j++){
            rs[i]+=nums[j];
        }
    }
    return rs;
}
bool isSubsequence(string s, string t) {
bool found;
int seq=0;
for(int i=0;i<s.size();i++){
    found=0;
    for(int j=seq;j<t.size();j++){
        if(s[i]==t[j]){
            found=1;
            seq=j+1;
            j=t.size();
        }
    }
    if(found){
        found=0;
    }
    else{
        return false;
    }
}
return true;
}
