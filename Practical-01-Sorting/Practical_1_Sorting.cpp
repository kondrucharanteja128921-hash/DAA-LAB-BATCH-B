#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace chrono;

void printArray(const vector<int>& a) {
    for (int x : a) cout << x << " ";
    cout << "\n";
}

vector<int> bubbleSort(vector<int> a) {
    int n=a.size();
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
    return a;
}
vector<int> selectionSort(vector<int> a) {
    int n=a.size();
    for(int i=0;i<n-1;i++){
        int m=i;
        for(int j=i+1;j<n;j++) if(a[j]<a[m]) m=j;
        swap(a[i],a[m]);
    }
    return a;
}
vector<int> insertionSort(vector<int> a) {
    int n=a.size();
    for(int i=1;i<n;i++){
        int key=a[i],j=i-1;
        while(j>=0 && a[j]>key){a[j+1]=a[j];j--;}
        a[j+1]=key;
    }
    return a;
}
void mergeVec(vector<int>& a,int l,int m,int r){
    vector<int> t;
    int i=l,j=m+1;
    while(i<=m && j<=r) t.push_back(a[i]<a[j]?a[i++]:a[j++]);
    while(i<=m)t.push_back(a[i++]);
    while(j<=r)t.push_back(a[j++]);
    for(int k=0;k<(int)t.size();k++) a[l+k]=t[k];
}
void mergeSortRec(vector<int>& a,int l,int r){
    if(l>=r)return;
    int m=(l+r)/2;
    mergeSortRec(a,l,m); mergeSortRec(a,m+1,r); mergeVec(a,l,m,r);
}
vector<int> mergeSort(vector<int> a){ if(!a.empty()) mergeSortRec(a,0,a.size()-1); return a; }

int partitionVec(vector<int>& a,int l,int r){
    int p=a[r],i=l-1;
    for(int j=l;j<r;j++) if(a[j]<p) swap(a[++i],a[j]);
    swap(a[i+1],a[r]); return i+1;
}
void quickRec(vector<int>& a,int l,int r){
    if(l<r){int p=partitionVec(a,l,r); quickRec(a,l,p-1); quickRec(a,p+1,r);}
}
vector<int> quickSort(vector<int> a){ if(!a.empty()) quickRec(a,0,a.size()-1); return a; }

int main(){
    int n;
    cout<<"DAA Practical 1 - Sorting Algorithms\n";
    cout<<"Enter number of elements: "; cin>>n;
    vector<int>a(n);
    cout<<"Enter elements: "; for(int &x:a)cin>>x;
    cout<<"\nOriginal array: "; printArray(a);

    auto test=[&](const string& name, auto fn){
        auto st=high_resolution_clock::now();
        vector<int> r=fn(a);
        auto en=high_resolution_clock::now();
        cout<<name<<": "; printArray(r);
        cout<<"Time: "<<duration<double,micro>(en-st).count()<<" microseconds\n";
    };
    test("Bubble Sort",bubbleSort);
    test("Selection Sort",selectionSort);
    test("Insertion Sort",insertionSort);
    test("Merge Sort",mergeSort);
    test("Quick Sort",quickSort);
    return 0;
}
