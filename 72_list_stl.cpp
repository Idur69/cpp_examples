// list in STL

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    //cout << "Displaying "<<endl;
    list<int> :: iterator itr;
    //itr = lst.begin();
    for (itr = lst.begin(); itr != lst.end() ; itr++){
        cout << *itr << " ";    
    
    }
    cout<<endl;
}

int main() {
    list<int> list1; // list of lenght zero
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(12);
    list1.push_back(9);
    /*
    list<int> :: iterator iter;
    iter = list1.begin();
    cout<< *iter <<" ";
    iter++;
    cout << *iter << " ";
    iter ++;
    cout << *iter << " ";
    iter ++;
    cout << *iter << " ";
    iter ++;
    cout << *iter << " " <<endl;
    */
    
    // using display function
    display(list1);

    // Reversing list
    cout<<"Reverse the list"<<endl;
    list1.reverse();
    display(list1);

    // remove element from list
    //list1.pop_back(); // it will remove last element
    //list1.pop_front(); // it will remove first element
    //list1.remove(1);
    // sorting the list
    list1.sort();
    display(list1);

    

    // another list iterator
    list<int> list2(3); // list of length 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 49;
    iter++;
    *iter = 48;
    iter++;
    *iter = 57;
    iter++;
    display(list2);

    // merge the list1 and list2
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after merging "<<endl;
    display(list1);

    return 0 ;
}