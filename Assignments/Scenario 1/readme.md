**Scenario 1:** <br>
You are tasked with designing a platform named Virtual Pet Adoption System where users can adopt and
care for virtual pets with advanced capabilities. The system comprises two essential classes: "Pet" and
"Adopter." Your goal is to implement the system with extended features to enhance user experience and
satisfaction.<br><br>
Pet Class:<br>
The Pet class represents virtual pets available for adoption. It has following features:<br>
● healthStatus: A string indicating the health status of the pet (e.g., "Healthy," "Sick").<br>
● hungerLevel: An integer representing the pet's hunger level.<br>
● happinessLevel: An integer representing the pet's happiness level.<br>
● specialSkills: A list containing special skills possessed by the pet.<br>
Implement the following member functions within the Pet class:<br>
● displayPetDetails(): Displays detailed information about the pet, including happiness level, health
status, hunger level, and special skills.<br>
● updateHappiness(): Updates the pet's happiness level based on user interactions.<br>
● updateHealth(): Updates the health status of the pet, considering any changes in health.<br>
● updateHunger(): Updates the hunger level of the pet, accounting for feeding or other relevant
actions.<br>
Moreover, if a pet is hungry their happiness also decreases by 1 and vice versa. And if you feed it the
happiness increases by 1 upto max 10 happiness.<br><br>
Adopter Class:<br>
The Adopter class serves as a representation of users who are enthusiastic about adopting virtual pets. In
order to enrich the functionality of this class, you are tasked with incorporating the following features:
adopterName and adopterMobileNum, these attributes should be initialized during the creation of an
Adopter object. A list named adoptedPetRecords within the Adopter class. This list should be responsible
for maintaining detailed records of the adopted pets by the respective adopter.<br>
Implement the following member functions within the Adopter class:<br>
● adoptPet(): Allows the adopter to adopt a virtual pet and records its details.<br>
● returnPet(): Enables the adopter to return a pet, updating records accordingly.<br>
● displayAdoptedPets(): Displays detailed information about all adopted pets, including their species,
happiness, health, hunger, and skills.<br>
Create instances of the extended Pet class, showcasing diverse characteristics and skills for virtual pets.<br>
Instantiate objects of the enhanced Adopter class to represent users interested in adopting virtual pets.<br>
Demonstrate the functionalities of both classes by simulating the adoption, care, and interaction with virtual
pets.

**Output**
![image](https://github.com/arwa007/OOPSpring24/assets/142319755/8d6c43c7-1f38-40be-97b5-02022f1bae31)
