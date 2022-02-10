#include<iostream>

 using namespace std;

//1. Checking if an array is sorted or not
/*
bool sorted(int arr[] , int n)
{
    if(n ==1)
    {
        return true;
    }
    bool restArray = sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restArray ); 
}
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8};
    cout << sorted(arr,8)<<endl;
    return 0;
}
*/

//2. Find the first and last occurence of a number in an array
/*
int firstocc(int arr[], int n, int i, int key)
{
    if(i==n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[], int n, int i, int key)
{
    if(i==n){
        return -1;
    }
    int restArray = lastocc(arr,n,i+1,key);
    if(restArray != -1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
    
}


int main()
{
    int arr[] = {4,4,1,2,5,6,7,2,5};
    cout << firstocc(arr,9,0,2) << endl;
    cout << lastocc(arr,9,0,2) << endl;
    return 0;
}

*/


//Reverse a string using recursion
/*
void reverse(string s)
{
    if(s.length()==0){
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0]<<endl;
}
int main()
{
    reverse("Binod");
    return 0;
}
*/
 