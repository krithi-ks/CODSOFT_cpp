// C++ PROGRAM - CODSOFT
// TASK 4 - TO-DO LIST

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct ToDo 
{
    string info;
    bool finished = false;
} todo;

vector<ToDo> task;

// Function to add the task
void addTask() 
{
    ToDo todo;
    cin.ignore(); // Clears any leftover characters in the input buffer
    cout << "\nTask Description: "; 
    getline(cin, todo.info);
    task.push_back(todo);
    cout << "\nTask Added!\n";
}

// Function to view the tasks
void viewTasks() 
{
    if (task.empty()) 
        cout << "\nEmpty list!\n";
    else
    {
        cout << "\nYOUR TO-DO LIST:\n";
        for (int i = 0; i < task.size(); ++i)
            cout << "\n" << i + 1 << ". " << task[i].info << "   [" << (task[i].finished ? "Completed" : "Pending") << "]\n";
    }
}

// Function to mark task as completed
void markCompleted() 
{
    int n; 
    cout << "\nTask number to mark as completed: "; 
    cin >> n;
    cin.ignore();
    if (n > 0 && n <= task.size()) 
        task[n-1].finished = true;
    cout << "\nTask Marked!\n";
}

// Function to remove a task
void removeTask() 
{
    int n; 
    cout << "Task number to remove: "; 
    cin >> n;
    cin.ignore();
    if (n > 0 && n <= task.size()) 
        task.erase(task.begin() + n - 1); // Removes an element and Returns an iterator to the first element in a vector
    cout << "\nTask Removed!\n";
}

int main(void) 
{
    int choice;
    do 
    {
        cout << "\nTO-DO LIST MANAGER\n";
        cout << "1. ADD TASK\n2. VIEW TASKS\n3. MARK TASK AS COMPLETED\n4. REMOVE TASK\n5. QUIT\n";
        cout << "\nEnter your choice: ";
        
        cin >> choice;

        switch (choice) 
        {
            case 1: 
                addTask(); 
                break;
            case 2: 
                viewTasks(); 
                break;
            case 3: 
                markCompleted(); 
                break;
            case 4: 
                removeTask(); 
                break;
            case 5:
                cout << "\nExiting.....\n";
                return 0;
            default:
                cout << "\nInvalid!\n";
        }
    } 
    while (true);
}
