#include <iostream>

using namespace std;

int main(){
		float num, unitPrice, taxPern, sumPrice, vat, disPern, discount, amountPayable;
    cout << "How many items would you like to buy? ";
    cin >> num;
    cout << "Enter tax Percentage: ";
    cin >> taxPern;
    unitPrice = 10;
    sumPrice = num * unitPrice;
    vat = sumPrice * (taxPern/100);
    
    if(sumPrice >= 500 && sumPrice < 1000){
        discount = sumPrice * 0.05;
        amountPayable = sumPrice + vat - discount;
    }
    else if(sumPrice >= 1000 && sumPrice < 1500){
        discount = sumPrice * 0.1;
        amountPayable = sumPrice + vat - discount;
    }
    else if(sumPrice > 1500){
        discount = sumPrice * 0,15;
        amountPayable = sumPrice + vat - discount;
    }
    else{
        amountPayable = sumPrice + vat;
    }
    cout << "Quantity of items bought: " << num <<endl;
    cout << "Unit price of item: " << unitPrice <<endl;
    cout << "Price of items (tax excluded): " << amountPayable - vat <<endl;
    cout << "Value Added Tax: " << vat <<endl;
    cout << "Discount: " << discount <<endl;
    cout << "Total amount payable (tax included): " << amountPayable;

    return 0;
