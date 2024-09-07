#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
        v.push_back(s);
            
    }
    for(int i=0;i<v.size();i++){
        string si = v[i];
        vector<string> v1;
        string substring = "";
        int count = 0;
        for(int k=3;k<si.size();k++){
             
            if(si[k]=='|'){
                if(!substring.empty()){
                    v1.push_back(substring);
                    substring.clear();
                }
            }
                else{
                    substring+=si[k];
                }
                count++;
        }
        for(int p=count+3;p<si.size();p++){
            substring+=si[p];
        }
        v1.push_back(substring);

        
        for(int i=0;i<v1.size();i++){
            // cout<<v1[i]<<" ";
        }
        cout<<endl;
        vector<string> v2,v3;
        for(int l=0;l<v1.size();l++){
            string temp;
            temp = v1[l];
            if(temp[0] != si[0]){
                v2.push_back(temp);
            }
            else{
                v3.push_back(temp);
            }
        }
        for(int i=0;i<v2.size();i++){
            // cout<<v2[i]<<" ";
        }
        for(int i=0;i<v2.size();i++){
            cout<<si[0]<<" "<<"->"<<" "<<v2[i]<<si[0]<<"`";
            
        }
        
        string ans="";
        for(int i=0;i<v3.size();i++){
            string a="";
            string t;
            t = v3[i];
            for(int i=1;i<t.size();i++){

                a = a+ t[i];

            }
            ans = ans + a + si[0] +"`"+" "+"|"+" ";

            
        }
        cout<<endl;
        cout<<si[0]<<"`"<<" "<<"->"<<" "<<ans<<"#";

        cout<<endl;

    }
    
}

