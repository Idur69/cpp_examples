
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
    // map in associative array
    map<string, int> marksMap;

    marksMap["vinay"] = 45;
    marksMap["idur"] = 86;
    marksMap["Kiran"] = 70;

    //marksMap.insert({"harry"s, 168}, {"jack", 170});
    marksMap.insert( { {"Rohan", 89}, {"Akshat", 46} } );
    //marksMap.insert({{"Kozume"s, 169.2}, {"Kuroo", 187.7}});
    map<string, int> :: iterator iter;
    
    //iter = marksMap.begin();
    // cout<<(*iter).first <<" "<<(*iter).second<<" ";
    
    for (iter=marksMap.begin();iter != marksMap.end(); iter++){
        cout<<(*iter).first <<" "<<(*iter).second<<" "<<endl;
    }
    cout<<"The size is:"<< marksMap.size()<<endl;
    cout<<"The max size is :"<< marksMap.max_size()<<endl;
    cout<<"The empty return values is : "<<marksMap.empty()<<endl;
    return 0 ;
}