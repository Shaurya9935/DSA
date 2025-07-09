#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    for (int i = 0; i<=(n-2); i++)
    {
        int mini = i;
        for (int j = i; j<=(n-1); j++)
        {
            if(arr[j]<arr[mini]) 
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini]= arr[i];
        arr[i] = temp;
        
    }
    
}
void bubble_sort(int arr[],int n)
{
    for (int i = n-1; i >=1; i--)
    {
        int didswap =0;
        for (int j = 0; j <=i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap = 1;
            }
            
        }
        if (didswap == 0)
        {
            break;
        }
        cout<<"runs"<<endl;
    }
    
}
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <=n-1; i++)
    {
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1]= arr[j];
            arr[j] = temp;
            j--;
        }
        
    }
    
}
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid +1;
    while (left<=mid && right<= high)
    {
        if (arr[left]<arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
        
    }
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <=high; i++)
    {
        arr[i]= temp[i-low];
    }
    

}
void merge_sort(vector<int> &arr, int low, int high)
{
    if(low == high) return;
    int mid = (low +high)/2 ;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
}
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }merge_sort(arr,0, n-1);
    cout<<endl<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
        
        
    }
    
}