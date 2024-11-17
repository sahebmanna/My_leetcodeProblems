#include<iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int i;
        int n=prices.size();
        for(i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                profit +=(prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
};
int main(){
    vector<int> v={5,2,6,1,4,7,3,6};
    Solution s;
    int x=s.maxProfit(v);
    cout<<x<<endl;
    return 0;
}