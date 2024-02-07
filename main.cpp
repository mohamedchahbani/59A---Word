#include<bits/stdc++.h>
using namespace std;

int main(){
    string ch;
    cin >>ch;
    int i,lower=ch.length() ,upper=0;
    for(i=0;ch[i];i++){
        if ((ch[i]<='Z')&&(ch[i]>='A'))
        {
            upper++;
        }
        
    }
    lower=lower-upper;
    if(lower>=upper){
        transform(ch.begin(),ch.end(),ch.begin(), ::tolower);
    }else
    {
        transform(ch.begin(),ch.end(),ch.begin(), ::toupper);
    }
    cout<<ch;
    return 0;
}