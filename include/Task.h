//
// Created by lotus-systems on 5/2/23.
//

#ifndef INC_380_PROJECT_TASK_H
#include "base_class.h"
#include <string>
#include <vector>
#define INC_380_PROJECT_TASK_H

/*
 * Task.UniqueId,
 * Task.Name,
 * Task.Description,
 * Task.StartDate,
 * Task.EndDate,
 * Task.ExpectedEffort,
 * Task.Milestone,
 * Task.Dependency,
 * Task.PercentCompletion
 * Task.AssociatedIssue
 * Task.AssociatedResource
 */


class Task: public base_class {
protected:
    string description;
    string start_date;
    string end_date;
    int expected_effort;
    bool milestone;
    int dependency;
    int percent_completion;
    int associated_issues[MAX_ARRAY_SIZE];
    int associated_resource;
    int associated_deliverable;

public:
    Task(int unique_id, string name, string description, string start_date, string end_date, int expected_effort,
         bool milestone, int dependency, int percent_completion, int* associated_issues, int associated_resource, int associated_deliverable);
    Task(int unique_id, string name);
    string get_description();
    string get_start_date();
    string get_end_date();
    int get_expected_effort();
    bool get_milestone();
    int get_dependency();
    int get_percent_completion();
    int* get_associated_issues();
    int get_associated_resource();
    int get_associated_deliverable();
    void set_description(string _description);
    void set_start_date(string _start_date);
    void set_end_date(string _end_date);
    void set_expected_effort(int _expected_effort);
    void set_milestone(bool _milestone);
    void set_dependency(int _dependency);
    void set_percent_completion(int _percent_completion);
    void set_associated_issue(int* _associated_issue);
    void set_associated_resources(int _associated_resource);
    void set_associated_deliverable(int _associated_deliverable);
    void print();
};


#endif //INC_380_PROJECT_TASK_H
