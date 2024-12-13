#include <iostream>
#include <unordered_map>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

double convertCurrency(double amount, const string& fromCurrency, const string& toCurrency, unordered_map<string, double>& conversionRates) {
    if (conversionRates.find(fromCurrency) == conversionRates.end() || conversionRates.find(toCurrency) == conversionRates.end()) {
        return -1;
    }
    double baseAmount = amount / conversionRates[fromCurrency];
    double convertedAmount = baseAmount * conversionRates[toCurrency];
    return convertedAmount;
}

int main() {
    unordered_map<string, double> conversionRates = {
        {"USD", 1.0},
        {"EUR", 0.85},
        {"INR", 74.0},
        {"GBP", 0.75},
        {"JPY", 110.0},
        {"AUD", 1.35}
    };

    vector<string> currencies = {"USD", "EUR", "INR", "GBP", "JPY", "AUD"};

    while (true) {
        cout << "\n==== Currency Converter ====\n";
        cout << "Available Currencies:\n";
        for (int i = 0; i < currencies.size(); ++i) {
            cout << i + 1 << ". " << currencies[i] << endl;
        }

        int fromChoice, toChoice;
        double amount;

        cout << "\nSelect the source currency (1-" << currencies.size() << "): ";
        cin >> fromChoice;

        if (fromChoice < 1 || fromChoice > currencies.size()) {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        cout << "Select the target currency (1-" << currencies.size() << "): ";
        cin >> toChoice;

        if (toChoice < 1 || toChoice > currencies.size()) {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        cout << "Enter the amount to convert: ";
        cin >> amount;

        string fromCurrency = currencies[fromChoice - 1];
        string toCurrency = currencies[toChoice - 1];

        double result = convertCurrency(amount, fromCurrency, toCurrency, conversionRates);

        if (result != -1) {
            cout << fixed << setprecision(2);
            cout << "\nConverted Amount: " << amount << " " << fromCurrency << " = " << result << " " << toCurrency << endl;
        } else {
            cout << "Conversion failed. Please try again.\n";
        }

        char another;
        cout << "\nDo you want to perform another conversion? (y/n): ";
        cin >> another;

        if (another != 'y' && another != 'Y') {
            cout << "Thank you for using the Currency Converter. Goodbye!\n";
            break;
        }
    }

    return 0;
}