#include<iostream>
using namespace std;
class Solution{
 public:
 void MergeArray(vector<int>& nums1, m,vector<int>& nums2,n){
        int i=m-1,j=n-1,k=m+n-1;
        while(j>=0){
            if(i>=0&&nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
                k--;
            }else{
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
 }
 
};

int main(){
    Solution S;
    vector<int> arr={1,2,3,0,0,0};
    vector<int> arr2={2,5,6};
    int x=sizeof(arr);
    int y=sizeof(arr2);

    S.MergeArray(&arr,x,&arr2,y);

    return 0;
}