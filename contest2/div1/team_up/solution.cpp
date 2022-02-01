//Professor wants to find out teammate for each person
#include<bits/stdc++.h>
using namespace std;


//to find each person's teammate
int solve(int i,vector<int>&  height){
    int found=-1;//if no left persons are lesser than current it will be -1
    for(int j=i-1;j>=0;j--){//checking from current person to left most person that any of them is less than current person
        if(height[j]<height[i]){//if yes break it and print index 
            found=j;
            break;
        }
    }
    return found;
}

int main(){
    int t;
    cin>>t;//test cases input
    while(t-->0){
        int n;
        cin>>n;//number of people input
        vector<int>  height(n);
        for(int i=0;i<n;i++) cin>>height[i];//heights input

        for(int i=0;i<n;i++){
            cout<<solve(i,height)<<" ";//printing the ouputs
        }
        cout<<endl;
    }
}

