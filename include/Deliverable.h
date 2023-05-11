//
// Created by lotus-systems on 5/4/23.
//

#include "base_class.h"

#ifndef INC_380_PROJECT_DELIVERABLE_H
#define INC_380_PROJECT_DELIVERABLE_H

/*
 * Deliverable.UniqueID,
 * Deliverable.Name,
 * Deliverable.Description,
 * Deliverable.ExpectedCompletionDate,
 * Deliverable.ActualCompletionDate
 * Deliverable.AssociatedTasks
 * Deliverable.AssociatedRequirements
 */


class Deliverable : public base_class{
protected:
    int unique_id;
    string name;
    string description;
    string expected_completion_date;
    string actual_completion_date;
    int associated_tasks[MAX_ARRAY_SIZE];
    int associated_requirements[MAX_ARRAY_SIZE];

public:
    Deliverable(int unique_id, string name, string description, string expected_completion_date,
                string actual_completion_date, int associated_tasks, int associated_requirements);
    int get_unique_id();
    string get_name();
    string get_description();
    string get_expected_completion_date();
    string get_actual_completion_date();
    int get_associated_tasks();
    int get_associated_requirements();
    void set_unique_id(int unique_id);
    void set_name(string name);
    void set_description(string description);
    void set_expected_completion_date(string expected_completion_date);
    void set_actual_completion_date(string actual_completion_date);
    void set_associated_tasks(int associated_tasks);
    void set_associated_requirements(int associated_requirements);
    void print();

};


#endif //INC_380_PROJECT_DELIVERABLE_H
