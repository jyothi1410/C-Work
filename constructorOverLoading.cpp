// function over loading/poly marphisum/static binding/
class OnlineTicket
{
private:
	string _name, _source, _destination, _mealType;
	int _preference, _age;
	bool _insured;
	OnlineTicket()
	{
		this->_name = "";
		this->_age = 4;
		this->_source = "";
		this->_destination = "";
		this->_mealType = "Veg";
		this->_preference = 0;
		this->_insured = true;
	}

public:
	OnlineTicket(string name, int age, string source, string destination)
	{
		this->_name = name;
		this->_age = age;
		this->_source = source;
		this->_destination = destination;
	}
	OnlineTicket(string name, int age, string source, string destination, string mealTye)
	{
		this->_name = name;
		this->_age = age;
		this->_source = source;
		this->_destination = destination;
		this->_mealType = mealTye;
	}
	OnlineTicket(string name, int age, string source, string destination, bool insured)
	{
		this->_name = name;
		this->_age = age;
		this->_source = source;
		this->_destination = destination;
		this->_insured = insured;
	}
	OnlineTicket(string name, int age, string source, string destination, int preference)
	{
		this->_name = name;
		this->_age = age;
		this->_source = source;
		this->_destination = destination;
		this->_preference = preference;
	}
	OnlineTicket(string name, int age, string source, string destination, string mealTye, int preference)
	{
		this->_name = name;
		this->_age = age;
		this->_source = source;
		this->_destination = destination;
		this->_mealType = mealTye;
		this->_preference = preference;
	}
	OnlineTicket(string name, int age, string source, string destination, string mealTye, int preference, bool insured)
	{
		this->_name = name;
		this->_age = age;
		this->_source = source;
		this->_destination = destination;
		this->_mealType = mealTye;
		this->_preference = preference;
		this->_insured = insured;
	}
	void displayTicket()
    {
        cout << "Name: " << _name << endl;
        cout << "Age: " << _age << endl;
        cout << "Source: " << _source << endl;
        cout << "Destination: " << _destination << endl;
        cout << "Meal Type: " << _mealType << endl;
        cout << "Seat Preference: " << _preference << endl;
        cout << "Insured: " << (_insured ? "Yes" : "No") << endl;
    }
	
};
// Main function
int main()
{
    // Create an instance of OnlineTicket using different constructors
    OnlineTicket ticket1("John Doe", 28, "New York", "Los Angeles");
    OnlineTicket ticket2("Jane Doe", 35, "Chicago", "Miami", "Non-Veg");
    OnlineTicket ticket3("Sam Smith", 40, "San Francisco", "Houston", 2);
    OnlineTicket ticket4("Emily Clark", 22, "Seattle", "Boston", "Veg", 1, true);

    // Display ticket details
    cout << "Ticket 1 Details:" << endl;
    ticket1.displayTicket();

    cout << "\nTicket 2 Details:" << endl;
    ticket2.displayTicket();

    cout << "\nTicket 3 Details:" << endl;
    ticket3.displayTicket();

    cout << "\nTicket 4 Details:" << endl;
    ticket4.displayTicket();

    return 0;
}

// delegating constructor calls
// OnlineTicket(string name, int age, string source, string destination, string mealType) : OnlineTicket::OnlineTicket(_name, _age, __source, _destination)
// {
// 	this->_mealType = mealType;
// }
