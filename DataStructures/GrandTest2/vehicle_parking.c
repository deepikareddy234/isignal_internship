#include<stdio.h>
#include<string.h>

struct Vehicle{
    char number[15];
    int inTime;
    int outTime;
};

struct Vehicle bike,car;
int bikeCount=0,carCount=0;

void inputVehicle(){
    int type;
    printf("Select Vehicle Type\n1.Bike 2.Car\nEnter choice: ");
    scanf("%d",&type);
    if(type==1){
        printf("Enter Bike Number Plate: ");
        scanf("%s",bike.number);
        printf("Enter In Time (in hours): ");
        scanf("%d",&bike.inTime);
        printf("Enter Out Time (in hours): ");
        scanf("%d",&bike.outTime);
        bikeCount=1;
        printf("Bike parked successfully\n");
    }
    else if(type==2){
        printf("Enter Car Number Plate: ");
        scanf("%s",car.number);
        printf("Enter In Time (in hours): ");
        scanf("%d",&car.inTime);
        printf("Enter Out Time (in hours): ");
        scanf("%d",&car.outTime);
        carCount=1;
        printf("Car parked successfully\n");
    }
    else{
        printf("Invalid vehicle type\n");
    }
}

void displayVehicles(){
    printf("\nAdmin Vehicle Report\n");
    printf("Bikes Parked: %d\n",bikeCount);
    printf("Cars Parked: %d\n",carCount);
}

void generateBill(){
    char search[15];
    int hours,bill;
    printf("Enter Vehicle Number Plate for Bill: ");
    scanf("%s",search);
    if(bikeCount==1 && strcmp(search,bike.number)==0){
        hours=bike.outTime-bike.inTime;
        bill=hours*30;
        printf("Vehicle Type: Bike\n");
        printf("Parking Hours: %d\n",hours);
        printf("Total Bill Amount: %d\n",bill);
    }
    else if(carCount==1 && strcmp(search,car.number)==0){
        hours=car.outTime-car.inTime;
        bill=hours*50;
        printf("Vehicle Type: Car\n");
        printf("Parking Hours: %d\n",hours);
        printf("Total Bill Amount: %d\n",bill);
    }
    else{
        printf("Vehicle number not found\n");
    }
}

int main(){
    int ch;
    while(1){
        printf("\n1.Enter Vehicle 2.View Vehicles 3.Generate Bill 4.Exit\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: inputVehicle(); break;
            case 2: displayVehicles(); break;
            case 3: generateBill(); break;
            case 4: printf("Exiting Vehicle Parking Management System\n"); return 0;
            default: printf("Invalid choice\n");
        }
    }
}

