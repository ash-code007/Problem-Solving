#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int flag=0;int count =0;
    cout<<"Enter the string : ";
    getline(cin,str);
    int arr[256]={0};

    for(int i=0;i<str.length();i++)
    {
        arr[int(str[i])]++;
    }
    
    for(int i=0;i<256;i++)
    {
        if(arr[i]%2!=0)
            count++;
        if(count >1)
            cout<<"no"<<endl;return 1;
    }
        cout<<"Yes"<<endl;
        
  return 0;
}

