#include <iostream>
#include <string>

#include "Invoice.h"

using namespace std;

int main()
{
    Invoice invoice_01("code_01", "测试零件", -3, 100);
    cout << invoice_01.get_invoice_amount() << endl;
    Invoice invoice_02("code_02", "测试零件", -3, -59);
    cout << invoice_02.get_invoice_amount() << endl;
    Invoice invoice_03("code_03", "测试零件", 685, -59);
    cout << invoice_03.get_invoice_amount() << endl;
    Invoice invoice_04("code_04", "测试零件", 685, 333);
    cout << invoice_04.get_invoice_amount() << endl;
    invoice_04.set_price(-100);
    cout << invoice_04.get_invoice_amount() << endl;
    invoice_04.set_price(123214);
    cout << invoice_04.get_invoice_amount() << endl;
    return 0;
}