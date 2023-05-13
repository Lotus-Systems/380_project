//
// Created by lotus-systems on 5/4/23.
//

#include "base_class.h"
#include <string.h>

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
    int associated_tasks[MAX_ARRAY_SIZE] = {0};
    int associated_requirements[MAX_ARRAY_SIZE] = {0};

public:
    Deliverable(int unique_id, string name, string description, string expected_completion_date,
                string actual_completion_date, int associated_tasks, int associated_requirements);
    Deliverable(int unique_id, string name, string description);
    string get_description();
    string get_expected_completion_date();
    string get_actual_completion_date();
    int* get_associated_tasks();
    int* get_associated_requirements();
    void set_description(string description);
    void set_expected_completion_date(string expected_completion_date);
    void set_actual_completion_date(string actual_completion_date);
    void set_associated_tasks(int* associated_tasks);
    void set_associated_requirements(int* associated_requirements);
    void save(ostream& f);
    void load(istream& f);
    void print();

};


#endif //INC_380_PROJECT_DELIVERABLE_H
