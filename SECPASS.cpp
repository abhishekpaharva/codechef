#include<bits/stdc++.h>
using namespace std;

void computeLPSArray(string pat, int M, int lps[]) 
{ 
    int len = 0; 
    int i = 1; 
    lps[0] = 0;  
    while (i < M) 
    { 
        if (pat[i] == pat[len]) 
        { 
            len++; 
            lps[i] = len; 
            i++; 
        } 
        else
        { 
           if (len != 0) 
            { 
                len = lps[len-1]; 
            } 
            else
            { 
                lps[i] = len; 
                i++; 
            } 
        } 
    } 
}

int kmp(string pat, string txt) 
{ 
    int M = pat.size(); 
    int N = txt.size(); 

    int lps[M];
    int j = 0;
   	computeLPSArray(pat,M,lps); 
   
    int i = 0;  // index for txt[] 
    int res = 0;  
    int next_i = 0;   
          
    while (i < N) 
    { 
        if (pat[j] == txt[i]) 
        { 
            j++; 
            i++; 
        } 
        if (j == M) 
        { 
            j = lps[j-1]; 
            res++; 
            if (lps[j]!=0) 
            	i = ++next_i; 
            j = 0; 
        } 
   
        else if (i < N && pat[j] != txt[i]) 
        { 
            if (j != 0) 
                j = lps[j-1]; 
            else
                i = i+1; 
        } 
    } 
    return res; 
} 
   
     

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int n;
		cin>>n;
		cin>>s;
		string ans = "";
		int max = 0;
		for(int i = 0; i < s.size(); i++)
		{
			string pf = s.substr(0,i+1);
			int f = kmp(pf,s);
			// cout<<pf<<" "<<f<<"\n";
			if(max <= f)
				max = f, ans = pf;
		}
		cout<<ans<<"\n";
	}
	return 0;
}