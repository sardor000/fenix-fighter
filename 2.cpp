#include <iostream>
#include <iomanip>
#include <vector>
struct Reservation{

   std :: string name ;
    int roomnumber;
    int nights;
};
int main (){
    std:: vector <Reservation> reservations;
    int choise ;
    do {
        std:: cout <<"1.Zabronirovat mesto"
<<std::endl;
        std:: cout <<"2.Prosmotret broni"
<<std::endl;
        std:: cout <<"3.Viyte" <<std::endl;
        std:: cout <<"Vibirite deystvie:";
        std:: cin >> choise ;
        if (choise == 1) {
            Reservation r;
            std:: cout <<"Vvedite imya:";
            std:: cin >>r.name ;
            std:: cout <<"Vvedite nomer komnati:";
            std:: cin >> r.roomNumber;
            std:: cout << "Vvedite kolichestvo nochey;";
            std:: cin >> r.nights;
            reservations.push_back(r);
            std:: cout <<"Mesto uspeshno zabronirovano!"<< std:: endl;
        } else if (choise ==2) {
            std:: cout <<std:: setw(10) << std::endl;
                for (const auto& r :reservations){
                    std:: cout << std::stw(10)<< r.name  
                    <<std::setw(10) << r.roomNumber <<
                    std::setw(10) << r.nights << std::endl;
                }
                
                }else if (choise !=3){
                    std::cout <<"Nekorrektniy vibor. Poprobuyte yeshyo raz."
                    << std::endl;
                }
                std::cout <<std:: endl;
        } while (choise !=3);
        return ;
}
}