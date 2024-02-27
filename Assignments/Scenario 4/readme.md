**Scenario 4**<br>
You’re being hired to write an application for different rides in a Theme Park. You’re working on the Roller
Coaster(woohoo!!). The Theme Park has provided you with the relevant attributes for your Roller Coaster
class, and they are as follows:<br><br>
● Name (of the attraction- some creative name)<br>
● Height (maximum height that the roller coaster can reach)<br>
● Length (total length of the roller coaster track)<br>
● Speed (of the roller coaster)v
● Capacity (amount of people that can be seated at once)<br>
● CurrentNumRiders (number of passengers/riders currently seated in the roller coaster)<br>
● RideInProgress (a Boolean flag, depicting whether the ride is currently in progress or not)<br><br>
For the functionality, they have provided the following information:<br>
● Constructors:<br>
● Default – Should set the name to “roller coaster”, height to 500 meters, length to 2000 meters, and
capacity to 20 people. The ride should not be in progress by default.<br>
● Parameterized – Should set the values as provided by the user. However, it should not accept a
Boolean to change the ride in progress flag. It should also verify if the capacity of people is in
multiples of two or three, if it is not a multiple of two or three, it should roundit to the closest
multiple of two. In addition to that, the capacity should always be greater than 3.<br>
● Appropriate Getter and Setter functions for the available variables. The same checks should be
applied for the capacity variable, as applied in the parameterized constructor.<br>
● A function to load/seat the riders into the roller coaster – Passengers/Riders can only be seated into
the roller coaster if the ride is not in progress, and if there is sufficient space for all the riders.In
case there is an excess number of riders compared to the available spaces, it should return the
number of riders that were not seated successfully, otherwise it should return 0.<br>
● A function to start the ride – This function can only be called if a ride is not in progress, if a ride is
in progress, it should return -1. If a ride is not in progress, it needs to verify that all the seats have
been occupied by the riders. In case all the seats are not occupied, it should return the number of
empty seats.<br>
● A function to stop the ride – This function can only be called if a ride is in progress. This will stop
the ride.<br>
● A function to unload the riders from the roller coaster – Passengers/Riders can only be unloaded
from the roller coaster if they ride is not in progress.<br>
● A function to accelerate the roller coaster – Every time this function is called, it should increase the
speed of the roller coaster by the last non-zero digit of your roll number (If your roll number is
2034 or 2040, it should increase the speed by 4)<br>
● A function to apply brakes to slow down the roller coaster – Every time this function is called, it
should decrease the speed of the roller coaster by the first non-zero digit of your roll number. (If
your roll number is 2034 or 0203, it should decrease the speed by 2)<br><br>
In your main function, create two roller coaster objects by using both the constructors. Use the second
object to demonstrate that your roller coaster adheres to all the conditions specified in this question.

**OUTPUT**
![image](https://github.com/arwa007/OOPSpring24/assets/142319755/eea520e4-43f0-46ef-aaf6-9c246ed279f9)
