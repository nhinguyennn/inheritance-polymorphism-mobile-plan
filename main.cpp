#include <iostream>
#include <string>
#include <limits>
typedef std::numeric_limits< double > dbl;
using namespace std;
class Customer {
private:
    string fullName;
    int MNOC; // Monthly Number Of Calls
    int BMF = 10; // Basic Monthly Fee = $10
    double BPCC = 0.5; // Basic Per-Call Charge = $0.50
    double bill; // Basic bill total
    double pbill; // Premium bill total
public:
    virtual double compute_bill(int BMF,double BPCC,int MNOC) {
        bill = double(BMF) + (BPCC * double(MNOC));
        cout.precision(4);
        cout << "Your basic bill totals to: $" << bill << endl;
        cout << "This is for your " << MNOC << " monthly calls, including our
monthly fee of $10 and $0.5 per call charge.\n" << endl;
        return bill;
        cout.precision(dbl::max_digits10);
    }
    void print(Customer) {
        if (bill < pbill)   {
            std::cout << "The basic bill plan is a better option for you. Thank you
for using this program!" << endl;
}
else {
            std::cout << "The premium bill plan is a better option for you. Thank
you for using this program!" << endl;
} }
};
class Premium_Customer : public Customer {
private:
    int PNOM; // Premium Number of Minutes
    int PMF = 20; // Premium Monthly Fee
    float PPCC = 0.05; // Premium Per-Call Charge = $0.05
    float PPMC = 0.10; // Premium Per-Minute Charge = $0.10.
    int MNOC; // Monthly number of calls
    int pbill;
public:
    double compute_bill(double PMF, double PPCC, int MNOC,double PPMC,int PNOM)
{ // Redefiing virtual function compute_bill()
        pbill = double(PMF) + (PPCC * double(MNOC)) + (PPMC * double(PNOM));
        cout.precision(4);
        cout << "Your premium bill totals to: $" << pbill << endl;
        cout << "This is for your " << MNOC << " monthly calls, and an average of "
<< PNOM << " minutes per call." << endl;
        cout << "Including a monthly fee of $20, a per-call charge of $0.05 and
per-minute charge of $0.10." << endl;
        return pbill;
} };
int main(){
    Customer customer = Customer(); // Basic customer object
Premium_Customer pcustomer = Premium_Customer(); // Premium customer object
    string fullName;
    int MNOC;
    int PNOM;
    double BPCC;
    double pbill;
    double bill;
    double PMF;
    double PPCC;
    double PPMC;
    std::cout << "Welcome to Cellular Two! This program will compare both available
plans to see which suits your needs."<< endl;
    std::cout << "What is your name?: " << endl;
    getline( cin, fullName);
    std::cout << "Please enter your average number of calls: " << endl;
    std::cin >> MNOC; // Use as parameter
    std::cout << "Enter your average number of minutes per call: " << endl;
    std::cin >> PNOM; // Use as parameter
    std::cout << "Thank you, " << fullName << "." << " Here are the basic and
premium bills based on your average calls per month." << endl;
    //customer.compute_bill(MNOC, PNOM); use input variables as parameter
    customer.compute_bill(10,0.5,MNOC);
    pcustomer.compute_bill(20,0.05,MNOC,0.10,PNOM);
    if (pbill < bill)   {
        std::cout << "The premium bill plan is a better option for you. Thank you
for using this program!" << endl;
    }
    else  {
        std::cout << "The basic bill plan is a better option for you. Thank you for
using this program!" << endl;
} };