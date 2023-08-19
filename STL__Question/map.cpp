#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    map<string,int> marksMap;   /* we use two data types in map becuz it is used to store the elements
                                  as key value in pairs (in this we have pair of string and int) . each 
                                  elements have unique key value.
                                */
    marksMap["kaku"] = 8;
    marksMap["Harry"] = 65;
    marksMap["Aman"] = 98;
    marksMap["golu"] = 45;
    marksMap["ramu"] = 23;

    marksMap.insert({"Kala",74});        // used to insert the pair of element in the map

    map<string,int> :: iterator iter;

    for(iter = marksMap.begin(); iter != marksMap.end(); iter++){

        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }


}
