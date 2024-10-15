#ifndef FINANCIAL_RECORDS_H
#define FINANCIAL_RECORDS_H

class Financial_Records {
public:
    Financial_Records(double initial_balance = 0.0);

    void record_income(double amount);    // Add income to balance
    void record_expenses(double amount);  // Subtract expense from balance
    double get_balance() const;          

private:
    double total_balance;    
    double total_expenses;   
};

#endif 
