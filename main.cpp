#include<bits/stdc++.h>
using namespace std;

map<char,vector<string>> categroized(vector<string>&maparr){
    map<char,vector<string>>similar_char;
    
    for(auto it:maparr){
        
         int ele=it[0];
         similar_char[ele].push_back(it);
    }
    
    return similar_char;
}

int main(){
    
    vector<string>arr={"Ajay", "Nitish","Abhay","Ram","Ranjit","Rohan","Nirbhay","Nisha","Mohini","Kamini","Pushpa","Phulkumari"};
    
  map<char,vector<string>>maparr=  categroized(arr);
  
  for(auto it:maparr){
      cout<<it.first<<" ";
      for(auto ele:it.second){
          cout<<ele<<" ";
      }
      cout<<"\n";
  }
    
}