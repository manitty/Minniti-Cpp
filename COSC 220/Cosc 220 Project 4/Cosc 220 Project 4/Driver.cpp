#include <iomanip>
#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include <queue>
#include "Job.h"
#include "Random.h"
using namespace std;



int main(){
	
	int job_arrival;
	Random rnd;
	queue<int> waitQueue;
	
	int wait_time;
	/*max_wait_time;
	int total_wait_time;
	int total_service_time;*/
	//int start_time = 0, end_time = 200;
	int t;
	int finish_time;
	int run = 0;
	
	/*
	float jobarrival
	int wait_time, max_wait_time;
	int total_wait_time;
	int total_service_time;
	float start_time = 0.01, end_time = 2.00;
	float t, finish_job;
	*/
	int start_time = 0;
	int end_time = 200;
	int arrival_prob;
	int total_jobs=0;
	int amount;


	bool teller_open = true;

	cout << "Enter desired probability [%1-100]:" << endl;
	cin >> arrival_prob;
	cout << "Enter desired number of jobs to be proccessed:" << endl;
	cin >> amount;

	while (total_jobs < amount)
	{
		//for (t = start_time; t < end_time; t++)
		//{
			if (rnd.frandom() <= arrival_prob)
			{
				job_arrival = t;
				waitQueue.push(job_arrival);
			}
			if (teller_open == false && t == finish_time)
			{
				teller_open = true;
			}
			if (teller_open)
			{
				if (!waitQueue.empty())
				{
					job_arrival = waitQueue.front();
					waitQueue.pop();

					wait_time = t - job_arrival;
					finish_time = t + rnd.trandom();
					teller_open = false;
					total_jobs++;
				}
			}

			cout << "Run:" << ++run << endl;
			cout << "number completed" << total_jobs << endl;
			cout << "number in queue" << waitQueue.size() << endl;
			cout << endl;
			return 0;
		//}
	}
		return 0;
}