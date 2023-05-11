//
// Created by lotus-systems on 5/11/23.
//

#ifndef INC_380_PROJECT_DECISION_H
#include "base_class.h"
#define INC_380_PROJECT_DECISION_H

/*
 * Decisions.Description,
 * Decisions.DateCreated,
 * Decisions.DateNeeded,
 * Decisions.DateMade,
 * Decisions.ExpectedCompletionDate,
 * Decisions.ActualCompletionDate,
 * Decisions.MeetingNotes,
 * Decisions.Status,
 * Decisions.ReferenceDocuments
 * Decisions.AssociatedIssue
 * Decisions.AssociatedResource
 */

class Decision: public base_class {
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
    Decision(string description, string date_created, string date_needed, string date_made, string expected_completion_date, string actual_completion_date, string meeting_notes, string status, string reference_documents, int associated_issue, int associated_resource);
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
    void set_description(string description);
    void set_date_created(string date_created);
    void set_date_needed(string date_needed);
    void set_date_made(string date_made);
    void set_expected_completion_date(string expected_completion_date);
    void set_actual_completion_date(string actual_completion_date);
    void set_meeting_notes(string meeting_notes);
    void set_status(string status);
    void set_reference_documents(string reference_documents);
    void set_associated_issue(int associated_issue);
    void set_associated_resource(int associated_resource);
    void print();

};


#endif //INC_380_PROJECT_DECISION_H
