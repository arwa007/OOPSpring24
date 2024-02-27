#include <iostream>
#include <string>

using namespace std;

class Pet {
private:
    string healthStatus;
    int hungerLevel;
    string skills[2]; // Assuming each pet has a maximum of 2 skills

public:
    Pet(string healthStatus, int hungerLevel, string skill1, string skill2)
        : healthStatus(healthStatus), hungerLevel(hungerLevel) {
            skills[0] = skill1;
            skills[1] = skill2;
    }

    void displayPetDetails(int petNumber) {
        cout << "Displaying info for pet " << petNumber << endl;
        cout << "Health Status: " << healthStatus << endl;
        cout << "Hunger Level: " << hungerLevel << endl;
        cout << "Skills:" << endl;
        for (int i = 0; i < 2; ++i) {
            if (!skills[i].empty()) {
                cout << skills[i] << endl;
            }
        }
        cout << "-----------------------------" << endl;
    }

    int getHungerLevel() const {
        return hungerLevel;
    }
};

class Adopter {
private:
    string adopterName;
    pair<int, Pet*> adoptedPets[10]; // Assuming an adopter can adopt up to 10 pets
    int petCounter;

public:
    Adopter(string name) : adopterName(name), petCounter(0) {}

    void adoptPet(Pet& pet) {
        petCounter++;
        adoptedPets[petCounter] = make_pair(petCounter, &pet);
        cout << adopterName << " has adopted a new pet!" << endl;
    }

    void returnPet(int petNumber) {
        bool found = false;
        for (int i = 0; i < 10; ++i) {
            if (adoptedPets[i].first == petNumber) {
                found = true;
                for (int j = i; j < 9; ++j) {
                    adoptedPets[j] = adoptedPets[j + 1];
                }
                petCounter--;
                cout << "Pet returned successfully." << endl;
                break;
            }
        }
        if (!found) {
            cout << "Pet not found in adopted records." << endl;
        }
    }

    void displayAdoptedPets() {
        cout << adopterName << "'s Adopted Pets:" << endl;
        for (int i = 1; i <= petCounter; ++i) {
            adoptedPets[i].second->displayPetDetails(adoptedPets[i].first);
        }
    }
};

int main() {

    cout<<"Name: Arwa Feroze"<<endl<<"ID: 23k-0022"<<endl;
    // Instantiate pets
    Pet pet1("Healthy", 5, "Fetch", "Sit");
    Pet pet2("Healthy", 6, "Climbing", "Purring");

    // Instantiate adopters
    Adopter mike("Mike");
    Adopter sarah("Sarah");

    // Mike adopts pet1
    mike.adoptPet(pet1);

    // Sarah adopts pet2
    sarah.adoptPet(pet2);

    // Display adopted pets
    mike.displayAdoptedPets();
    sarah.displayAdoptedPets();

    // Try returning a pet
    mike.returnPet(3); // Pet not found

    // Return pet1
    mike.returnPet(1);

    // Display adopted pets after returning pet1
    mike.displayAdoptedPets();

    return 0;
}
