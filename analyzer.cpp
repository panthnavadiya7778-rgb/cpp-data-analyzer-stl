#include <iostream>
#include <vector>
#include <map>
#include<algorithm>
using namespace std;
void inputdata(vector<int> &v){
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
void displaydata(vector<int> &v){
    for(auto x:v){
        cout<<x<<endl;
        
    }
}
void frequencycount(vector<int>&v , map<int, int> &m){
    for(auto x: v){
        m[x]++;
    }
}
void displayfrequency(map<int , int> &m){
    cout<<"\n frequency analysis is as followed \n"<<endl;
    for(auto it : m){
        cout<<it.first<<"-> "<<it.second<<endl;
    }
}
void mostfrequent( map<int , int> &m){
    int maxfrq = 0;
    int element = 0;
    for (auto it : m){
        if(it.second>maxfrq){
            maxfrq=it.second;
            element = it.first;

        }
    }
cout<<"the most frequent element is \n";
cout<<element<<" which appears "<<maxfrq<<" times"<<endl;
}   
void sortbyfrequency(vector<int> &v , map<int , int> &m){
    vector<pair<int , int >> k;
    for(auto it : m){
      k.push_back({it.first , it.second}) ; 
    }
 sort(k.begin() , k.end() ,[](pair<int , int> a , pair<int , int>b){
    return a.second>b.second;
 } );
 cout<<"after sorting"<<endl;
 for(auto it : k){
    cout<<it.first<<" -> "<<it.second<<endl;
 }
}
int main(){
 vector<int> v;
 map<int , int > m;
 inputdata(v);
 displaydata(v);
 
 frequencycount( v , m);
 displayfrequency(m);

 sortbyfrequency(v , m);
 mostfrequent(m);
 return 0;
}