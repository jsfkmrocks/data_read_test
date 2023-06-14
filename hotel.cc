// Hotel - Jordan Brown - HW 3

//Starting Statements
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main()

{
	//Load File
    ifstream in;
    in.open("hotel.dat");

	//Declare Variables
    int floors, occ_rooms, total_rooms, total_occ_rooms;
    int total_unocc_rooms;
    double percent_full;

    in>>floors;

	//Loop
    for(int i=0; i<floors; i++){
        in>>floors>>occ_rooms;
        total_rooms += floors;
        total_occ_rooms += occ_rooms;
    }

	//Percentage Calculations
    total_unocc_rooms = total_rooms-total_occ_rooms;
    percent_full = total_occ_rooms/total_rooms;

	//Outputs
    cout<<setprecision(2)<<fixed;
    cout<<"\nTotal rooms the hotel has: "<<total_rooms<<endl;
    cout<<"Total rooms occupied: "<<total_occ_rooms<<endl;
    cout<<"Total rooms unoccupied: "<<total_unocc_rooms<<endl;
    cout<<"Percentge of rooms occupied: "<<percent_full<<"%\n"<<endl;
	
	//Ending Declaration
    return 0;
}