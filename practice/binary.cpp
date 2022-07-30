#include<iostream> 
using namespace std; 
int binarySearch(int arr[], int p, int r, int key) { 
   if (p <= r) { 
      int mid = (p + r)/2; 
      if (arr[mid] == key)   
         return mid ; 
      if (arr[mid] > key)  
         return binarySearch(arr, p, mid-1, key);            
      if (arr[mid] < key)
         return binarySearch(arr, mid+1, r, key); 
   } 
   return -1; 
} 

int main(){
    int arr[50],key,n,pos;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"Enter the key"<<endl;
    cin>>key;
    pos=binarySearch(arr,0,n-1,key);
    if(pos==-1){
        cout<<"nahi mila re";
    }
    else{
        cout<<"Element found at"<<pos<<endl;
    }

}