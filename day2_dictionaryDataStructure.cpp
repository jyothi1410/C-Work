int main(){
  Dictionary<int,string> deviceCodeMap(2);
  deviceCodeMap.add(1,"D1");
  deviceCodeMap.add(2,"D2");
  deviceCodeMap.add(3,"D3");
  deviceCodeMap.add(4,"D4");

  string deviceName=deviceCodeMap[2];
  cout<<deviceName<<endl;//output:D2

  //Dump All the items from deviceCodeMap
  cout<<deviceCodeMap;
   /*
    output
   Key : Value
   1 : D1
   2 : D2
   3 : D3
   4 : D4
*/ 


}



-------------------
#include <iostream>
#include <vector>
using namespace std;
#include <stdexcept>

template <typename K, typename V>
class Dictionary {
private:
    vector<pair<K, V>> items;

public:
    // Constructor with initial capacity
    Dictionary(size_t initialSize = 0) {
        items.reserve(initialSize);
    }

    // Add a key-value pair
    void add(const K& key, const V& value) {
        items.push_back(make_pair(key, value));
    }

    // Overload the [] operator to get the value for a key
    V operator[](const K& key) {
        for (const auto& item : items) {
            if (item.first == key) {
                return item.second;
            }
        }
        throw out_of_range("Key not found");   //out_of_range - don't use it will kill the stack flow  
    }

    // Overload the << operator for printing the dictionary
    friend ostream& operator<<(ostream& os, const Dictionary<K, V>& dict) {
        os << "Key : Value\n";
        for (const auto& item : dict.items) {
            os << item.first << " : " << item.second << endl;
        }
        return os;
    }
};

int main() {
    Dictionary<int, string> deviceCodeMap(2);
    deviceCodeMap.add(1, "D1");
    deviceCodeMap.add(2, "D2");
    deviceCodeMap.add(3, "D3");
    deviceCodeMap.add(4, "D4");
    try {
        // Try to access the value with key 2
        string deviceName = deviceCodeMap[2];
        cout << "Device name for key 2: " << deviceName << endl; // Output: D2
    } catch (const out_of_range& e) {
        // Catch the out_of_range exception
        cout << "Error: " << e.what() << endl;
    }
    // Dump all the items from deviceCodeMap
    cout << deviceCodeMap;

    /*
    output
    Key : Value
    1 : D1
    2 : D2
    3 : D3
    4 : D4
    */

    return 0;
}
------------
// #include <iostream>
// #include <vector>
// using namespace std;

// class keyValuePair{
//     private:
//     string _key,_valuel
//     public:
//     keyValuePair(string key,string value):_key{key},_value{value}{
        
//     }
//     string getKey(){return _key;};
//     string getValue(){return _value;}
// }
// class dictionary{
//     private:
//     vector<keyValuePair*> pairs;
// }
// int main() {
    
    
//     /*output
//     Key : Value
//     1 : D1
//     2 : D2
//     3 : D3
//     4 : D4
//     */
//     return 0;
// }


key value pair 
assignment - it should be compile. use vector,template and not use matrix, multi dimensional array