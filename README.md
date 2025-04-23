# inheritance-polymorphism-mobile-plan
C++ program that calculates the most optimal mobile plan for cell-phone users of a hypothetical telecommunications company. The project has class definitions such as Customer, Premium_Customer, containing data members such as name and monththly call amounts. There are no other contributors, nor maintaining of this program. Class instructions are below. 

- Write class definitions for Customer and for a derived class Premium_Customer.  Customer should contain data members common to all customers, like name, numbers of calls made in a month, and so on. 

- Implement a virtual function to compute a bill for each customer compute_bill(). This function will use appropriate algorithms and data members to compute the monthly charge to compute the bill.

Compute the basic customer's bill as:

                            bill = monthlyfee + (percall * num_of_calls)

using monthly fee $10 and per call charge $0.50.

Computer the premium customer's bill as:

                            bill = monthlyfee + (percall * num_of_calls) + (per_min * num_of_min)

using monthly fee $20, per call charge $0.05 and per min charge $0.10.

- Include the constructors and necessary functions (accessor and mutator) to all class definitions. Include a void print() function in the Customer class which will print the customer name and customer bill in the dollar. Note that print function will be only defined in Customer class and will not be overridden by the inherited class.

- Write a main program that will demonstrate which plan is better for different customers. For example, find out which plan is better for a customer who makes 30 calls per month averaging 3 minutes per call. What about 60 calls?
