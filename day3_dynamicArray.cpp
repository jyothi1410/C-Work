class DynamicArray{
      private:
           int capacity=5;
           int index;
           int items[5];
           void resize(){}
      public: /* default interface */
            void clear(){}
            void add(int data){

            }
            int getataFromIndex(int index){}
            void reverse(){}
            void sort(){}
};

class UserDetailsArray{
      private:
           int heartRateCapacity;
           int BPCapacity;
           int oxyCapacity;
           int glucoseCapacity;
           int index;
      public: /* default interface */
            void clearUserDetails(){}
            void addUserDetails(int data()){}
            int getUserDetailsFromIndex(int index){}
            void getHeartRateVitalSensor(){}
            void getOxyVitalSensor(){}
            void getGlucoseVitalSensor(){}
            void getBPNotification(){}
            void getHeartRateNotification(){}
};

//blueprint, user defined data type, abstract entity without values, classification of real world entity class dynamicArray


class DynamicArray{

   private:
		
		int index=-1;
		int items[5];
		void rezise(){}
		
  public : /* Default Interface */
		void clear(){}
		void add(int data){
		this->index++;
		this->items[index]=data;
		}
		int getDataFromIndex(int index){
			return this->items[index];
		}
		void reverse(){}
		void sort(){}
		~DynamicArray(){
		}
		
};
void loadData(DynamicArray instance){
		instance.add(10);
		instance.add(20);
		instance.add(30);
}

void instantiate(){
	DynamicArray instance1;//instance
	loadData(instance1);
	cout<<instance1.getDataFromIndex(2)<<endl;

}
int main(){
	int x=10;
	instantiate()
	return 0;
}




//Responsibilities
//Blueprint, User Defined DataType, Abstarct Entity without values,Classification of Reald world Entity
class DynamicArray{
private:
		
		int index;
		int count;
		int items[5];
		void rezise(){}
		
  public : /* Default Interface */
  
        /*Default Constructor*/
        DynamicArray(){
           this-> index=-1;
            this->count=0;
        }
        DynamicArray(int iniatilCapacity){
            
        }
		void clear(){
		    
		}
		void add(int data){
		this->index++;
		this->items[index]=data;
		this->count++;
		}
		int getDataFromIndex(int index) const{
			return this->items[index];
		}
		void reverse(){}
		void sort(){}
		int getCount() const{
		    return this->count;
		}
		~DynamicArray(){
		    cout<<"Dynamice Array destructed"<<endl;
		}
		
};
void loadData(DynamicArray& instance){
		instance.add(10);
		instance.add(20);
		instance.add(30);
		instance.add(40);
		instance.add(50);
		instance.add(60);
		instance.add(70);
		instance.add(80);
		instance.add(90);
}

void instantiate(){
	DynamicArray instance1;//instance
	loadData(instance1);
	cout<<instance1.getCount()<< ":"<<instance1.getDataFromIndex(7)<<endl;

}
int main(){
	int x=10;
	instantiate();
	return 0;
}



