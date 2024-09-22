#include <iostream>

using namespace std;

int main() {
    // Prompt user to input amount of money loaded onto their account
    double balance;
    cout << "Enter the amount of money loaded onto your account (in UGX): ";
    cin >> balance;

    // Prompt user to input the number of water units consumed
    int units;
    cout << "Enter the number of water units consumed: ";
    cin >> units;

    // Calculate the total cost based on the tiered pricing structure
    double cost = 0;
    if (units <= 10) {
        cost = units * 150;
    } else if (units <= 20) {
        cost = 10 * 150 + (units - 10) * 175;
    } else {
        cost = 10 * 150 + 10 * 175 + (units - 20) * 200;
    }

    // Apply the 15% surcharge
    cost *= 1.15;

    // Check whether the user's balance is sufficient to cover the total cost
    if (balance >= cost) {
        // Calculate the remaining balance
        balance -= cost;
        cout << "Transaction successful. Remaining balance: " << balance << " UGX" << endl;
    } else {
        cout << "Error: Insufficient balance. Remaining balance: " << balance << " UGX" << endl;
    }

    return 0;
}
