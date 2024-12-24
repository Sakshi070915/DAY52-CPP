//WAP in C++ using class and object to calculate the area and volume of the room.
#include <iostream>
using namespace std;

// Define the class Room
class Room {
public:
    int length, width, height;

    // Method to calculate the area of the room (length * width)
    int calculateArea() {
        return length * width;
    }

    // Method to calculate the volume of the room (length * width * height)
    int calculateVolume() {
        return length * width * height;
    }
};

int main() {
    Room room; // Create an object of Room

    // Input dimensions from the user
    cout << "Enter the length of the room: ";
    cin >> room.length;
    cout << "Enter the width of the room: ";
    cin >> room.width;
    cout << "Enter the height of the room: ";
    cin >> room.height;

    // Calculate and display the area and volume
    cout << "Area of the room: " << room.calculateArea() << " square units" << endl;
    cout << "Volume of the room: " << room.calculateVolume() << " cubic units" << endl;

    return 0;
}