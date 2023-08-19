#include <iostream>
#include <list>

using namespace std;

void createList(list<int> &list1){
    list<int> :: iterator it;
    
    for(it = list1.begin(); it != list1.end(); it++){
        cin>>*it;

    }

    
}

    void display(list<int> &list1){
        list<int> :: iterator iter;
        iter = list1.begin();
        cout<<"Your list looks like->>"<<endl<<endl;

        for(iter; iter != list1.end(); iter++){
            cout<<*iter<<" ";
        }
        cout<<endl;

}
    

int main(){
    list<int> lst1(7);
    cout<<"Enter the element in your list1::"<<endl;
    createList(lst1);
    display(lst1);

    list<int> lst2(7);
    cout<<"Enter the element in your list2::"<<endl;
    createList(lst2);
    display(lst2);

    // lst1.sort();        //used to sort the list
    // lst2.sort();


    // lst1.merge(lst2);     // it will merge all the lst2 elements in the lst1 

    // cout<<"List 1 after merging"<<endl;
    // display(lst1);

    // lst1.reverse();      // used to reverse the list
     display(lst1);

    lst1.swap(lst2);     // used to swap all the elements of one list with another list
    display(lst1);







    


     
//    lst.push_back()       used to enter the element 
//    lst.push_front()      used to enter from front
//    lst.pop_back()        use to delete element from back
//    lst.pop_front()       use to delete from front

//    lst.remove(8)         use to remove some specific value in this case it is 8

}

