//
//  main.cpp
//  CSCI373_Assigment3.cpp
//
//  Created by Florinda Ponari on 10/26/23.

#include <iostream>
#include <list>

using namespace std;

class Question{
    
private:
    
    int first_operation;
    char operation;
    int second_operation;
    int attempts;
    bool correct_answers;
    
    
public:
    Question(): attempts(0), correct_answers(false){}
    
    void generateQuestion() {
        srand(static_cast<unsigned int>(time(nullptr)));
        
        first_operation = rand() % 101;
        second_operation = rand() % 101;
        
        int op = rand() % 4;
        
        switch (op) {
            case 0:
                operation = '+';
                break;
            case 1:
                operation = '-';
                while (second_operation >= first_operation) {
                    second_operation = rand() % 101;
                }
                break;
            case 2:
                operation = '*';
                break;
            case 3:
                operation = '/';
                while (second_operation == 0 || first_operation % second_operation != 0) {
                    second_operation = rand() % 101;
                }
                break;
        }
    }
    
    void incrementAttempts() {
        attempts++;
    }
    
    void setCorrectAnswer() {
        correct_answers = true;
    }
    
    int getFirstOperation() const {
        return getFirstOperation();
    }
    
    char getOperation() const {
        return operation;
    }

    int getSecondOperation() const {
        return second_operation;
    }
    
    int getAttempts() const {
        return attempts;
    }
    
    bool isAnsweredCorrectly() const {
        return isAnsweredCorrectly();
    }
};

    int main() {
        list<Question> history;
        int choice;
        };

        void displayResultsSummary(const list<Question>& history) {
           
        }

        void displayHistory(const list<Question>& history) {
            
        }


            do {
                cout << "Menu:" << endl;
                cout << "1. Write a question" << endl;
                cout << "2. Display results summary" << endl;
                cout << "3. Display history" << endl;
                cout << "4. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 1: {
                        Question q;
                        q.generateQuestion();
                        history.push_back(q);
                        cout << "Question generated: " << q.getFirstOperation() << " " << q.getOperation() << " " << q.getSecondOperation() << endl;
                        break;
                    }
                    case 2:
                        displayResultsSummary(history);
                        break;
                        iting the application." << endl;
                                                break;
                                            default:
                                                cout << "Invalid choice. Please enter a valid option." << endl;
                                        }
                                    } while (choice != 4);
                    case 3:
                        displayHistory(history);
                        break;
                    case 4:
                        cout << "Ex
            return 0;
        }




