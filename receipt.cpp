#include <iostream>

using namespace std;

int main(){
		float num, unitPrice, taxPern, sumPrice, vat, discount, amountPayable;
    cout << "How many items would you like to buy? ";
    cin >> num; 
    cout << "Enter tax Percentage: ";
    cin >> taxPern; /*the percentage of tax percentage*/
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
	
	/*1.num: refers to the number of items bought by the customer
	  2.unitPrice: is the price per item 
	  3.taxPern: is the tax percentage entered by the user
	  4.sumPrice: the total amount of items bought (ie. the number of items times the unit price)
	  5.vat: the value added tax that is added to the total amount the customer is suppose to pay(ie. the sumPrice)
	  6.discount: the amount deducted from the original amount the customer was supposed to pay due to certain amount of items bought
	  7.amountPayabe: this the amount actual amount the customer will pay after the discount has been subtracted from it and the vat has been added*/
	
