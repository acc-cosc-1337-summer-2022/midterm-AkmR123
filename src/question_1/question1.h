bool test_config();

class Receipt 
{

public:     // Access Specifier
    Receipt (double meal_price, double tip_rate){
        meal_amount = meal_price;
        gratuity = tip_rate;
    }    // Constructor decleration - to be defined in .cpp
    double calculate_tax();     // Class Method - to be defined later
    double calculate_gratuity();     // Class Method - to be defined later
    void display_receipt();     // Class Method - to be defined later

private:     // Access Specifier
    const double tax = 0.08;
    double gratuity;
    double meal_amount;
};