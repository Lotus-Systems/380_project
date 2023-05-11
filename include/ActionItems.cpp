#include "ActionItems.h"
#include <iostream>
using namespace std;

ActionItems::ActionItems(int unique_id, string name, string description, string priority, string severity, 
						double date_raised, double date_assigned, double exp_compl_date, double act_compl_date,	
						string status, string status_description, double update_date, vector<int> task_id) : base_class(unique_id, name) {
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

string ActionItems::get_description() {
	return this->description;
}

string ActionItems::get_priority() {
	return this->priority;
}

string ActionItems::get_severity() {
	return this->severity;
}

double ActionItems::get_date_raised() {
	return this->date_raised;
}

double ActionItems::get_date_assigned() {
	return this->date_assigned;
}

double ActionItems::get_exp_compl_date() {
	return this->exp_compl_date;
}

double ActionItems::get_act_compl_date() {
	return this->act_compl_date;
}

string ActionItems::get_status() {
	return this->status;
}

string ActionItems::get_status_description() {
	return this->status_description;
}

double ActionItems::get_update_date() {
	return this->update_date;
}

vector<int> ActionItems::get_task_id() {
	return this->task_id;
}

void ActionItems::set_description(string description) {
	this->description = description;
}

void ActionItems::set_priority(string priority) {
	this->priority = priority;
}

void ActionItems::set_severity(string severity) {
	this->severity = severity;
}

void ActionItems::set_date_raised(double date_raised) {
	this->date_raised = date_raised;
}

void ActionItems::set_date_assigned(double date_assigned) {
	this->date_assigned = date_assigned;
}

void ActionItems::set_exp_compl_date(double exp_compl_date) {
	this->exp_compl_date = exp_compl_date;
}

void ActionItems::set_act_compl_date(double act_compl_date) {
	this->act_compl_date = act_compl_date;
}

void ActionItems::set_status(string status) {
	this->status = status;
}

void ActionItems::set_status_description(string status_description) {
	this->status_description = status_description;
}

void ActionItems::set_update_date(double update_date) {
	this->update_date = update_date;
}

void ActionItems::set_task_id(vector<int> task_id) {
	this->task_id = task_id;
}

void ActionItems::print() {
	cout << "ActionItems.UniqueId: " << this->unique_id << endl;
	cout << "ActionItems.Name: " << this->name << endl;
	cout << "ActionItems.Description: " << this->description << endl;
	cout << "ActionItems.Priority: " << this->priority << endl;
	cout << "ActionItems.Severity: " << this->severity << endl;
	cout << "ActionItems.DateRaised: " << this->date_raised << endl;
	cout << "ActionItems.DateAssigned: " << this->date_assigned << endl;
	cout << "ActionItems.ExpectedCompletionDate: " << this->exp_compl_date << endl;
	cout << "ActionItems.ActualCompletionDate: " << this->act_compl_date << endl;
	cout << "ActionItems.Status: " << this->status << endl;
	cout << "ActionItems.StatusDescription: " << this->status_description << endl;
	cout << "ActionItems.UpdateDate: " << this->update_date << endl;
	cout << "ActionItems.TaskId: ";
	for (int i = 0; i < this->task_id.size(); i++) {
		cout << this->task_id[i] << " ";
	}
	cout << endl;
}