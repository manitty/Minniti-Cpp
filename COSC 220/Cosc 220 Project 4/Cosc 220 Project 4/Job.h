#include <iomanip>
using namespace std;

class Job{

public:
	 
	

	Job();
	Job(int &job_arrival, int &wait_time, int &max_wait_time, int &total_wait_time, int &total_service_time, int &start_time, int &end_time, int &time, int &finish_time, int &ticket);
	void set_job_arrival(int ja);
	void set_wait_time(int wt);
	void set_max_wait_time(int mw);
	void set_total_wait_time(int tw);
	void set_total_sevice_time(int ts);
	void set_start_time(int st);
	void set_end_time(int et);
	void set_time(int t);
	void set_finish_time(int ft);
	void set_ticket(int tick);
	int get_job_arrival();
	int get_wait_time();
	int get_max_wait_time();
	int get_total_wait_time();
	int get_total_service_time();
	int get_start_time();
	int get_end_time();
	int get_time();
	int get_finish_time();
	int get_ticket();


private:
	
	int job_arrival;
	int wait_time, max_wait_time;
	int total_wait_time;
	int total_service_time;
	int start_time, end_time;
	int time, finish_time;
	int ticket;

};

Job::Job(){
	job_arrival = 0;
	wait_time = 0;
	max_wait_time = 0;
	total_wait_time = 0;
	total_service_time = 0;
	start_time = 0;
	end_time = 200;
	time = 0;
	finish_time = 0;
	ticket = 1;
}

Job::Job(int &ja, int &wt, int &mw, int &tw, int &ts, int &st, int &et, int &t, int &ft, int &tick)
{
	job_arrival = ja;
	wait_time = wt;
	max_wait_time = mw;
	total_wait_time = tw;
	total_service_time = ts;
	start_time = st;
	end_time = et;
	time = t;
	finish_time = ft;
	ticket = tick;
}

void Job::set_job_arrival(int ja)
{
	job_arrival = ja;
}

void Job::set_wait_time(int wt)
{
	wait_time = wt;
}

void Job::set_max_wait_time(int mw)
{
	max_wait_time = mw;
}

void Job::set_total_wait_time(int tw)
{
	total_wait_time = tw;
}

void Job::set_total_sevice_time(int ts)
{
	total_service_time = ts;
}

void Job::set_start_time(int st)
{
	start_time = st;
}

void Job::set_end_time(int et)
{
	end_time = et;
}

void Job::set_time(int t)
{
	time = t;
}

void Job::set_finish_time(int ft)
{
	finish_time = ft;
}

void Job::set_ticket(int tick)
{
	ticket = tick;
}

int Job::get_job_arrival()
{
	return job_arrival;
}

int Job::get_wait_time()
{
	return wait_time;
}

int Job::get_max_wait_time()
{
	return max_wait_time;
}

int Job::get_total_wait_time()
{
	return total_wait_time;
}

int Job::get_total_service_time()
{
	return total_service_time;
}

int Job::get_start_time()
{
	return start_time;
}

int Job::get_end_time()
{
	return end_time;
}

int Job::get_time()
{
	return time;
}

int Job::get_finish_time()
{
	return finish_time;
}

int Job::get_ticket()
{
	return ticket;
}