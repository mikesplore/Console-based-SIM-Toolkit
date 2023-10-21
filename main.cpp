#include <iostream>
using namespace std;

int main() {
    int option;

    do {
        cout << "Sim Toolkit\n" << endl;
        cout << "1. Safaricom+" << endl;
        cout << "2. Mpesa" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter an option: ";
        cin >> option;

        switch (option) {
            case 1:
                do {
                    cout<<"\n=========================="<<endl;
                    cout << "Safaricom" << endl;
                    cout<<"=========================="<<endl;
                    cout << "1. My account" << endl;
                    cout << "2. M-Bank services" << endl;
                    cout << "0. Back to main menu" << endl;
                    cout << "Enter an option: ";
                    cin >> option;
                    switch (option) {
                        case 1:
                            do {
                                cout<<"\n=========================="<<endl;
                                cout << "Safaricom - My account" << endl;
                                cout<<"=========================="<<endl;
                                cout << "1. Balance enquiry" << endl;
                                cout << "2. Top-up" << endl;
                                cout << "3. Selfcare" << endl;
                                cout << "4. Customer care" << endl;
                                cout << "0. Back to main menu" << endl;
                                cout << "Enter an option: ";
                                cin >> option;
                                switch (option) {
                                    case 1:
                                        do{
                                            cout<<"\n=========================="<<endl;
                                            cout<<"Balance enquiry"<<endl;
                                            cout<<"=========================="<<endl;
                                            cout << "1. Prepaid" << endl;
                                            cout << "2. postpaid" << endl;
                                            cout << "0. Back to main menu" << endl;
                                            cout<<"Enter an option:  " ;
                                            cin>>option;
                                            switch (option) {
                                                case 1:
                                                //prepaid function
                                                cout<<"\nprepaid selected.\n" << endl;
                                                break;
                                                case 2:
                                                //postpaid function
                                                cout<<"\nPostpaid selected\n" << endl;
                                                break;
                                                case 0:
                                                //exit the program
                                                continue;
                                                default:
                                                cout<<"\nInvalid option entered\n"<<endl;
                                                break;


                                            }
                                        }while(option!=0);
                                        break;
                                    case 2:
                                        do{
                                            cout << "1. My number" << endl;
                                            cout << "2. Another Safaricom number" << endl;
                                            cout << "0. Back to main menu" << endl;
                                            cout<<"Enter an option:  " ;
                                            cin>>option;
                                            switch (option) {
                                                case 1:
                                                //top up my number function
                                                cout<<"my number selected selected." << endl;
                                                break;
                                                case 2:
                                                //top up other number function
                                                cout<<"Another safaricom number selected" << endl;
                                                break;
                                                case 0:
                                                //exit the program
                                                continue;
                                                default:
                                                cout<<"Invalid option entered"<<endl;
                                                break;


                                            }
                                        }while(option!=0);
                                        break;
                                    case 3:
                                        do{
                                            cout<<"\n=========================="<<endl;
                                            cout<<"Selfcare"<<endl;
                                            cout<<"=========================="<<endl;
                                            cout << "1. Prepaid" << endl;
                                            cout << "2. Postpaid" << endl;
                                            cout << "3. M_PESA" << endl;
                                            cout << "0. Back to main menu" << endl;
                                            cout<<"Enter an option:  " ;
                                            cin>>option;
                                            switch (option) {
                                                case 1:
                                                //prepaid function function
                                                cout<<"\nprepaid  selected.\n" << endl;
                                                break;
                                                case 2:
                                                //postpaid  function
                                                cout<<"\npostpaid selected\n" << endl;
                                                break;
                                                case 3:
                                                //M-PESA selected
                                                cout<<"\nM-PESA selected\n" << endl;
                                                break;
                                                case 0:
                                                //exit the program
                                                continue;
                                                default:
                                                cout<<"\nInvalid option entered\n"<<endl;
                                                break;


                                            }
                                        }while(option!=0);
                                        break;
                                    case 4:
                                        do{
                                            cout<<"\n=========================="<<endl;
                                            cout<<"Customer Care"<<endl;
                                            cout<<"=========================="<<endl;
                                            cout << "1. Prepaid" << endl;
                                            cout << "2. Postpaid" << endl;
                                            cout << "3. M_PESA" << endl;
                                            cout << "0. Back to main menu" << endl;
                                            cout<<"Enter an option:  " ;
                                            cin>>option;
                                            switch (option) {
                                                case 1:
                                                //prepaid function function
                                                cout<<"\nprepaid  selected.\n" << endl;
                                                break;
                                                case 2:
                                                //postpaid  function
                                                cout<<"\npostpaid selected\n" << endl;
                                                break;
                                                case 3:
                                                //M-PESA selected
                                                cout<<"\nM-PESA selected\n" << endl;
                                                break;
                                                case 0:
                                                //exit the program
                                                continue;
                                                default:
                                                cout<<"\nInvalid option entered\n"<<endl;
                                                break;


                                            }
                                        }while(option!=0);
                                        break;
                                    case 0:
                                        // Go back to the main menu
                                        break;
                                    default:
                                        cout << "\nInvalid option entered\n" << endl;
                                }
                            } while (option != 0);
                            break;
                        case 2:
                            do{ 
                                            cout << "1. Backlays Bank" << endl;
                                            cout << "2. Co-op Bank" << endl;
                                            cout << "3. DTB" << endl;
                                            cout << "4. Ecobank" << endl;
                                            cout << "5. Equity Bank" << endl;
                                            cout << "6. Family Bank" << endl;
                                            cout << "7. Faulu DTM" << endl;
                                            cout << "8. First Community" << endl;
                                            cout << "9. I&M Bank" << endl;
                                            cout << "10. KCB" << endl;
                                            cout << "11. KWFT" << endl;
                                            cout << "12. M-SACCO" << endl;
                                            cout << "13. National Bank" << endl;
                                            cout << "14. NIC Bank" << endl;
                                            cout << "15. Post Bank" << endl;
                                            cout << "16. SMB Bank" << endl;
                                            cout << "17. Sidian Bank" << endl;
                                            cout << "18. Standered Chartered" << endl;
                                            cout << "0. Back to main menu" << endl;
                                            cout<<"Enter an option:  " ;
                                            cin>>option;
                                            switch (option) {
                                                case 1:
                                                //bank function
                                                cout<<"Backlays bank selected." << endl;
                                                break;
                                                case 2:
                                                ///bank function
                                                cout<<"co-op bank selected" << endl;
                                                break;
                                                case 3:
                                                //bank function
                                                cout<<"DTB bank selected." << endl;
                                                break;
                                                case 4:
                                                //bank function
                                                cout<<"Ecobank selected." << endl;
                                                break;
                                                case 5:
                                                //bank function
                                                cout<<"Equity bank selected." << endl;
                                                break;
                                                case 6:
                                                //bank function
                                                cout<<"Family bank selected." << endl;
                                                break;
                                                case 7:
                                                //bank function
                                                cout<<"Faulu DTM selected." << endl;
                                                break;
                                                case 8:
                                                //bank function
                                                cout<<"First Community selected." << endl;
                                                break;
                                                case 9:
                                                //bank function
                                                cout<<"I&M Bank selected." << endl;
                                                break;
                                                case 10:
                                                //bank function
                                                cout<<"KCB selected." << endl;
                                                break;
                                                case 11:
                                                //bank function
                                                cout<<"KWFT selected." << endl;
                                                break;
                                                case 12:
                                                //bank function
                                                cout<<"M-SACCO selected." << endl;
                                                break;
                                                case 13:
                                                //bank function
                                                cout<<"NAtional Bank selected." << endl;
                                                break;
                                                case 14:
                                                //bank function
                                                cout<<"NIC selected." << endl;
                                                break;
                                                case 15:
                                                //bank function
                                                cout<<"post Bank selected." << endl;
                                                break;
                                                case 16:
                                                //bank function
                                                cout<<"SBM bank selected." << endl;
                                                break;
                                                case 17:
                                                //bank function
                                                cout<<"Sidian Bank selected." << endl;
                                                break;
                                                case 18:
                                                //bank function
                                                cout<<"Standard chartered Bank selected." << endl;
                                                break;
                                                case 0:
                                                //exit the program
                                                continue;
                                                default:
                                                cout<<"Invalid option entered"<<endl;
                                                break;


                                            }
                                        }while(option!=0);
                                        break;
                            
                        case 0:
                            // Go back to the main menu
                            break;
                        default:
                            cout << "Invalid option entered" << endl;
                    }
                } while (option != 0);
                break;

            case 2:
                do {
                    cout << "Mpesa" << endl;
                    cout << "1. Send money" << endl;
                    cout << "2. Withdraw cash" << endl;
                    cout << "3. Buy Airtime" << endl;
                    cout << "4. Loans and Savings" << endl;
                    cout << "5. Lipa na Mpesa" << endl;
                    cout << "6. My account" << endl;
                    cout << "0. Back to main menu" << endl;
                    cout << "Enter an option: ";
                    cin >> option;
                    switch (option) {
                        case 1:
                            // function for send money to be called here
                            cout << "Send money selected." << endl;
                            break;
                        case 2:
                            do {
                                cout << "Mpesa - Withdraw Cash" << endl;
                                cout << "1. Withdraw from agent" << endl;
                                cout << "2. Withdraw from ATM" << endl;
                                cout << "3. Back to Mpesa menu" << endl;
                                cout << "0. Back to main menu" << endl;
                                cout << "Enter an option: ";
                                cin >> option;
                                switch (option) {
                                    case 1:
                                        //Withdraw from agent function
                                        cout << "Withdraw from agent selected." << endl;
                                        break;
                                    case 2:
                                        //Withdraw from ATM function
                                        cout << "Withdraw from ATM selected." << endl;
                                        break;
                                    case 3:
                                        // Go back to the Mpesa menu
                                        break;
                                    case 0:
                                        // Go back to the main menu
                                        break;
                                    default:
                                        cout << "Invalid option entered" << endl;
                                }
                            } while (option != 0 && option != 3);
                            break;

                        case 3:
                            do {
                                cout << "Mpesa - Buy Airtime" << endl;
                                cout << "1. My Phone" << endl;
                                cout << "2. Other Phone" << endl;
                                cout << "3. Back to Mpesa menu" << endl;
                                cout << "0. Back to main menu" << endl;
                                cout << "Enter an option: ";
                                cin >> option;
                                switch (option) {
                                    case 1:
                                        //Buy airtime function
                                        cout << "Airtime for my phone selected." << endl;
                                        break;
                                    case 2:
                                        //Airtime for other number
                                        cout << "other number selected." << endl;
                                        break;
                                    case 3:
                                        // Go back to the Mpesa menu
                                        break;
                                    case 0:
                                        // Go back to the main menu
                                        break;
                                    default:
                                        cout << "Invalid option entered" << endl;
                                }
                            } while (option != 0 && option != 3);
                            break;
                        case 4:
                            do {
                                cout << "Mpesa - Loans and Savings" << endl;
                                cout << "1. M-shwari" << endl;
                                cout << "2. KCB M-PESA" << endl;
                                cout << "3. Back to Mpesa menu" << endl;
                                cout << "0. Back to main menu" << endl;
                                cout << "Enter an option: ";
                                cin >> option;
                                switch (option) {
                                    case 1:
                                        do {
                                            cout << "Mpesa - M-Shwari" << endl;
                                            cout << "1. Send to M-shwari" << endl;
                                            cout << "2. Withdraw from M-shwari" << endl;
                                            cout << "3. Lock-savings account" << endl;
                                            cout << "4. Loan at 9% for 30 days" << endl;
                                            cout << "5. Check balance" << endl;
                                            cout << "6. Mini statement" << endl;
                                            cout << "7. Back to Mpesa menu" << endl;
                                            cout << "0. Back to main menu" << endl;
                                            cout << "Enter an option: ";
                                            cin >> option;
                                            switch (option) {
                                                case 1:
                                                    // Send to M-Shwari function
                                                    cout << "Send to M-Shwari selected." << endl;
                                                    break;
                                                case 2:
                                                    // Withdraw from M-shwari function
                                                    cout << "Withdraw from M-Shwari selected." << endl;
                                                    break;
                                                case 3:
                                                    
                                                    cout << "Lock savings account ." << endl;
                                                    do {
                                            cout << "Mpesa - M-Shwari - Lock savings Account" << endl;
                                            cout << "1. Open account" << endl;
                                            cout << "2. save" << endl;
                                            cout << "3. Withdraw" << endl;
                                            cout << "4. Check balance" << endl;
                                            cout << "5. Mini statement" << endl;
                                            cout << "6. Back to Mpesa menu" << endl;
                                            cout << "0. Back to main menu" << endl;
                                            cout << "Enter an option: ";
                                            cin >> option;
                                            switch (option) {
                                                case 1:
                                                    do {
                                                        cout << "Open account" << endl;
                                                        cout << "1. From M-PESA" << endl;
                                                        cout << "2. FROM M-Shwari" << endl;
                                                        cout << "0. Back to main menu" << endl;
                                                        cout << "Enter an option: ";
                                                        cin >> option;
                                                        switch (option) {
                                                            case 1:
                                                                // from mpesa function
                                                                cout << "from mpesa selected." << endl;
                                                                break;
                                                            case 2:
                                                                // from mshwari function
                                                                cout << "from mshwari selected." << endl;
                                                                break;
                                                            case 0:
                                                                // exit the program
                                                                break;
                                                            default:
                                                                cout << "Invalid option entered" << endl;
                                                        }
                                                    } while (option != 0);
                                                    break;
                                                case 2:
                                                    do {
                                                        cout << "Save" << endl;
                                                        cout << "1. From M-PESA" << endl;
                                                        cout << "2. FROM M-Shwari" << endl;
                                                        cout << "0. Back to main menu" << endl;
                                                        cout << "Enter an option: ";
                                                        cin >> option;
                                                        switch (option) {
                                                            case 1:
                                                                // from mpesa function
                                                                cout << "from mpesa selected." << endl;
                                                                break;
                                                            case 2:
                                                                // from mshwari function
                                                                cout << "from mshwari selected." << endl;
                                                                break;
                                                            case 0:
                                                                // exit the program
                                                                break;
                                                            default:
                                                                cout << "Invalid option entered" << endl;
                                                        }
                                                    } while (option != 0);
                                                    break;
                                                case 3:
                                                    // Withdraw function
                                                    cout << "Withdraw from account selected." << endl;
                                                    break;
                                                case 4:
                                                    // Check balance function
                                                    cout << "check balance selected." << endl;
                                                    break;
                                            
                                                case 5:
                                                    // Mini statement function
                                                    cout << "Mini statement selected." << endl;
                                                    break;
                                                case 6:
                                                    // Go back to the Mpesa menu
                                                    break;
                                                case 0:
                                                    // Go back to the main menu
                                                    break;
                                                default:
                                                    cout << "Invalid option entered" << endl;
                                            }
                                        } while (option != 0 && option != 6);
                                        
                                                    break;
                                                case 4:
                                                    do {
                                                        cout << "Mpesa - Buy Airtime" << endl;
                                                        cout << "1. Request" << endl;
                                                        cout << "2. Pay loan" << endl;
                                                        cout << "3. Check loan limit and fees";
                                                        cout << "4. Loan balance"<< endl;
                                                        cout << "5. Back to Mpesa menu" << endl;
                                                        cout << "0. Back to main menu" << endl;
                                                        cout << "Enter an option: ";
                                                        cin >> option;
                                                        switch (option) {
                                                            case 1:
                                                                //request loan function
                                                                cout << "request loan selected." << endl;
                                                                break;
                                                            case 2:
                                                                //pay loan function
                                                                cout << "pay loan selected." << endl;
                                                                break;
                                                            case 3:
                                                                //check loan limit and fees  function
                                                                cout << "other number selected." << endl;
                                                                break;
                                                            case 4:
                                                                //loan balance function
                                                                cout << "loan balance selected." << endl;
                                                                break;
                                                            case 5:
                                                                // Go back to the Mpesa menu
                                                                break;
                                                            case 0:
                                                                // Go back to the main menu
                                                                break;
                                                            default:
                                                                cout << "Invalid option entered" << endl;
                                                        }
                                                    } while (option != 0 && option != 5);
                                                    break;
                                                case 5:
                                                    // Check balance function
                                                    cout << "Check balance selected." << endl;
                                                    break;
                                                case 6:
                                                    // Mini statement function
                                                    cout << "Mini statement selected." << endl;
                                                    break;
                                                case 7:
                                                    // Go back to the Mpesa menu
                                                    break;
                                                case 0:
                                                    // Go back to the main menu
                                                    break;
                                                default:
                                                    cout << "Invalid option entered" << endl;
                                            }
                                        } while (option != 0 && option != 7);
                                        break;  // This break should be outside the innermost do-while loop
                                    case 2:
                                        do {
                                                        cout << "KCB M-PESA" << endl;
                                                        cout << "1. Deposit from M-PESA" << endl;
                                                        cout << "2. WIthdraw to M-PESA" << endl;
                                                        cout << "3. Loan at 8.64% for 30 days" <<endl;
                                                        cout << "4. Fixed savings Accounts"<< endl;
                                                        cout << "5. My Account" << endl;
                                                        cout << "6. Back to Mpesa menu" << endl;
                                                        cout << "0. Back to main menu" << endl;
                                                        cout << "Enter an option: ";
                                                        cin >> option;
                                                        switch (option) {
                                                            case 1:
                                                                //deposit from mpesa function
                                                                cout << "deposit from mpesa selected." << endl;
                                                                break;
                                                            case 2:
                                                                //withdraw to mpesa function
                                                                cout << "withdraw to mpesa selected." << endl;
                                                                break;
                                                            case 3:
                                                                do {
                                                                    cout << "Loan at 8.64% for 30 days" << endl;
                                                                    cout << "1. Request loan" << endl;
                                                                    cout << "2. Pay loan" << endl;
                                                                    cout << "3. Check loan limit and fees" << endl;
                                                                    cout << "4. Back to Mpesa menu" << endl;
                                                                    cout << "0. Back to main menu" << endl;
                                                                    cout << "Enter an option: ";
                                                                    cin >> option;
                                                                    switch (option) {
                                                                        case 1:
                                                                            //request loan  function
                                                                            cout << "request loan selected." << endl;
                                                                            break;
                                                                        case 2:
                                                                            //pay loan function function
                                                                            cout << "pay loan selected." << endl;
                                                                            break;
                                                                        case 3:
                                                                            //check loan limit and fees function
                                                                            cout << "check loan limit and fees selected." << endl;
                                                                            break;
                                                                        case 4:
                                                                            // Go back to the Mpesa menu
                                                                            break;
                                                                        case 0:
                                                                            // Go back to the main menu
                                                                            break;
                                                                        default:
                                                                            cout << "Invalid option entered" << endl;
                                                                    }
                                                                } while (option != 0 && option != 3);
                                                                break;
                                                            case 4:
                                                                do {
                                                                    cout << "Fixed savings account" << endl;
                                                                    cout << "1. Fixed Deposit" << endl;
                                                                    cout << "2. Target savings account" << endl;
                                                                    cout << "0. Back to main menu" << endl;
                                                                    cout << "Enter an option: ";
                                                                    cin >> option;
                                                                    switch (option) {
                                                                        case 1:
                                                                            do {
                                                                                cout << "Fixed deposit" << endl;
                                                                                cout << "1. Open Account" << endl;
                                                                                cout << "2. Unlock Account" << endl;
                                                                                cout << "0. Back to main menu" << endl;
                                                                                cout << "Enter an option: ";
                                                                                cin >> option;
                                                                                switch (option) {
                                                                                    case 1:
                                                                                       do {
                                                                                            cout << "Open account" << endl;
                                                                                            cout << "1. From M-PESA" << endl;
                                                                                            cout << "2. From KCB M-PESA" << endl;
                                                                                            cout << "0. Back to main menu" << endl;
                                                                                            cout << "Enter an option: ";
                                                                                            cin >> option;
                                                                                            switch (option) {
                                                                                                case 1:
                                                                                                    // from mpesa function
                                                                                                    cout << "from mpesa selected." << endl;
                                                                                                    break;
                                                                                                case 2:
                                                                                                    // from kcb mpesa function
                                                                                                    cout << "from KCB-Mpesa selected." << endl;
                                                                                                    break;
                                                                                                case 0:
                                                                                                    // exit the program
                                                                                                    break;
                                                                                                default:
                                                                                                    cout << "Invalid option entered" << endl;
                                                                                            }
                                                                                        } while (option != 0);
                                                                                        break;
                                                                                    case 2:
                                                                                        //unlock account function
                                                                                        cout << "Unlock account selected." << endl;
                                                                                        break;
                                                                                    case 0:
                                                                                        // exit the program
                                                                                        break;
                                                                                    default:
                                                                                        cout << "Invalid option entered" << endl;
                                                                                }
                                                                            } while (option != 0);
                                                                            break;
                                                                        case 2:
                                                                            do {
                                                                                cout << "Taget savings account" << endl;
                                                                                cout << "1. Open account" << endl;
                                                                                cout << "2. Save" << endl;
                                                                                cout << "3. Unlock account" << endl;
                                                                                cout << "4. Back to Mpesa menu" << endl;
                                                                                cout << "0. Back to main menu" << endl;
                                                                                cout << "Enter an option: ";
                                                                                cin >> option;
                                                                                switch (option) {
                                                                                    case 1:
                                                                                        do {
                                                                                            cout << "Open account" << endl;
                                                                                            cout << "1. From M-PESA" << endl;
                                                                                            cout << "2. From KCB M-PESA" << endl;
                                                                                            cout << "0. Back to main menu" << endl;
                                                                                            cout << "Enter an option: ";
                                                                                            cin >> option;
                                                                                            switch (option) {
                                                                                                case 1:
                                                                                                    // from mpesa function
                                                                                                    cout << "from mpesa selected." << endl;
                                                                                                    break;
                                                                                                case 2:
                                                                                                    // from kcb mpesa function
                                                                                                    cout << "from KCB-Mpesa selected." << endl;
                                                                                                    break;
                                                                                                case 0:
                                                                                                    // exit the program
                                                                                                    break;
                                                                                                default:
                                                                                                    cout << "Invalid option entered" << endl;
                                                                                            }
                                                                                        } while (option != 0);
                                                                                        break;
                                                                                    case 2:
                                                                                        do {
                                                                                            cout << "Open account" << endl;
                                                                                            cout << "1. From M-PESA" << endl;
                                                                                            cout << "2. From KCB M-PESA" << endl;
                                                                                            cout << "0. Back to main menu" << endl;
                                                                                            cout << "Enter an option: ";
                                                                                            cin >> option;
                                                                                            switch (option) {
                                                                                                case 1:
                                                                                                    // from mpesa function
                                                                                                    cout << "from mpesa selected." << endl;
                                                                                                    break;
                                                                                                case 2:
                                                                                                    // from kcb mpesa function
                                                                                                    cout << "from KCB-Mpesa selected." << endl;
                                                                                                    break;
                                                                                                case 0:
                                                                                                    // exit the program
                                                                                                    break;
                                                                                                default:
                                                                                                    cout << "Invalid option entered" << endl;
                                                                                            }
                                                                                        } while (option != 0);
                                                                                        break;
                                                                                    case 3:
                                                                                        //unlock account function
                                                                                        cout << "unlock account  selected." << endl;
                                                                                        break;
                                                                                    case 4:
                                                                                        // Go back to the Mpesa menu
                                                                                        break;
                                                                                    case 0:
                                                                                        // Go back to the main menu
                                                                                        break;
                                                                                    default:
                                                                                        cout << "Invalid option entered" << endl;
                                                                                }
                                                                            } while (option != 0 && option != 3);
                                                                            break;
                                                                        case 0:
                                                                            // exit the program
                                                                            break;
                                                                        default:
                                                                            cout << "Invalid option entered" << endl;
                                                                    }
                                                                } while (option != 0);
                                                                break;
                                                            case 5:
                                                                do {
                                                                    cout << "My Account" << endl;
                                                                    cout << "1. Check balance" << endl;
                                                                    cout << "2. Mini statement" << endl;
                                                                    cout << "0. Back to main menu" << endl;
                                                                    cout << "Enter an option: ";
                                                                    cin >> option;
                                                                    switch (option) {
                                                                        case 1:
                                                                            // check balance function
                                                                            cout << "check balance selected." << endl;
                                                                            break;
                                                                        case 2:
                                                                            // mini statement function
                                                                            cout << "mini statement selected." << endl;
                                                                            break;
                                                                        case 0:
                                                                            // exit the program
                                                                            break;
                                                                        default:
                                                                            cout << "Invalid option entered" << endl;
                                                                    }
                                                                } while (option != 0);
                                                                break;
                                                            case 6:
                                                                // Go back to the Mpesa menu
                                                                break;
                                                            case 0:
                                                                // Go back to the main menu
                                                                break;
                                                            default:
                                                                cout << "Invalid option entered" << endl;
                                                        }
                                                    } while (option != 0 && option != 5);
                                                    break;
                                    case 3:
                                        // Go back to the Mpesa menu
                                        break;
                                    case 0:
                                        // Go back to the main menu
                                        break;
                                    default:
                                        cout << "Invalid option entered" << endl;
                                }
                            } while (option != 0 && option != 3);
                            break;  // This break should be outside the case 4

                        case 5:
                            do {
                                cout << "M-Pesa - Lipa na M-pesa" << endl;
                                cout << "1. Pay Bills" << endl;
                                cout << "2. Buy Goods and Services" << endl;
                                cout << "3. Pochi la biashara" << endl;
                                cout << "0. Back to main menu" << endl;
                                cout << "Enter an option: ";
                                cin >> option;
                                switch (option) {
                                    case 1:
                                        // pay bill function
                                        cout << "Pay bill selected." << endl;
                                        break;
                                    case 2:
                                        // Buy goods and services function
                                        cout << "Buy goods and services selected." << endl;
                                        break;
                                    case 3:
                                        //pochi la biashara function
                                        cout<<"pochi la biashara selected" << endl;
                                        break;
                                    case 0:
                                        // exit the program
                                        break;
                                    default:
                                        cout << "Invalid option entered" << endl;
                                }
                            } while (option != 0);
                            break;
                        case 6:
                            
                            do {
                                cout << "My Account" << endl;
                                cout << "1. Mini statement" << endl;
                                cout << "2. Check balance" << endl;
                                cout << "3. Change M-PESA pin" << endl;
                                cout << "4. Change language" << endl;
                                cout << "5. Update customer menu" << endl;
                                cout << "6. Go back" << endl;
                                cout << "0. Back to main menu" << endl;
                                cout << "Enter an option: ";
                                cin >> option;
                                switch (option) {
                                    case 1:
                                        // mini statement function
                                        cout << "mini statement selected." << endl;
                                        break;
                                    case 2:
                                        // check balance function
                                        cout << "check balance selected." << endl;
                                        break;
                                    case 3:
                                        // change mpesa pin function
                                        cout << "change mpesa pin selected." << endl;
                                        break;
                                    case 4:
                                        // change language function
                                        cout << "change language selected." << endl;
                                        break;
                                    case 5:
                                        // update customer menu function
                                        cout << "update customer menu selected." << endl;
                                        break;
                                    case 6:
                                        //Go back 
                                        break;
                                    case 0:
                                        // Go back to the main menu
                                        break;
                                    default:
                                        cout << "Invalid option entered" << endl;
                                }
                            } while (option != 0);
                            break;
                                    case 0:
                                        //exit the program
                                        break;
                                    default:
                                        cout << "Invalid option entered" << endl;
                                }
                            } while (option != 0 && option !=6);
                            break;
                                
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid option entered" << endl;
        }
    } while (option != 0);

    return 0;
}
