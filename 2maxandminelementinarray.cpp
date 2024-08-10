/*
geeks for geeks
// User function Template for C++
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        long long int mini=INT_MAX;
        long long int  maxi=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        return {mini,maxi};
        
    }
};
*/
 #include<iostream>
using namespace std;
 int getmax(int arr[],int n){
    int max= INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;

 }
 int getmin(int arr[],int n){
    int min = INT16_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;

 }
 int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    cout<<"maximum :  "<<getmax(arr,size)<<endl;
    cout<<"minimum :  "<<getmin(arr,size)<<endl;
  //  int ans = getmax(arr,size)-getmin(arr,size);
   // cout<<ans;
    return 0;

 }