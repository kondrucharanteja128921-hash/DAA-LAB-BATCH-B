#include <iostream>
using namespace std;

unsigned long long factIterative(int n){
    unsigned long long f=1;
    for(int i=2;i<=n;i++)f*=i;
    return f;
}
unsigned long long factRecursive(int n){
    if(n<=1)return 1;
    return n*factRecursive(n-1);
}
int main(){
    int n; cout<<"DAA Practical 4 - Factorial: Iterative and Recursive\n";
    cout<<"Enter a non-negative integer (0-20): ";cin>>n;
    if(n<0 || n>20){cout<<"Please enter a value from 0 to 20.\n";return 0;}
    cout<<"Iterative factorial = "<<factIterative(n)<<"\n";
    cout<<"Recursive factorial = "<<factRecursive(n)<<"\n";
    return 0;
}
