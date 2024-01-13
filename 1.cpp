#include <iostream>
#include <string>

using namespace std;

class Company the booking
{
  public:
        double Service;
        
        void inputCompany(){
          cout << "Добро пожаловать в отель.Пожалуйста укажите свое имя";
          cin >> Service;
        }
};

class BookingHotel{
  public:
        string Hotel;
         
        void inputNumberOfHotelBooking(){
          cout<< "Укажите количество месть для бронирования ";
          cin >> "Место";
        } 
};

class ArrivalTime{
  public:
         string Ticket:
         
         void inputOrderTheTicket(){
           cout << "Укажите дату заезда";
           cin >> Ticket;
         }
};

int main()
{
	Company myCompany;
	myCompany.inputCompany();
	
  BookingHotel myHotel;
  Hotel.inputBookingHotel();
    
  OrderingTicket myTicket;
  Ticket.inputOrderingTicket();
    
	
	
}
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

class HotelReservation{
  static void Main(string[]args){
    Console.WriteLine("Добро пожаловать в отель.Пожалуйста укажите свое имя:!");
    string guestName = 
    Console.Readline();
    
            Console.WriteLine("Укажите количество мест:");
            int numberOfSeats =
            Convert.ToInt32(Console.Readline());
            Console.WriteLine("Укажите дату заезда:");
            Console.WriteLine("Укажите дату отъезда:");
            DateTime checkInDate = 
            Convert.ToDateTime(Console.Readline());
            bool isReservationSuccesfull = 
            MakeReservation(guestName,numberOfSeats,checkInDate,checkOutDate);
            if  (isReservationSuccesfull){
              Console.WriteLine("Место успешно забронирова.");
            }
            else{
              Console.WriteLine("Место недоступен для бронирования.");
            }
            static bool MakeReservation(string guestName,int numberOfSeats,DateTime,checkInDate,checkOutDate);
            {
              bool isReservationSuccesfull = true;
              return isReservationSuccesfull;
            }
  }
}