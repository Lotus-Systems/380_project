#ifndef ACTIONITEMS_H
#define ACTIONITEMS_H

#include "base_class.h"
#include "Task.h"
#include <string>
#include <vector>
using namespace std;
/*
 * ActionItems.UniqueID,
 * ActionItems.Name,
 * ActionItems.Description,
 * ActionItems.Priority,
 * ActionItems.Severity,
 * ActionItems.DateRaised,
 * ActionItems.DateAssigned,
 * ActionItems.ExpComplDate,
 * ActionItems.ActComplDate
 * ActionItems.Status
 * ActionItems.StatusDescription
 * ActionItems.UpdateDate
 * ActionItems.TaskID */

class ActionItems : public base_class {
protected:
	string description;
	string priority;
	string severity;
	double date_raised;
	double date_assigned;
	double exp_compl_date;
	double act_compl_date;
	string status;
	string status_description;
	double update_date;
	int task_id;
public:
	ActionItems(int unique_id, string name, string description, string priority, string severity, double date_raised, double date_assigned, double exp_compl_date, double act_compl_date, string status, string status_description, double update_date, int task_id);
	string get_description();
	string get_priority();
	string get_severity();
	double get_date_raised();
	double get_date_assigned();
	double get_exp_compl_date();
	double get_act_compl_date();
	string get_status();
	string get_status_description();
	double get_update_date();
	int get_task_id();
	void set_description(string description);
	void set_priority(string priority);
	void set_severity(string severity);
	void set_date_raised(double date_raised);
	void set_date_assigned(double date_assigned);
	void set_exp_compl_date(double exp_compl_date);
	void set_act_compl_date(double act_compl_date);
	void set_status(string status);
	void set_status_description(string status_description);
	void set_update_date(double update_date);
	void set_task_id(int task_id);
	void print();

};



#endif //ACTIONITEMS_H