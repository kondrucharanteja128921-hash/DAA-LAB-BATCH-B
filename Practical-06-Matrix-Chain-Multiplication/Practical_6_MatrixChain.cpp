#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n; cout<<"DAA Practical 6 - Matrix Chain Multiplication using DP\n";
    cout<<"Enter number of matrices: ";cin>>n;
    vector<int> p(n+1);
    cout<<"Enter "<<n+1<<" dimensions: ";for(int &x:p)cin>>x;
    vector<vector<long long>> dp(n+1,vector<long long>(n+1,0));
    for(int len=2;len<=n;len++)
        for(int i=1;i<=n-len+1;i++){
            int j=i+len-1; dp[i][j]=LLONG_MAX;
            for(int k=i;k<j;k++)
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+1LL*p[i-1]*p[k]*p[j]);
        }
    cout<<"Minimum scalar multiplications = "<<dp[1][n]<<"\n";
    return 0;
}
