#include <bits/stdc++.h>

int main(){
    int t;
    cin>>t;//test cases input
    while(t-->0){
        int n;
        cin>>n;//number of people input
        vector<int>  arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];//heights input
        cout<<-1<<" ";//for the first person,there are no left so always be -1
        for(int i=1;i<n;i++){
            int found=-1;//if no left persons are lesser than current it will be -1
            for(int j=i-1;j>=0;j--){//checking from current person to left most person that any of them is less than current person
                if(arr[j]<arr[i]){//if yes break it and print index 
                    found=j;
                    break;
                }
            }
            cout<<found<<" ";//printing the ouputs
        }
        cout<<endl;
    }
}
