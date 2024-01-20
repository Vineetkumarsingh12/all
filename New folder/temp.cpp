#include <bits/stdc++.h>
using namespace std;
void merge(long long strt, long long mid, long long lst, long long arr[], long long int &cnt)
{

    int size =lst+1;
    int temp[size];
    int flag = 1;
    int left=strt;
    int right=mid+1;
    int i=0;
    while (left <= mid && right <= lst)
    {if (arr[left] <= arr[right])
        {temp[i]=arr[left];
           left++;
        }
        else
        {
 if (flag)
            {cnt += (mid - left + 1);
                flag=0;
            }
            temp[i]=arr[right];
            right++;
        }
        i++;
    }
    while(left<=mid){
        temp[i]=arr[left];
        left++;
        i++;
    }
      while(right<=lst){
        temp[i]=arr[right];
        right++;
        i++;
    }
    for(int j=strt;j<=lst;j++){
        arr[j]=temp[j-strt];
    }
}


void mSort(long long strt, long long lst, long long arr[], long long int &cnt)
{
   
    if(strt==lst)
    return ;
   

        long long mid = (strt + lst) / 2;

   

        mSort(strt, mid, arr, cnt);
     
        mSort(mid + 1, lst, arr, cnt);
    
        merge(strt, mid, lst, arr, cnt);
    
}
int main()
{

    long long arr[] = {2, 4, 1, 3, 5};
    long long int cnt = 0;
    long long N = 5;

    long long strt = 0, lst = N - 1;
  
    mSort(strt, lst, arr, cnt);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
 
    cout << cnt;

    return 0;
}

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution{
//     private:

// void  mSort(long long strt,long long lst,long long arr[],long long  int &cnt){

//         while(strt<lst){

//           long long mid=(strt+lst)/2;

//             mSort(strt,mid,arr,cnt);

//              mSort(mid+1,lst,arr,cnt);

//             merge(strt,mid,lst,arr,cnt);

//         }
// }
//   public:
//     // arr[]: Input Array
//     // N : Size of the Array arr[]
//     // Function to count inversions in the array.
//     long long int inversionCount(long long arr[], long long N)
//     {
//         // Your Code Here
//         long long strt=0,lst=N-1;
//         long long int  cnt=0;

//             mSort(strt,lst,arr,cnt);

//         return cnt;
//     }

// };

// //{ Driver Code Starts.

// int main() {

//     long long T;
//     cin >> T;

//     while(T--){
//         long long N;
//         cin >> N;

//         long long A[N];
//         for(long long i = 0;i<N;i++){
//             cin >> A[i];
//         }
//         Solution obj;
//         cout << obj.inversionCount(A,N) << endl;
//     }

//     return 0;
// }

// // } Driver Code Ends
