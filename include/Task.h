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
 * Task.AssociatedResources
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
    vector<int> associated_issue;
    vector<int> associated_resources;

public:
    Task(int unique_id, string name, string description, string start_date, string end_date, int expected_effort,
         bool milestone, int dependency, int percent_completion, vector<int> associated_issue, vector<int> associated_resources);
    string get_description();
    string get_start_date();
    string get_end_date();
    int get_expected_effort();
    bool get_milestone();
    int get_dependency();
    int get_percent_completion();
    vector<int> get_associated_issue();
    vector<int> get_associated_resources();
    void set_description(string description);
    void set_start_date(string start_date);
    void set_end_date(string end_date);
    void set_expected_effort(int expected_effort);
    void set_milestone(bool milestone);
    void set_dependency(int dependency);
    void set_percent_completion(int percent_completion);
    void set_associated_issue(vector<int> associated_issue);
    void set_associated_resources(vector<int> associated_resources);
    void print();


};


#endif //INC_380_PROJECT_TASK_H
