#include <iostream>
using namespace std;

struct Product
{
    string name;
    float price;
};

int main()
{
    Product products[5] =
    {
        {"Laptop", 120000},
        {"Mobile", 80000},
        {"Headphones", 15000},
        {"Keyboard", 5000},
        {"Monitor", 30000}
    };

    float total = 0;

    for (int i = 0; i < 5; i++)
    {
        total = total + products[i].price;
    }

    cout << "Total Price: " << total << endl;

    return 0;
}
