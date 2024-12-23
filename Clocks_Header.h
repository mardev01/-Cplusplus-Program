/*
 * Clocks_Header.h
 *
 * Date: 11/17/2024
 * Author: Marwan Alrifaie
 */

#include <iostream>
#include <iomanip>  // To format the output using setw and setfill
#include <cstdlib>  // For system("CLS") to clear the screen

using namespace std;

// Define a class for the 12-hour clock
class Clock12 {
public:
    int hours = 12, minutes = 0, seconds = 0; //// Set initial time to 12:00:00 AM
    string meridian = "AM"; // This keeps track if it's morning AM or afternoon PM

    // Function to add one hour to the clock
    void addHour() {
        if (++hours > 12) {
            hours = 1; // increase hour count; reset to 1 after 12

            meridian = (meridian == "AM") ? "PM" : "AM"; // if it was AM switch to PM and vice versa
        }
    }

    // function to add one minute to the clock
    void addMinute() {
        if (++minutes >= 60) { // check if minutes reach 60 to roll over to next hour
            minutes = 0; // reset minutes to zero
            addHour(); // call addMinute to increase the hour by one
        }
    }

    // function to add one second to the clock
    void addSeconds() {
        if (++seconds >= 60) { // increase seconds and check if they reach 60
            seconds = 0; // when seconds reach 60, they roll over to zero starting a new minute
            addMinute(); // increae by 1 minute once it completes 60 seconds
        }
    }
};

// Define a class for the 24-hour clock
class Clock24 {
public:
    int hours = 0, minutes = 0, seconds = 0; // start with the clock set to 00:00:00 

    // method to add one hour
    void addHour() {
        hours = (hours + 1) % 24; // change back to 00:00 if 1 hour added to 23:00
    }

    //  method to add one minute
    void addMinute() {
        if (++minutes >= 60) { // check for all roll-over and increase minutes by 1
            minutes = 0; // reset minutes after they hit 60 and start a new hour 
            addHour(); // move 1 hour forward 
        }
    }

    // method to add one second
    void addSeconds() {
        if (++seconds >= 60) { // check for all roll-over and increase seconds by 1
            seconds = 0; // reset seconds after they hit 60 and start a new minute
            addMinute(); // move 1 minute forward
        }
    }
};