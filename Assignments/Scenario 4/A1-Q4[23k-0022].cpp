#include<iostream>
using namespace std;

class CoasterRide{
private:
	string title;
	float maxHeight;
	float trackLength;
	float speed;
	int capacity;
	int currentRiders;
	bool rideInProgress;

public:
	CoasterRide():title("Rolling Thunder"), maxHeight(500), trackLength(2000), capacity(20), rideInProgress(false)
	{
	
	}


	CoasterRide(string title, float maxHeight, float trackLength, float speed, int capacity, int currentRiders)
	{
		this->title = title;
		this->maxHeight = maxHeight;
		this->trackLength = trackLength;
		this->speed = speed;
		this->capacity = capacity;
		this->currentRiders = currentRiders;
		
		if(capacity<3)
		{
			cout<<"Initial capacity is insufficient (less than 3)"<<endl;
			capacity = 4;
		}
		
		if((capacity%2!=0) && (capacity%3!=0))
		{
			cout<<"Rounding the capacity of people to the nearest multiple of 2"<<endl;
			capacity = ((capacity+1)/2)*2;
		}
		}
		
	string getTitle()
	{
		return title;
	}
	
	float getMaxHeight()
	{
		return maxHeight;
	}
	
	float getTrackLength()
	{
		return trackLength;
	}
	
	float getSpeed()
	{
		return speed;
	}
	
	int getCapacity()
	{
		return capacity;
	}
	
	int getCurrentRiders()
	{
		return currentRiders;
	}
	
	bool getProgress()
	{
		return rideInProgress;
	}
	
	void setTitle(string newTitle)
	{
		this->title = newTitle;
	}
	
	void setMaxHeight(float newHeight)
	{
		this->maxHeight = newHeight;
	}

	void setTrackLength(float newLength)
	{
		this->trackLength = newLength;
	}

	void setSpeed(float newSpeed)
	{
		this->speed = newSpeed;
	}
	
	void setCapacity(int newCapacity)
	{
		this->capacity = newCapacity;
		
		if(capacity<3)
		{
			cout<<"Initial capacity is insufficient (less than 3)"<<endl;
			capacity = 4;
		}
		
		if((capacity%2!=0) && (capacity%3!=0))
		{
			cout<<"Rounding the capacity of people to the nearest multiple of 2"<<endl;
			capacity = ((capacity+1)/2)*2;
		}
	}


	void setCurrentRiders(int moreRiders)
	{
		this->currentRiders = moreRiders;
	}
	
	void setProgress(bool newState)
	{
		this->rideInProgress = newState;
	}
	
	int addRiders(int passengers)
	{
		if(getProgress()==false)
		{
			if(passengers>capacity)
			{
				int remaining = passengers - capacity;
				setCurrentRiders(passengers-capacity);
				return remaining;
			}
			else
			{
				setCurrentRiders(passengers);
				cout<<"All passengers are seated successfully"<<endl;
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	
	int beginRide()
	{
		if(getProgress()==false)
		{
			if(currentRiders==capacity)
			{
				setProgress(true);
				cout<<"Ride started successfully"<<endl;
			}
			else
			{
				int emptySeats = capacity - currentRiders;
				return emptySeats;	
			}
		}
		else
		{
			return -1;
		}
	}
	
	void endRide()
	{
		if(getProgress() == true)
		{
			setProgress(false);
			cout<<"Ride stopped successfully"<<endl;
		}
		else
		{
			cout<<"Ride is not in progress yet"<<endl;
		}
	}
	
	void unloadPassengers()
	{
		if(getProgress()==false)
		{
			this->currentRiders = 0;
			cout<<"Passengers unloaded successfully"<<endl;
		}
		else
		{
			cout<<"Passengers cannot be unloaded because the ride is in progress"<<endl;
		}
	}
	void speedUp(int rollNumber) {
        int lastDigit = rollNumber % 10;

        speed += lastDigit;

        cout << "Speeding up! New speed: " << speed << " km/h" << endl;
    }
    void slowDown(int rollNumber) {
        
        int firstDigit;

        while (rollNumber >= 10) {
            rollNumber /= 10;
        }

        firstDigit = rollNumber;

        speed -= firstDigit;
        if (speed < 0) {
            speed = 0;
        }

        cout << "Slowing down! New speed: " << speed << " km/h" <<endl;
    }


void showDetails()
{
	cout<<"Title: "<<title<<endl;
	cout<<"Max Height: "<<maxHeight<<" m"<<endl;
	cout<<"Track Length: "<<trackLength<<" m"<<endl;
	cout<<"Speed: "<<speed<<" km/h"<<endl;
	cout<<"Capacity: "<<capacity<<" passengers"<<endl;
	cout<<"Current riders: "<<currentRiders<<endl;
	cout<<"Is the ride in progress: "<<rideInProgress<<endl;
}
};

int main(){

	cout<<"Name: Arwa Feroze"<<endl<<"ID: 23k-0022"<<endl;

	CoasterRide ride1;		//using the default constructor
	cout<<"Object created using the default constructor: "<<endl;
	ride1.showDetails();
	CoasterRide ride2("ThrillMaster", 56.7, 78.9, 0, 20, 0);		//using the parameterized constructor

	//Demonstrate the functionality of the coaster ride
	cout<<endl<<"Object created using the parameterized constructor: "<<endl;
	ride2.showDetails();
	cout<<"-----------------------------------"<<endl;
	ride2.addRiders(20);
	ride2.beginRide();
	ride2.speedUp(1234);
	ride2.slowDown(1234);
	int riders = ride2.getCurrentRiders();
	cout<<"Current riders: "<<riders<<endl;
	ride2.endRide();
	ride2.unloadPassengers();
}
