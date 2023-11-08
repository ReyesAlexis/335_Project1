#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

void convertArray(const string& scheduleString, string scheduleArray[], int& count){
//converts / goes through the schedules from person1 & 2 & then stores them 

}


bool meetingDuration() { //checks to make sure the meeting time is not less 
}

// Function to calculate available meeting times
void availTime2Meet() {

}

int main(){

    ifstream inputFile("Input.txt");
    ofstream outputFile("Output.txt"); 
    

    if (!inputFile.is_open()) {
    cerr << "Error opening the input file." << endl;
    return 1;
}
        const int maxSchedules = 6; //total number of schedule intervals for each person
        const int maxAvail = 10; //  number of available meeting times ...can increase if adding more test cases
        int durationMeeting = 0, //duration of meeting
            countP1 = 0, 
            countP2 = 0,
            availCount = 0; // keeps track of the number of availabale times
        string schedule1Arr[maxSchedules];
        string schedule2Arr[maxSchedules];
        string avail[maxAvail]; //stores available meeting times
        string person1_Schedule, 
               person2_Schedule,
               person1_DailyAvail, 
               person2_DailyAvail;  
         vector<string> availabilities;

        //reads the schedule & daily availabiltiy for each person
        getline(inputFile, person1_Schedule); 
        getline(inputFile, person1_DailyAvail);
        getline(inputFile, person2_Schedule);  
        getline(inputFile, person2_DailyAvail); 
        inputFile >> durationMeeting; 
        

        //call converArray function
        convertArray(person1_Schedule, schedule1Arr, countP1);
        convertArray(person2_Schedule, schedule2Arr, countP2);
        availTime2Meet();


         if (outputFile.fail()) {
        cout << "Error opening file." << endl;
        exit(1);
        }
        else
        {
           for (int i = 0; i < availCount; i++) {
            //Now writing data to the file
            outputFile << "[ ";
            outputFile << "Available: " << avail[i] << endl;
            outputFile << "] ";
             }
        }

    
    

    //just used to help me visualize input -> outpout
    cout << "person1_Schedule = " << person1_Schedule << endl;
    cout << "person1_DailyAct = " << person1_DailyAvail << endl;
    cout << "person2_Schedule = " << person2_Schedule << endl;
    cout << "person2_DailyAct = " << person2_DailyAvail << endl;
    cout << "duration_of_meeting = " << durationMeeting << endl;

    
    inputFile.close(); 
    outputFile.close(); 


    return 0; 
}

