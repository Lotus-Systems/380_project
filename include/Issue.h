//
// Created by lotus-systems on 5/4/23.
//

#include "base_class.h"
#include "Task.h"

#ifndef INC_380_PROJECT_ISSUE_H
#define INC_380_PROJECT_ISSUE_H

/*
 * Issue.UniqueID,
 * Issue.Name,
 * Issue.Description,
 * Issue.ExpectedCompletionDate,
 * Issue.ActualCompletionDate
 * Issue.AssociatedTasks
 */

class Issue : public base_class {
protected:
    string description;
    string expected_completion_date;
    string actual_completion_date;
    Task* associated_tasks;

public:
    Issue(int unique_id, string name, string description, string expected_completion_date, string actual_completion_date, Task* associated_tasks);
    string get_description();
    string get_expected_completion_date();
    string get_actual_completion_date();
    Task* get_associated_tasks();
    void set_description(string description);
    void set_expected_completion_date(string expected_completion_date);
    void set_actual_completion_date(string actual_completion_date);
    void set_associated_tasks(Task* associated_tasks);
    void print();

};


#endif //INC_380_PROJECT_ISSUE_H
