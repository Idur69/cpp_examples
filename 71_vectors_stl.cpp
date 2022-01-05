
#include<iostream>
#include<vector>
using namespace std;
template <class T>

void display(vector<T> &v){
    cout<<"Displaying the vectors:"<<endl;
    //cout<<"V : "<<v[0];
    for(int i; i < v.size(); i++){
        cout<<v[i] << " ";
        //cout<<v.at(i);
    }
    cout<<endl;
    //cout<<"Vector size : "<<v.size();
}
int main() {
    //vector<int> vec1;  // zero lenght vector

    int  element, size=4;
    /*cout<<"Enter the size : "<<endl;
    cin>>size;
    for (int i =0; i < size; i++){
        cout<<"Enter the element : ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 566);
    display(vec1);
    */
   
    //vector<char> vec2(4);  // 4-element character vector 
    //vec2.push_back('5');
    //display(vec2);
    //vector<char> vec3(vec2); // 4-element character vector from vec2
    //display(vec3);
    vector<int> vec4(6, 4);
    display(vec4);


    

    return 0 ;
}