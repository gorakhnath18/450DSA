 #include<iostream>
 using namespace std;
 void reverse (int arr[],int n){
     int start=0;
     int end= n-1;
          while(start<=end){
              swap(arr[start],arr[end]);
              start++;
              end--;
          }
     
 }
 void print(int arr[],int n){
     for(int i=1;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
 }
 int main(){
     int arr[10]={1,2,3,4,6,7,8,9,10};
     reverse(arr, 10);
     print(arr,10);
      return 0;
 }
 /*
 coding ninja
 void reverseArray(vector<int> &arr , int m) {
    // Write your code here       	
    int s=m+1;
    int e=arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
 */
/*
hackearth

  #include<iostream> 
#include<vector> 
using namespace std; 
void printArray(int arr[], int n) {     
	for(int i = 0; i<n; i++)     {         
		cout<<arr[i]<<endl;     
		}
		 } 
		 void reverse(int arr[], int n) {     
			int start = 0;    
			 int end = n - 1;
			 while(start <= end)     {   
				      swap(arr[start], arr[end]);     
					      start++;         
						  end--;    
						   }    
	 printArray(arr, n); 
	 } 
	 int main() {    
		 int n;    
		  cin>>n;    
		   int arr[n];   
		     for(int i = 0; i<n; i++)     {     
				    cin>>arr[i];   
					  }     
					  reverse(arr, n); }
 

 
*/