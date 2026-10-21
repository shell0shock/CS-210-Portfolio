# CS-210-Portfolio

*Portfolio Project for SNHU CS210 - Programming Languages*



>The point of this portfolio project is to showcase one of the projects that I did for my class, this repository includes all the necessary files to compile it yourself and see how it functions and runs, as well as seeing my thought processes through the code comments 


## <ins>Project Summary: Project Three</ins>
This project involved the use of classes, maps and other key C++ aspects we learned through the duration of the course. The goal of this project was to utilize file input and output as well as protected data members to read, parse, and depending on user input display specific information about the contents of the file. Utilizing file input and output streams we parsed the file and created a backup file that would contain the requested output in case of early termination.


## <ins> What I feel went well:</ins>
I feel a though my program logic and class structure went well, I was able to utilize private and public dat members and functions to restrict access to members and data that isn't needed to other parts of the program, utilizing abstraction to ensure that the internal workings of the program and methods for handling the data and files were not needlessly presented to the user, instead relying on the built out menu choices and user input to ensure that only the expected inputs and operations were performed.

## <ins>What I would Improve</ins>
If I could go back and make some changes to my code, I think the area I would work on the most would be to utilize more functions, instead of using a do-while loop I could have written additional functions for the menu displays, this would have allowed for a cleaner main function as well as allowing me to restructure the implementation of the main logic so I could more easily add additional features. Using a function for the main function's logic I could have also moved away from switch statements to utilize more in depth user input validation.

## <ins>What did I find the most challenging?</ins>
For me, I often suffer from "blank page syndrome" so that's something that will often hinder my initial progress, I spent more time than I would have liked on planning and drawing out my planned program logic. Aside from that, using maps with files was challenging for me as the only other map usage was a few instances here and there for practicing and learning the syntax and usage, applying maps to perform the operations I wanted was trickier than I anticipated and required me to dig into some outside resources and play around with maps in different contexts to get a feel for it. One of the parts that really tripped me up was iterations through maps, in one instance I was able to do it no problem after looking into some docs and resources, but I was unable to apply the same logic in another instance as even the iteration was the same, the intended action varied greatly; the difference in reading versus writing data using maps was a large time sync for me. I utilized w3schools and "The C++ Programming Language" book as a reference to help me figure this part out, w3schools was particularly useful for different syntax variations helped a lot.

## <ins>Skills from this project I'll carry forward</ins>
The use of maps and utilizing classes for various problem sets will definitely help me out the most, I can see how using classes as a blueprint for my program logic can result in extremely useful and reusable segments of code so that I can iterate off of things I've done in the past and improve upon them. This combined with the problem solving skills I've developed throughout the duration of this project will prove to be invaluable as I learn and grow more in the field of Software Engineering.

## <ins>Maintenance, Readability and Adaptability of this project</ins>
Utilizing separate classes, methods and a clean main function allowed me to segment off the main program logic so that if needed I could alter and augment the functionality of this project, for instance without altering my main function I can edit the output and functionality of the menu options or use user input to find the file to read, the structure I used for this project allowed me to keep the code readable while simultaneously providing the opportunity for future edits and additions to the code. Adding subclasses or additional functions would only require adding a few lines into the menu display in my main function and altering the switch cases which in the grand scheme of things is significantly more modular than if it was all written in a single file.  
