#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

#define MAX_FLIGHT 50
#define MAX_PESSENGERS_PER_FLIGHT 100

struct Flight
{
    char flightNumber[20];
    char destination[50];
    int capacity;
    int numPessengers;
    char passengers[MAX_PESSENGERS_PER_FLIGHT][50];
};


void displayFlights(const struct Flight flights[],int numFlights)
{
    printf("\n--- Flights Information ---\n");
    for(int i = 0; i < numFlights; i++){
        printf("Flights %s to %s (%d/%d passengers)\n",
        flights[i].flightNumber, flights[i].destination,flights[i].numPessengers,flights[i].capacity);
        for(int j = 0; j < flights[i].numPessengers; j++){
            printf("Passengers %d: %s\n",j+1,flights[i].passengers[i]);
        }
        printf("-------------------------------\n");
    }
};

void addPassengers(struct Flight *flight, const char *passengerName){
    if(flight -> numPessengers < flight -> capacity){
        strcpy(flight -> passengers[flight -> numPessengers],passengerName);
        flight -> numPessengers++;
        printf("Passengers %s added to the flight %s. \n",passengerName, flight -> flightNumber);
    }else{
        printf("Flight %s is full.Cannot add more passengers.\n",flight -> flightNumber);
    }
}

int main(){
    struct Flight flights[MAX_FLIGHT];
    int numFlights = 0;
    int choice;
    do{
        printf("\nAirport Management System\n");
        printf("1. Display Flights\n");
        printf("2. Add Flight\n");
        printf("3. Add Passengers to Flight\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                displayFlights(flights, numFlights);
                break;

            case 2:
                if(numFlights < MAX_FLIGHT){
                    printf("Enter flight number : ");
                    scanf("%s", flights[numFlights].flightNumber);
                    printf("Enter destination : ");
                    scanf("%s", flights[numFlights].destination);
                    printf("Enter capacity : ");
                    scanf("%s", flights[numFlights].capacity);
                    flights[numFlights].numPessengers = 0;
                    
                    numFlights++;

                    printf("Flight added successfully!\n");
                }else{
                    printf("Maximum number of flights reached.\n");
                }
                break;

            case 3:
                printf("Enter the flight number : ");
                char flightNumber[20];
                scanf("%s", flightNumber);

                int flightIndex = -1;
                for(int i = 0; i < numFlights; i++){
                    if(strcmp(flights[i].flightNumber,flightNumber) == 0){
                        flightIndex = i;
                        break;
                    }
                }

            if(flightIndex != -1){
                printf("Enter passengers name : ");
                char passengerName[50];
                scanf("%s", passengerName);

                addPassengers(&flights[flightIndex], passengerName);
            }else{
                printf("Flight not found.\n");
            }
                break;
            
            case 4:
                printf("Exiting the program. Thank you!\n");
                    break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
        
        while(choice != 4);

    return 0;
}
