// Author: Yash Lalchandani(QY)
// Connect on : WhatsApp Link: https://bit.ly/3RVznxY
// Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
// Connect on : Instagram Link: https://bit.ly/46I0kcl
// Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
// Date: October 10, 2023
// Description: This is a simple C++ program.

#include <iostream>
using namespace std;
 
int maxSum(int arr[], int n, int k)
{
    if (n < k)
    {
       cout << "Invalid";
       return -1;
    }
 
    int res = 0;
    for (int i=0; i<k; i++)
       res += arr[i];

    int curr_sum = res;
    for (int i=k; i<n; i++)
    {
       curr_sum += arr[i] - arr[i-k];
       res = max(res, curr_sum);
    }
 
    return res;
}
  
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;
    int arr[n];
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='B') arr[i]=1;
        else arr[i]=0;
    }
    cout <<k - maxSum(arr, n, k)<<endl;
    }
    return 0;
}