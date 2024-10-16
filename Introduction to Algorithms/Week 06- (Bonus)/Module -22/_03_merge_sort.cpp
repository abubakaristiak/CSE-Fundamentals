#include<bits/stdc++.h>
using namespace std;
void merge(int ar[], int l, int m, int r){
    int leftSize = m-l+1;
    int rightSize = r-m;
    int L[leftSize], R[rightSize];
    int k=0;
    for(int i=l; i<=m; i++){
        L[k]=ar[i];
        k++;
    }
    k=0;
    for(int i=m+1; i<=r; i++){
        R[k]=ar[i];
        k++;
    }
    int i=0,j=0;
    int cur=l;
    while (i<leftSize && j<rightSize)
    {
        if(L[i] <= R[j]){
            ar[cur]=L[i];
            i++;
        }
        else{
            ar[cur]=R[j];
            j++;
        }
        cur++;
    }
    while(i<leftSize){
        ar[cur]=L[i];
        i++;
        cur++;
    }
    while (j<rightSize)
    {
        ar[cur]=R[j];
        j++;
        cur++;
    }  
}


void merge_sort(int ar[], int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        merge_sort(ar,l,mid);
        merge_sort(ar,mid+1,r);
        merge(ar,l,mid,r);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>> ar[i];
    }
    merge_sort(ar,0,n-1);
    for(int i=0; i<n; i++){
        cout<< ar[i] << " ";
    }
    return 0;
}



/*
input:
8
5 20 45 30 25 10 28 40
*/