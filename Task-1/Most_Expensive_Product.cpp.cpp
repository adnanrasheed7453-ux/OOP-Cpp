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

    int expensive = 0;

    for (int i = 1; i < 5; i++)
    {
        if (products[i].price > products[expensive].price)
        {
            expensive = i;
        }
    }

    cout << "Most Expensive Product: " << products[expensive].name << endl;
    cout << "Price: " << products[expensive].price << endl;

    return 0;
}
