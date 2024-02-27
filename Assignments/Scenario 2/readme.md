**Scenario 2**<br>
You’re bored!<br>
You’re looking at the students going in and out of the seating at the dhaba at FAST. You decide to think of
it as an OOP Scenario! You’re looking at the group of students arriving at the tables outside of the dhaba,
and making mental note of how long each group of student stays at a table. For the above scenario, let’s
write a program about the tables at the dhaba.<br><br>
1. Each table has some properties:<br>
● Total available seats per table (A table can only have 4 or 8 seats)<br>
● Seats currently occupied at a table (assume only one person can occupy one seat)<br>
● Free seats at a table<br>
● Clean (Boolean flag representing the cleanliness of the table)<br><br>
2. Each table can have some functionality associated with them:<br>
● A default constructor – which should set the default table capacity to 4. Initially, a table will be
clean and no one will be seated on it.<br>
● A parameterized constructor – which should set the capacity to the capacity sent as parameter. If
the number is not 4 or 8, it should be rounded to 4 or 8 (whichever is closest).<br>
● Initially, a table will be clean and no one will be seated on it.<br>
● Encapsulate the parameters of your class properly. The capacity should not be editable once it has
been set by the constructor.<br>
● A table can be used by a group of friends – In order for the table to be used, the table must first be
clean. Whenever a group of friends is using the table, they will decide to use the table that can fit a
group of that size. (A group of 4 will be seated at a table with 4 seats, meanwhile a group of 6 will
be seated at a table with 8 seats).<br>
● People can have lunch on the table – once the lunch is finished, the table will no longer be clean.<br>
● People can leave the table with or without having lunch.<br>
● Someone can clean the table – the table can only be cleaned when no one is seated at the table.<br><br>
3. Create a global function called “OccupyTable” that accepts a Table array and size of the group of friends.
It should find a table that is not occupied and assign a table to those people. It should mention which table
has been assigned the group, and the seating capacity of the table.<br><br>
4. Create a global function called “EmptyTable” that accepts a table number and sets it to empty. This
should make proper changes to the variables present within that table object.<br><br>
5. In your main function, you are required to perform the following actions with your Table class:<br>
● Create an array of 5 tables.<br>
○ Two tables should be of capacity 8, and 3 should be of capacity 4.<br>
● Call the function OccupyTable and pass the array and 4 as its parameters. (Assume this is table 1)<br>
● Call the function OccupyTable and pass the array and 6 as its parameters. (Assume this is table 2)<br><br>

● For table 1, call the functions for:<br>
○ Using the table<br>
○ Having lunch on the table<br>
○ Leaving the table<br>
○ Cleaning the table<br>
● Call the function EmptyTable and pass the index of table 2 as its parameter.<br>

**Output**
![image](https://github.com/arwa007/OOPSpring24/assets/142319755/acad9afa-e0d7-401c-b601-0433a9a6b0d8)
