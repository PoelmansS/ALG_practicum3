#include <iostream>
#include <vector>
using namespace std;

//Function to print out all the products in a vector
void printProducts(vector<string> products) {
	for (int i = 0; i < products.size(); i++) { cout << products.at(i) << ", "; }
}

//Function to print out the vectors in a vector
void printCycle(vector<vector<string>> cycle) {
	for (int i = 0; i < cycle.size(); i++) 
	{ 
		cout << '\t' << "Cycle " << i + 1 << ": " ;
		printProducts(cycle.at(i));
		cout << '\n';
	}
}

//Function to print out the entire output schedule
void printSchedule(vector<string> products, vector<vector<string>> cycles) {
	cout << "Schedule 1:\n" << "Product list: ";
	printProducts(products);
	cout << "\n\n";
	cout << "Required production cycles : " << cycles.size() << "\n";
	printCycle(cycles);
}

void testPrint() {
	vector<string> products;
	products.push_back("X1007");
	products.push_back("X3137");
	products.push_back("W3157");
	products.push_back("W3203");
	products.push_back("R3261");
	products.push_back("R4115");
	vector<vector<string>> cycles;
	vector<string> cycle1;
	vector<string> cycle2;
	vector<string> cycle3;
	cycle1.push_back("X1007");
	cycle1.push_back("X3137");
	cycle1.push_back("X3137");
	cycle1.push_back("W3157");

	cycle2.push_back("R3261");
	cycle2.push_back("R4115");
	cycle2.push_back("X1007");

	cycle3.push_back("R4115");
	cycle3.push_back("R4118");

	cycles.push_back(cycle1);
	cycles.push_back(cycle2);
	cycles.push_back(cycle3);
	printSchedule(products, cycles);
}

int main()
{
	testPrint();

	//Read the file
	//Filter out the string "Products" and all the commas and spaces
	//
	//Filter out "Manufacturing compatibility:" and save all the compatibility pairs
	//write a function to group together the most amount of compatible products
	//Repeat this till all products have been 'produced'
	//Print out all the products and the production cycles							 Done
	 
	//ToDo

}
