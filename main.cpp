#include <iostream>

int main()
{
    int point = 0;
    int reply;

     // Question 1
     std::cout << "[1] 550 + 100 - 200 = "; // Print question 1 to the user
     std::cin >> reply;                     // Take input from user

     if(reply == 450){                      // Check if user's answer is correct
        std::cout << "True!" << std::endl;  // Print True if correct
        point++;                            // Increase point count for correct answer
     }
     else{
        std::cout << "False!" << std::endl; // Print False if wrong
     }

     // Question 2
     std::cout << "[2] 200 % 3 = ";         // Print question 2
     std::cin >> reply;                     // Take user's answer

     if(reply == 2){                        // Check correctness
        std::cout << "True!" << std::endl;  // Correct
        point++;                            // Increase point
     }
     else{
        std::cout << "False!" << std::endl; // Incorrect
     }

     // Question 3
     std::cout << "[3] 200 % 10 = ";        // Print question 3
     std::cin >> reply;                     // Input from user

     if(reply == 0){                        // Check if answer is correct
        std::cout << "True!" << std::endl;  // Correct
        point++;                            // Increment point
     }
     else{
        std::cout << "False!" << std::endl; // Incorrect
     }

     // Question 4
     std::cout << "[4] 128 + 349 - 57 = "; // Question 4
     std::cin >> reply;                     // Input

     if(reply == 420){                      // Check answer
        std::cout << "True!" << std::endl;  // Correct
        point++;                            // Increase score
     }
     else{
        std::cout << "False!" << std::endl; // Wrong
     }

     // Question 5
     std::cout << "[5] 900 / (15 / 3) = "; // Question 5
     std::cin >> reply;                     // User input

     if(reply == 180){                      // Check if correct
        std::cout << "True!" << std::endl;  // Correct
        point++;                            // Add point
     }
     else{
        std::cout << "False!" << std::endl; // Wrong
     }

     // Question 6
     std::cout << "[6] 720 / 12 = ";       // Question 6
     std::cin >> reply;                     // Input

     if(reply == 60){                       // Correct answer check
        std::cout << "True!" << std::endl;  // Correct
        point++;                            // Increment score
     }
     else{
        std::cout << "False!" << std::endl; // Wrong
     }

     // Question 7
     std::cout << "[7] 420 + 315 / 9 = ";  // Question 7
     std::cin >> reply;                     // User answer

     if(reply == 455){                      // Correctness check
        std::cout << "True!" << std::endl;  // Correct
        point++;                            // Add to score
     }
     else{
        std::cout << "False!" << std::endl; // Wrong
     }

     // Question 8
     std::cout << "[8] 1250 % 19 = ";      // Question 8
     std::cin >> reply;                     // Input

     if(reply == 15){                       // Check answer
        std::cout << "True!" << std::endl;  // Correct
        point++;                            // Increment point
     }
     else{
        std::cout << "False!" << std::endl; // Wrong
     }

     // Question 9
     std::cout << "[9] (360 / 5) - 42 = "; // Question 9
     std::cin >> reply;                     // User input

     if(reply == 30){                       // Check if correct
        std::cout << "True!" << std::endl;  // Correct
        point++;                            // Increment score
     }
     else{
        std::cout << "False!" << std::endl; // Wrong
     }

     // Question 10
     std::cout << "[10] 1500 - (240 / 6) = "; // Question 10
     std::cin >> reply;                       // Input from user

     if(reply == 1460){                       // Correctness check
        std::cout << "True!" << std::endl;    // Correct
        point++;                              // Increase total score
     }
     else{
        std::cout << "False!" << std::endl;   // Wrong
     }

     // Print final score
     std::cout << "Total 5 correct out of " << point << " questions." << std::endl; // Display total correct answers


  return 0;
}
