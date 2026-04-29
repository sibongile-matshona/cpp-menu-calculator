#include <iostream>
using namespace std;

// Constant for number of inputs //
const int AMOUNT = 6;

// Menu options //
enum MenuOption
{
    SUM = 1,
    MEAN,
    MINIMUM,
    MAXIMUM,
    EXIT
};

int main(){

    cout << "Sibongile Matshona " << endl;
    cout << "sim0070 sisiematshona@my.und.edu" << endl;
    cout << "Department of Computer Science and Engineering" << endl;
    cout << "CSCE 1030.003" << endl;




    // Declaring variables //
    int choice = 0;

    // Main loop //
    while (choice != EXIT)
    {
        // Display menu //
        cout << endl;
        cout << "Menu:" << endl;
        cout << "1. Sum" << endl;
        cout << "2. Mean" << endl;
        cout << "3. Minimum" << endl;
        cout << "4. Maximum" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        // Process choice //
        switch (choice)
        {
            case SUM:
            {
                // Sum calculation //
                cout << "Enter 6 numbers:" << endl;

                double number;
                double sum = 0;

                for (int i = 0; i < AMOUNT; ++i)
                {
                    cin >> number;
                    sum = sum + number;
                }

                cout << "Sum: " << sum << endl;
                break;
            }

            case MEAN:
            {
                // Mean calculation //
                cout << "Enter 6 numbers:" << endl;

                double number;
                double sum = 0;

                for (int i = 0; i < AMOUNT; ++i)
                {
                    cin >> number;
                    sum = sum + number;
                }

                double mean = sum / AMOUNT;
                cout << "Mean: " << mean << endl;
                break;
            }

            case MINIMUM:
            {
                // Minimum calculation //
                cout << "Enter 6 numbers:" << endl;

                double number;
                double min;

                cin >> min;

                for (int i = 1; i < AMOUNT; ++i)
                {
                    cin >> number;

                    if (number < min)
                    {
                        min = number;
                    }
                }

                cout << "Minimum: " << min << endl;
                break;
            }

            case MAXIMUM:
            {
                // Maximum calculation //
                cout << "Enter 6 numbers:" << endl;

                double number;
                double max;

                cin >> max;

                for (int i = 1; i < AMOUNT; ++i)
                {
                    cin >> number;

                    if (number > max)
                    {
                        max = number;
                    }
                }

                cout << "Maximum: " << max << endl;
                break;
            }

            case EXIT:
            {
                // Exit program //
                cout << "Goodbye!" << endl;
                break;
            }

            default:
            {
                // Invalid input //
                cout << "Invalid choice. Try again." << endl;
            }
        }
    }

    return 0;
}
