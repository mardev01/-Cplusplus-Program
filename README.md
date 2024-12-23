# -Cplusplus-Program
**CS-210 M01 Programming Languages**
------------------------------------------
 **Summarize the project and what problem it was solving**
------------------------------------------------------
I chose project one. I wrote my code to display and manage two clocks: a 12-hour clock and a 24-hour clock. The problem this project solves is simple: it allows users to interact with and update two different clock formats while keeping accurate time rollovers (like transitioning from AM to PM or rolling over at midnight). My program includes a menu system for the user to interact with showing both clocks side by side, and updates them in response to the users selections.
-----------------------------------------------------
What did you do particularly well?
-----------------------------------------------------
I think one of the things that I did a good job in was organizing my code into logical parts. I handled the functionality for each clock format using two classes, Clock12 and Clock24. By separating the clock logic from the menu and display code, I made the program easier to read and maintain. I also made sure that the formatting of the clocks looked neat and professional which improves the program's readability.
-----------------------------------------------------
Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
-----------------------------------------------------
Although the program works well, I could improve the input validation. Right now, it doesn’t check for invalid menu inputs like letters or symbols, which could cause unexpected behavior, and the program might output an error.
Another area for improvement is expanding the functionality of the clocks. For example, I could allow the user to set custom start times or reset the clocks to default values. Future users would benefit from these enhancements, which would improve the program's versatility.
-----------------------------------------------------
Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
-----------------------------------------------------
The most challenging part of this project was implementing the time rollover logic for the 12-hour clock. Transitioning between AM and PM after 11:59 and making sure that the hour resets to 12 instead of 0 which took some time for me to figure it out.  I resolved this by thoroughly testing and debugging the addHour and addMinute methods in the Clock12 class. Breaking the problem into smaller steps (like handling just the hour rollover first) made it easier to solve.
I was also able to solve many of the problems I faced on this project by utilizing resources and materials from Zybooks and learning from sites like www.w3schools.com
-----------------------------------------------------
What skills from this project will be particularly transferable to other projects or course work?
-----------------------------------------------------
This project helped me build several skills that I can use in other projects. For example, organizing code into classes with public and private sections taught me how to structure programs in a modular way. I also learned to think critically about edge cases (like time rollovers), which is a skill that will apply to any problem-solving scenario in programming.
-----------------------------------------------------
How did you make this program maintainable, readable, and adaptable?
-----------------------------------------------------
I made the program maintainable by writing clean and readable code. For example:

The class definitions in Clocks_Header.h are clear and well-structured, with each method having a single responsibility.
In ChadaTech.cpp, I used a switch statement for the menu system, which makes it easy to add new options later if needed.
