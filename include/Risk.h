//
// Created by lotus-systems on 5/11/23.
//

#ifndef INC_380_PROJECT_RISK_H
#include "base_class.h"
#define INC_380_PROJECT_RISK_H

/*
 * ActionItems.Description,
 * ActionItems.ExpectedCompletionDate,
 * ActionItems.ActualCompletionDate,
 * ActionItems.Description,
 * ActionItems.DateCreated,
 * ActionItems.DateAssigned,
 * ActionItems.Status,
 * ActionItems.StatusDescription
 * ActionItems.AssociatedActionItem
 *
 */

class Risk: public base_class {
protected:
    string description;
    string date_created;
    string date_needed;
    string date_made;
    string expected_completion_date;
    string actual_completion_date;
    string meeting_notes;
    string status;
    string reference_documents;
    int associated_issue;
    int associated_resource;

public:
    Risk(string description, string date_created, string date_needed, string date_made, string expected_completion_date, string actual_completion_date, string meeting_notes, string status, string reference_documents, int associated_issue, int associated_resource);
    string get_description();
    string get_date_created();
    string get_date_needed();
    string get_date_made();
    string get_expected_completion_date();
    string get_actual_completion_date();
    string get_meeting_notes();
    string get_status();
    string get_reference_documents();
    int get_associated_issue();
    int get_associated_resource();
    void set_description(string _description);
    void set_date_created(string _date_created);
    void set_date_needed(string _date_needed);
    void set_date_made(string _date_made);
    void set_expected_completion_date(string _expected_completion_date);
    void set_actual_completion_date(string _actual_completion_date);
    void set_meeting_notes(string _meeting_notes);
    void set_status(string _status);
    void set_reference_documents(string _reference_documents);
    void set_associated_issue(int _associated_issue);
    void set_associated_resource(int _associated_resource);
    void print();
};


#endif //INC_380_PROJECT_RISK_H
