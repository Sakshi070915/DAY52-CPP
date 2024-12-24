//Create a rectangle class with attributes for length and width. 
//Include methods to set dimensions, calculate area, and display the dimensions.
#include <iostream>
using namespace std;

// Define the Rectangle class
class Rectangle {
private:
    int length, width;

public:
    // Method to set the dimensions of the rectangle
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    // Method to calculate the area of the rectangle
    int calculateArea() {
        return length * width;
    }

    // Method to display the dimensions of the rectangle
    void displayDimensions() {
        cout << "Length: " << length << " units" << endl;
        cout << "Width: " << width << " units" << endl;
    }
};

int main() {
    Rectangle rect; // Create an object of Rectangle

    int length, width;

    // Input dimensions from the user
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Set the dimensions using the setDimensions method
    rect.setDimensions(length, width);

    // Display the rectangle's dimensions
    cout << "Rectangle Dimensions: " << endl;
    rect.displayDimensions();

    // Calculate and display the area
    int area = rect.calculateArea();
    cout << "Area of the rectangle: " << area << " square units" << endl;

    return 0;
}