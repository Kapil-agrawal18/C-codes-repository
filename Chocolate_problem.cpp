// Total Number of chocolate we can buy if we are having x money abd cost 
//of one chocolate is y and we can byu 1 chocolate from n wrapper
//so we have to generate a code to calculate the number of chocolate we can buy .

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int total_rupees,one_choc_cost,wrap_to_buy;
    
    // Taking input for total rupees an individual have (total_rupees)
    // cost of one chocolate and (one_choc_cost)
    // number of wrapper to buy one chocolate respectively (wrap_to_buy)
    cin>>total_rupees >>one_choc_cost >>wrap_to_buy; 
    
    // Total chocolate we can buy from rupees (choc_buy_rupee)
    int choc_buy_rupee = total_rupees/one_choc_cost ;
    
    // initially the number of wrappers we are having
    int wrap = choc_buy_rupee ;
    // variable to calculate total number of chocolate we can buy
    int total_choc = choc_buy_rupee ;
    
     // when total wrapper left are smaller then the wrapper to buy one chocolate loop breaks
    while(wrap>=wrap_to_buy)
    {
        int choc_from_wrap = wrap/wrap_to_buy; // chocolate we can buy from wrapper
        int wrap_left = wrap - ( wrap_to_buy * choc_from_wrap) ; // wrapper left after byuing chocolate
        total_choc += choc_from_wrap; // total chocolate we have buyed till now
        wrap = choc_from_wrap + wrap_left; // total wrapper we are having after buying chocolates 
    }
    cout<<total_choc;
    return 0;
}
