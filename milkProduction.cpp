/*
 This program prompts the user to enter the total, in liters, of milk produced in the morning, then computes and outputs the number of milk cartons needed, the cost of producing the milk, and the profit for producing the milk.
 */

#include <iostream> //Statement for iostream

using namespace std;

//Set up constant variables for the program
const double CARTON_CAPACITY = 3.78;
const double COST_OF_ONE_LITER = 0.38;
const double PROFIT_ON_A_CARTON = 0.27;

int main() //Starts a main for the program
{
    //Declare variables for program calculations
    double milkQuantity;
    int noOfMilkCartons;
    double totalCostOfMilk;
    double profit;
    
    //Prompt user for input and assign to milkQuantity variable
    cout << "Enter, in liters, the total quantity of milk produced: ";
    cin >> milkQuantity;
    cout << endl;
    
    //Perform calculations and assign to corresponding variables
    noOfMilkCartons = static_cast<int>(milkQuantity / CARTON_CAPACITY + 0.5);
    totalCostOfMilk = milkQuantity * COST_OF_ONE_LITER;
    profit = noOfMilkCartons * PROFIT_ON_A_CARTON;
    
    //Output results of calculations
    cout << "The number of milk cartons needed to hold milk: " << noOfMilkCartons << endl;
    cout << "The cost of producing milk: $" << totalCostOfMilk << endl;
    cout << "Profit: $" << profit << endl;
    
    return 0; //Exit code to end main
}
