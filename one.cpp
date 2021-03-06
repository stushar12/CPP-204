#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test;
    cin>>test;
    
    while(test--)
    {
        string s;
        cin>>s;
        
        int n=s.length();
        int flag=0,count1=0;
        
        for(int i=0;i<n;i++)
        {
         if(s[i]=='1')
            {
                count1++;
            }
        }
        int pos=s.find("1");
        
        for(int i=pos;s[i]!='0';i++)
        {
           flag++;
           if(i==n-1)
           {
                break;
            }
        }
         
        
        if(flag!=count1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        
        
    }
	
}
