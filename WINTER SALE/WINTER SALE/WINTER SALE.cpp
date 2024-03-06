#include <iostream> 
using namespace std;
int main(void) {

    float discount;
    float main_price;
    float price_after_sale;
    float value;
    cin >> discount;
    cin >> price_after_sale;
    value = 100 - discount;
    main_price = ((price_after_sale * 100) / value);
    cout << main_price;
    return 0;
}