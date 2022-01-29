#include <bits/stdc++.h>

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>  arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int i=0,j=n-1;
        int maxArea=INT_MIN;
        while(i<j){
            if(arr[i]<arr[j]){
                maxArea=max(maxArea,(j-i)*arr[i]);
                i++;
            }else if(arr[i]>arr[j]){
                maxArea=max(maxArea,(j-i)*arr[j]);
                j--;
            }else{
                maxArea=max(maxArea,(j-i)*arr[i]);
                i++;j--;
            }
        }
        cout<<maxArea<<endl;
    }
}
