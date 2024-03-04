#include <bits/stdc++.h>
using namespace std;

bool strVeri(string s1,string s2){
    if(s1.length()%s2.length()!=0){
        return false;
    }
    int No_C=0;
    int No_F=0;
    int No_O=0;
    int No_K=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='C'){
            No_C++;
        }
        else if(s1[i]=='F'){
            No_F++;
        }
        else if(s1[i]=='O'){
            No_O++;
        }
        else if(s1[i]=='K'){
            No_K++;
        }
    }
    int count=s1.length()/s2.length();
    if(No_C==count && No_F==count && No_K==count && No_O==count){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        if(strVeri(s1,s2)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
