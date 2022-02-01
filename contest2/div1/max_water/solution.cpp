//which two sticks will make pair to collect maximum volume of water
#include<bits/stdc++.h>
using namespace std;

//to calculatate max area collected by a pair of sticks
int solve(vector<int> height){
        int n=height.size();
        int i=0,j=n-1;
        int maxArea=INT_MIN;
        while(i<j){
            if(height[i]<height[j]){//when this occurs,ith stick being smaller wants to give maximum area by pairing with farest stick so it will pairup with jth
                maxArea=max(maxArea,(j-i)*height[i]);
                i++;//there is no way this ith stick give max area with other than pairing with this jth stick so we can eliminate ith stick
            }else if(height[i]>height[j]){//when this occurs,jth stick being smaller wants to give maximum area by pairing with farest stick so it will pairup with ith
                maxArea=max(maxArea,(j-i)*height[j]);
                j--;//there is no way this jth stick give max area with other than pairing with this ith stick so we can eliminate jth stick
            }else{//when both stick are same legnth
                maxArea=max(maxArea,(j-i)*height[i]);
                i++;j--;//here mutually both stick helps each other forming max area //there is no way that both sticks give max area with other than pairing with others so we can eliminate both sticks
            }
        }
        return maxArea;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>  height(n);
        for(int i=0;i<n;i++) cin>>height[i];
        
        cout<<solve(height)<<endl;
    }
}
