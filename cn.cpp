// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout<<"Enter the string at sender side:";
//     string s,r;
//     cin>>s;
//     int count = 0;
//     for(int i=0;i<s.size();i++){
//         if(s[i] == '1'){
//             count++;
//         }
//     }
//     if(count%2 == 0){
//         s = s + "0";
//     }
//     else{
//         s = s + "1";

//     }
//     cout<<"Enter the string at receiver side:";
//     cin>>r;
//     int cnt = 0;
//     for(int i=0;i<r.size();i++){
//         if(r[i] == '1'){
//             cnt++;
//         }
//     }
//     if(cnt%2 == 0){
//         cout<<"No Error";
//     }
//     else{
//         cout<<"Error";

//     }
// }





//2

#include<bits/stdc++.h>
using namespace std;
int main() {
    string input,rec;
    cout << "Enter the string at sender side:";
    cin >> input;
    vector<string> v;
    vector<string> v1,v2,v3;
    
    
    if (input.empty()) {
        cout << "Input string is empty." << endl;
        return 1;
    }
    int length = input.length();
    for (int i = 0; i < length; i += 8) {
        string substring = input.substr(i, 8);
        v.push_back(substring);
    }
    
    for(int i=0;i<v.size();i++){
        string s = v[i];
        int count = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '1'){
            count++;
        }
    }
    if(count%2 == 0){
        v2.push_back("0");
    }
    else{

        v2.push_back("1");
    }
    }

    for (size_t i = 0; i < v[0].size(); ++i) {
        char xorResult = '0';
        for (size_t j = 0; j < v.size(); ++j) {
            xorResult ^= v[j][i];
        }
        v1.push_back(string(1, xorResult));
    }
    for(int i=0;i<v.size();i++){
        string temp = v[i];
        for(int j=0;j<v2.size();j++){
            if(i==j){
                string ad = v2[j];
                temp = temp + ad;
                v3.push_back(temp);
            }
        }
    }
    string st = v2[0];
    char xor1 = st[0];
    for(int j=1;j<st.size();j++){
        xor1 = xor1 ^ st[j];
    }
    
   
    cout << "XOR results: "<<endl;
    cout<<"Column Parities:"<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i];
        // if(i == v1.size()-1){
        //     cout<<v1[i] + xor1;

        // }
    }
    cout<<endl;
    cout<<"Row Parities:"<<endl;
    for(int j=1;j<v2.size();j++){
        cout<<v2[j]<<" ";
    }
    cout<<endl;
    cout<<"Data to be sent:"<<endl;
     for (const string& result : v3) {
        cout << result<<" ";
    }
     for(int i=0;i<v1.size();i++){
        cout<<v1[i];
        // if(i == v1.size()-1){
        //     cout<<v1[i] + xor1;

        // }
    }
    cout<<xor1;
    cout<<endl;
    cout<<"Enter the string at receiver side:";
    cin>>rec;
     int cnt = 0;
    for(int i=0;i<rec.size();i++){
        if(rec[i] == '1'){
            cnt++;
        }
    }
    if(cnt%2 == 0){
        cout<<"No Error";
    }
    else{
        cout<<"Error";

    }




    cout<<endl;
    return 0;
}

//     v.push_back("10011001");
//     v.push_back("11100010");
//     v.push_back("00100100");
//     v.push_back("10000100");

// #include<bits/stdc++.h> 
// using namespace std; 
// string addbits(string a,string b){ 
//     string carry="0"; 
//     string result; 
//     for(int i=a.length()-1;i>=0;i--){ 
//         if(carry=="0"){ 
//             if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0')){ 
//                 result="1"+result; 
//             } 
//             else if(a[i]=='0' && b[i]=='0'){ 
//                 result="0"+result; 
//             } 
//             else{ 
//                 result="0"+result; 
//                 carry="1"; 
//             } 
//         } 
//         else{ 
//             if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0')){ 
//                 result="0"+result; 
//             } 
//             else if(a[i]=='0' && b[i]=='0'){ 
//                 result="1"+result; 
//                 carry="0"; 
//             } 
//             else{ 
//                 result="1"+result; 
//             } 
//         } 
//     } 
//     if(carry=="1"){ 
//         for(int i=0;i<7;i++){ 
//             carry="0"+carry; 
//         } 
//         result=addbits(result,carry); 
//     } 
//     return result; 
// } 
// int main(){ 
//     string sdata; 
// cin>>sdata; 
//     vector<string> senderdata; 
//     for(int i=0;i<sdata.length();i+=8){ 
//         senderdata.push_back(sdata.substr(i,8)); 
//     } 
//     string checksum=senderdata[0]; 
//     for(int i=1;i<senderdata.size();i++){ 
//         checksum=addbits(checksum,senderdata[i]); 
//     } 
//     string checksumcomp=""; 
//     for(char i : checksum){ 
//         if(i=='0') checksumcomp+="1"; 
//         else checksumcomp+="0"; 
//     } 
//     cout<<"checksum:"<<checksumcomp<<endl; 
 
//     //receiver 
//     string rdata; 
//     cin>>rdata; 
//     vector<string> receiverdata; 
//     for(int i=0;i<rdata.length();i+=8){ 
//         receiverdata.push_back(rdata.substr(i,8)); 
//     } 
//     string checksumr=receiverdata[0]; 
//     for(int i=1;i<receiverdata.size();i++){ 
//         checksumr=addbits(checksumr,receiverdata[i]); 
//     } 
//     string finaldata=addbits(checksumr,checksumcomp); 
//     string z="00000000"; 
//     string finalcomp=""; 
//     for(char i : finaldata){ 
//         if(i=='1')finalcomp+="0"; 
//         else finalcomp+="1"; 
//     } 
//     if(finalcomp==z){ 
//         cout<<"Accepted"; 
//     } 
//     else{ 
//         cout<<"Not Accepted"; 
//     } 
//     return 0; 
// }
