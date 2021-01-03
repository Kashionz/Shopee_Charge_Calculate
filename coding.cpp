#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int category;
    float price, shipping, charge;
    float trade_charge, trade_charge_cc, cashflow_charge, cashflow_charge_cc;
    float fixed_price, fixed_price_cc;

    cout << "Shopee's Charge Calculate\n"
         << "Please input your Item's Price:";
    cin  >> price;
    cout << "Please input your Shipping:";
    cin >> shipping;
    cout << "Please select your Category (0 = dressing, 1 = not dressing):";
    cin >> category;

    charge = category == 0 ? 0.03 : 0.02;

    cout << endl;

    trade_charge = price * charge;
    cashflow_charge = (price + shipping) * 0.01;
    cashflow_charge_cc = (price + shipping) * 0.02;
    fixed_price = price + trade_charge + cashflow_charge;
    fixed_price_cc = price + trade_charge + cashflow_charge_cc;
    cout << "First fixed:" << fixed_price << endl;
    cout << "First fixed(CC or MPs):" << fixed_price_cc << endl;
    cout << "Trade Charge:" << trade_charge << endl;
    cout << "Cash Flow Charge:" << cashflow_charge << endl;
    cout << "Cash Flow Charge(CC or MP):" << cashflow_charge_cc << endl;
    cout << endl;

    trade_charge = fixed_price * charge;
    trade_charge_cc = fixed_price_cc * charge;
    cashflow_charge = (fixed_price + shipping) * 0.01;
    cashflow_charge_cc = (fixed_price_cc + shipping) * 0.02;
    fixed_price = price + trade_charge + cashflow_charge;
    fixed_price_cc = price + trade_charge_cc + cashflow_charge_cc;
    cout << "Second fixed:" << fixed_price << endl; 
    cout << "Second fixed(CC or MPs):" << fixed_price_cc << endl;
    cout << "Trade Charge:" << trade_charge << endl;
    cout << "Trade Charge(CC or MPs):" << trade_charge_cc << endl;
    cout << "Cash Flow Charge:" << cashflow_charge << endl;
    cout << "Cash Flow Charge(CC or MP):" << cashflow_charge_cc << endl;
    cout << endl;

    trade_charge = fixed_price * charge;
    trade_charge_cc = fixed_price_cc * charge;
    cashflow_charge = (fixed_price + shipping) * 0.01;
    cashflow_charge_cc = (fixed_price_cc + shipping) * 0.02;
    fixed_price = price + trade_charge + cashflow_charge;
    fixed_price_cc = price + trade_charge_cc + cashflow_charge_cc;
    cout << "Third fixed:" << fixed_price << endl;
    cout << "Third fixed(CC or MPs):" << fixed_price_cc << endl;
    cout << "Trade Charge:" << trade_charge << endl;
    cout << "Trade Charge(CC or MPs):" << trade_charge_cc << endl;
    cout << "Cash Flow Charge:" << cashflow_charge << endl;
    cout << "Cash Flow Charge(CC or MPs):" << cashflow_charge_cc << endl;
    cout << endl;

    cout << "Item's price:" << round(fixed_price) << endl;
    cout << "Item's price(CC or MPs):" << round(fixed_price_cc) << endl;
    cout << "Trade Charge:" << trade_charge << endl;
    cout << "Trade Charge(CC or MPs):" << trade_charge_cc << endl;
    cout << "Cash Flow Charge:" << cashflow_charge << endl;
    cout << "Cash Flow Charge(CC or MPs):" << cashflow_charge_cc << endl;
    return 0;
}

/*
1200
1200*2%=24
1260*1%=12.6=13

1237
1237*2%=24.74=25
1297*1%=12.97=13

1238
1238*2%=24.76=25
1298*1%=12.98=13

1200
1200*2%=24
1260*2%=25.2

1249
1249*2%=24.98
1309*2%=26.18

1251
1251*2%=25.02
1311*2%=26.22

*/