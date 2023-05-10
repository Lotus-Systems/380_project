#include "ActionItems.h"
#include <iostream>
using namespace std;

ActionItems::ActionItems(int unique_id, string name, string description, string priority, string severity, double date_raised, double date_assigned, double exp_compl_date, double act_compl_date, string status, string status_description, double update_date, vector<int> task_id) : base_class(unique_id, name) {
	this->description = description;
	this->priority = priority;
	this->severity = severity;
	this->date_raised = date_raised;
	this->date_assigned = date_assigned;
	this->exp_compl_date = exp_compl_date;
	this->act_compl_date = act_compl_date;
	this->status = status;
	this->status_description = status_description;
	this->update_date = update_date;
	this->task_id = task_id;
}