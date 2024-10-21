#include <iostream>
#include <string>
#include <vector>
//procedurely
int main() {
    // Create an array of cities
    std::string cities[4] = {"New York", "Los Angeles", "Chicago", "New Jersey"};

    // Create a vector to hold cities that start with "New"
    std::vector<std::string> newCities;

    // Loop through the array and check each city
    for (const auto& city : cities) {
        // Check if the city starts with "New"
        if ( !city.empty() && city.substr(0, 3) == "New") {
            newCities.push_back(city);
        }
    }

    // Print the cities that start with "New"
    std::cout << "Cities that start with 'New':" << std::endl;
    for (const auto& newCity : newCities) {
        std::cout << newCity << std::endl;
    }

    return 0;
}
