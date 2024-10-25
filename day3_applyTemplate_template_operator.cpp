#include <iostream>
using namespace std;

template <typename DataType>
void bubbleSort(DataType arr[], int n) {
    // Loop through all elements of the array
    for (int i = 0; i < n - 1; ++i) {
        // Last i elements are already in place, so no need to check them
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                DataType temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
template <typename DataType>
void printArray(DataType arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
class sensor{
    int _cost;
    public:
      sensor(int cost){
        this->_cost=cost;
      }
      int getCost()const {return this->_cost;}
      bool operator>(const sensor& s2) const{
          cout<<"sensor operator >invoked \n";
          return this->getCost() > s2.getCost();
      }
      friend ostream& operator<<(ostream& out, sensor sensor){
           cout<<sensor.getCost()<<endl;
          return out;
      }
};
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: \n";
    printArray<int>(arr, n);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    printArray<int>(arr, n);

    sensor s1(100);
    sensor s2(300);
    sensor s3(50);
    sensor s4(150);
    sensor sensors[4]={s3,s2,s1,s4};
    bubbleSort<sensor>(sensors,4);
    printArray<sensor>(sensors,4);
    
    return 0;
}