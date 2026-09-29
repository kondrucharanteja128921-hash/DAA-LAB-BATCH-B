#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n,amount; cout<<"DAA Practical 7 - Making Change using Dynamic Programming\n";
    cout<<"Enter number of coin types: ";cin>>n;
    vector<int> coin(n);cout<<"Enter coin denominations: ";for(int &x:coin)cin>>x;
    cout<<"Enter amount: ";cin>>amount;
    vector<int> dp(amount+1,INT_MAX/2), used(amount+1,-1);
    dp[0]=0;
    for(int x=1;x<=amount;x++)
        for(int c:coin) if(c<=x && dp[x-c]+1<dp[x]){
            dp[x]=dp[x-c]+1; used[x]=c;
        }
    if(dp[amount]>=INT_MAX/2){cout<<"Change cannot be formed.\n";return 0;}
    cout<<"Minimum number of coins = "<<dp[amount]<<"\n";
    cout<<"Coins used: ";int x=amount;
    while(x>0){cout<<used[x]<<" ";x-=used[x];}
    cout<<"\n"; return 0;
}
