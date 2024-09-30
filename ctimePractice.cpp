// dH 2024-09-30
// ctimePractice;


#include <iostream>
#include <ctime>
#include <iomanip>  // For setw and setfill
#include <string>
#include <sstream>  // For ostringstream
#include <chrono>

using namespace std;

int main() {
    cout << "\n Welcome to time and date practice!\n" << endl;
    // Get the current time.
    time_t now = time(0);

    // Convert to my local system time.
    char* pCtime = ctime(&now);
    cout << " My system time is: " << pCtime << "\n" << endl;

    // Use the proper members of the tm struct to get 2024-09-30.

    // Get the current time
    time_t currentTime = time(0);

    // Convert the current time to local time structure
    tm* localTime = localtime(&currentTime);

    // Print the date in the format YYYY-MM-DD
    cout << (1900 + localTime->tm_year) << "-"
              << setw(2) << setfill('0') << (localTime->tm_mon + 1) << "-"
              << setw(2) << setfill('0') << localTime->tm_mday << endl;


    ostringstream dateStream;
    dateStream << (1900 + localTime->tm_year) << "-"
               << setw(2) << setfill('0') << (localTime->tm_mon + 1) << "-"
               << setw(2) << setfill('0') << localTime->tm_mday;

    // Store the formatted date in a string
    string arrivalDate = dateStream.str();

    // Output the arrivalDate
    cout << "Arrival Date: " << arrivalDate << endl;

    // Here is the C++ code using <chrono>
    // Get the current time from the system clock

    auto currentTime02 = chrono::system_clock::now();

    // Convert the time to a time_t object, which represents time in seconds
    time_t timeNow = chrono::system_clock::to_time_t(currentTime02);

    // Convert to local time structure
    tm localTime02 = *localtime(&timeNow);

    // Use ostringstream to format the date into a string
    ostringstream dateStream02;
    dateStream02 << put_time(&localTime02, "%Y-%m-%d");

    // Store the formatted date in a string
    string arrivalDateChrono = dateStream02.str();

    // Output the arrivalDate
    cout << "Arrival Date, compliments of <chrono>: " << arrivalDateChrono << endl;


    return 0;
}
