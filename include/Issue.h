//
// Created by lotus-systems on 5/4/23.
//

#include "base_class.h"
#include "Task.h"
#include <vector>

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
    int associated_task;
    int associated_action_items[MAX_ARRAY_SIZE] = {0};
    int associated_decisions[MAX_ARRAY_SIZE] = {0};

public:
    Issue(int unique_id, string name, string description, string expected_completion_date, string actual_completion_date, int associated_task, int* associated_action_items, int* associated_decisions);
    Issue(int unique_id, string name, string description);
    string get_description();
    string get_expected_completion_date();
    string get_actual_completion_date();
    int get_associated_task();
    int* get_associated_action_items();
    int* get_associated_decisions();
    void set_description(string _description);
    void set_expected_completion_date(string _expected_completion_date);
    void set_actual_completion_date(string _actual_completion_date);
    void set_associated_tasks(int _associated_task);
    void set_associated_action_items(int* _associated_action_items);
    void set_associated_decisions(int* _associated_decisions);
    void save(ostream& f);
    void load(istream& f);
    void print();

};


#endif //INC_380_PROJECT_ISSUE_H
