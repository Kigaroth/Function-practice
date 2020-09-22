// Function practice.cpp //

#include <iostream>
#include <vector>
#include <string>

const double pi = 3.14;
double circle_radius = 0;
double rectangle_width = 0;
double rectangle_length = 0;
double triangle_base = 0;
double triangle_height = 0;
double square_length = 0;
int choice;


void area(int); //Square//
void area(float); //circle//
void area(double, double); //circle//
void area(int, int); //rectangle//



void area(int){
	std::cout << "Area of Square is: " << (square_length * square_length);
}

void area(float) {
	std::cout << "Area of Circle is: "  << (pi * circle_radius * circle_radius);
}

void area(double, double) {
	std::cout << "Area of Triangle is: " << (0.5) * triangle_base * triangle_height;
}

void area(int rectangle_length, int rectangle_width) {
	std::cout << "Area of Rectangle is: " << (rectangle_length * rectangle_width);
}



int main() 
{
	area();
	area(4.0, 4.0);
	area(4);
	area(6, 3);

	//std::cout << " Please select what kind of 2D figure you wish to calculate the area of: \n\t 1. Rectangle \n\t 2. Square \n\t 3. Circle \n\t 4. Triangle\n";
	//std::cin >> choice;
	//system("CLS");

	//	if (choice = 1) {
	//		std::cout << "\t Area of Rectangle";
	//		std::cout << " Please enter rectangle width: ";
	//		std::cin >> rectangle_width;

	//		std::cout << "\n Please enter rectangle length: ";
	//		std::cin >> rectangle_length;

	//		area(rectangle_length, rectangle_width);
	//	}
	//	if else (choice = 2) {
	//		std::cout << "\t Area of Square";
	//			std::cout << " Please enter square length/width: ";
	//		std::cin >> square_length;

	//		area(square_length);
	//		¨
	//	}
}


//void printScreen(int);
//void printScreen(int, int);
//void printScreen(int, double);
//void printScreen(std::string);
//void printScreen(std::vector<int>);
//
//
//void printScreen(std::string S) {
//	
//	std::cout << S;
//}
//
//void printScreen(int a, double b) {
//	
//	std::cout << a * b;
//}
//
//
//int main()
//{
//
//	printScreen("Hello what's up?");
//	printScreen(2, 3.5);
//
//
//}







//
//std::string returnString(std::string); //function//
//
//std::string returnString(std::string S) { //defining what the function does//
//    
//    std::string RS;
//    int counter = 0;
//
//        for (auto i : S) {
//            if (i == 's') {
//                RS+= i;
//                counter++;
//            }
//        }
//    return RS;
//}

//int main()
//{
//    std::string st; //string st//
//    std::getline(std::cin, st); //get string from input//
//    std::cout << returnString(st); //input string 'st' into the function, and it's outputted//
//}

