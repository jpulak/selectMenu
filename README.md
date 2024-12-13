# selectMenu
General Description:
Write a menu driven program that determines how fast sound travels a specified distance through wood, steel, water, or air as selected by the user.

Display a menu matching the following allowing the user to select the medium the sound will travel through.
```
    Time for Sound to Travel through a Medium given Distance

1 - Wood
2 - Steel
3 - Water
4 - Air

Enter the number of the medium:
```
When the user selects a valid medium, ask them for the distance traveled in feet. Otherwise, display an error message and ask the user to “Please run the program again.”

When a distance is greater than zero, calculate and display the seconds it takes the sound to travel through the selected medium. Otherwise, display an error message telling the user that “the distance must be greater than zero”.

Use the following speeds in feet/sec:
```
Medium	Speed (feet per second)
Wood	12,631.23
Steel	10,614.81
Water	4,714.57
Air	1,125.33
```
Use an unsigned
 int to store the menu choice (the medium).

Use doubles for your other variables and constants.

Create constants for the speeds in the mediums.

Use a switch statement to manage the decision between the various mediums.

Failure to follow the requirements for lab lessons can result in deductions to your points, even if you pass the validation tests. Logic errors, where you are not actually implementing the correct behavior, can result in reductions even if the test cases happen to return valid answers. This will be true for this and all future lab lessons.

Display Details
There is one tab before the heading of the menu.
There is one blank line between the heading and the menu choices.
There is one blank line between the menu choices and the prompt.
Display the selected medium, the time traveled and the distance with appropriate labels including units in your output.
Display the seconds rounded to exactly four digits to the right of the decimal point.
Display the feet traveled rounded to exactly two digits to the right of the decimal point.
Do not forget that the problems in Zylabs expect you to display a newline at the end of your output.
Sample Output 1:
```
    Time for Sound to Travel through a Medium given Distance

1 - Wood
2 - Steel
3 - Water
4 - Air

Enter the number of the medium: 1

Enter the distance to travel (in feet): 58

In wood it will take 0.0046 seconds to travel 58.00 feet.
```
Sample Output 2:
```
    Time for Sound to Travel through a Medium given Distance

1 - Wood
2 - Steel
3 - Water
4 - Air

Enter the number of the medium: 3

Enter the distance to travel (in feet): 72.25

In water it will take 0.0153 seconds to travel 72.25 feet.
```
Sample Output 3:
```
    Time for Sound to Travel through a Medium given Distance

1 - Wood
2 - Steel
3 - Water
4 - Air

Enter the number of the medium: 6

Error, invalid entry!
Please run the program again.
```
Sample Output 4:
```
    Time for Sound to Travel through a Medium given Distance

1 - Wood
2 - Steel
3 - Water
4 - Air

Enter the number of the medium: 2

Enter the distance to travel (in feet): -1.5

Error, the distance must be greater than zero.
```
Your output must match the output above.
