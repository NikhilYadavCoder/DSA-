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
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        vector<string> v2;
        for(int i=0;i<v1.size();i++){
            string temp = v1[i];
            int count =0;
            string sub="";
           
            for(int k=0;k<temp.size();k++){
                for(int j=k;j<temp.size();j++){
                if(temp[k] == v1[i][j]){
                    count++;
                }
                if(count == v1.size()-1){
                    sub = sub + temp[k];
                    v2.push_back(sub);

                }
            
            }
            sub.clear();

            }
        }
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
        
        

    }



}