#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& a,int key){
    for(int i=0;i<(int)a.size();i++) if(a[i]==key) return i;
    return -1;
}
int binarySearch(const vector<int>& a,int key){
    int l=0,r=a.size()-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==key)return m;
        if(a[m]<key)l=m+1; else r=m-1;
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"DAA Practical 2 - Linear and Binary Search\n";
    cout<<"Enter number of sorted elements: "; cin>>n;
    vector<int>a(n);
    cout<<"Enter elements in ascending order: "; for(int &x:a)cin>>x;
    cout<<"Enter key: "; cin>>key;
    int l=linearSearch(a,key), b=binarySearch(a,key);
    cout<<"Linear Search: "<<(l==-1?"Not Found":"Found at index "+to_string(l))<<"\n";
    cout<<"Binary Search: "<<(b==-1?"Not Found":"Found at index "+to_string(b))<<"\n";
    return 0;
}
