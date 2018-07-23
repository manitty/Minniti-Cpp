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

	int job_arrival=0;
	Random rnd;
	queue<int> waitQueue;
	queue<int> ticketQueue;
	Job j;

	ofstream outputfile;

	int num = 1;
	int t = 0;
	float i;

	int finish1;
	int finish2;
	int total_pt=0;

	int temp;
	int temp2;
	int hold;
	int hold2;
	int average = 0;
	
	int arrival_prob;
	int total_jobs = 0;
	int amount;

	bool teller_open = true;
	bool teller2 = true;

	outputfile.open("CpuSim.txt", ios::out);

	cout << "Welcome to the Salisbury University Bank simulation!" << endl;
	cout << endl;
	cout << "Enter desired probability of a customer arriving [%1-100]:" << endl;
	cin >> arrival_prob;
	cout << endl;
	cout << "Enter desired number of customers to proccessed:" << endl;
	cin >> amount;
	cout << endl;
	
	outputfile << "Welcome to the Salisbury University Bank simulation!" << endl;
	outputfile << endl;
	outputfile << "Enter desired probability of a customer arriving [%1-100]:" << endl;
	outputfile << arrival_prob;
	outputfile << endl;
	outputfile << "Enter desired number of customers to proccessed:" << endl;
	outputfile << amount;
	outputfile << endl;
	
		while (total_jobs < amount)
		{

			cout << "Time: " << j.get_time() << endl;
			cout << endl;
			
			outputfile << "Time: " << j.get_time() << endl;
			outputfile << endl;
			
			if (rnd.frandom() <= arrival_prob)
			{
				j.set_job_arrival(t);
				j.set_ticket(num++);
				cout << "A new customer has arrived at time: " << j.get_job_arrival() << endl;
				cout << "The customers ticket number is " << j.get_ticket() << endl;
				outputfile << "A new customer has arrived at time: " << j.get_job_arrival() << endl;
				outputfile << "The customers ticket number is " << j.get_ticket() << endl;
				waitQueue.push(j.get_job_arrival());
				ticketQueue.push(j.get_ticket());
			}
			else{
				cout << "No customer has arrived since last update" << endl;
				outputfile << "No customer has arrived since last update" << endl;
			}



			if (teller_open == false && j.get_time() == temp)
			{
				teller_open = true;
				total_jobs++;
				cout << "Teller one is avaible to serve another customer." << endl;
				outputfile << "Teller one is avaible to serve another customer." << endl;

			}
			if (teller2 == false && j.get_time() == hold)
			{
				teller2 = true;
				total_jobs++;
				cout << "Teller two is avaible to serve another customer." << endl;
				outputfile << "Teller two is avaible to serve another customer." << endl;

			}



			if (teller_open)
			{
				if (!waitQueue.empty())
				{

					j.set_job_arrival(waitQueue.front());
					waitQueue.pop();
					
					

					temp2 = ticketQueue.front();
					ticketQueue.pop();

					job_arrival = j.get_job_arrival();
					j.set_wait_time(t - job_arrival);
					average += j.get_wait_time();

					finish1 = rnd.trandom();
					total_pt += finish1;
					j.set_finish_time(t + finish1);
					temp = j.get_finish_time();
					
					teller_open = false;
				}
			}
			if (!teller_open)
			{
				cout << "Teller one is now serving ticket number: " << temp2 << endl;
				cout << "Teller one will re-open at time: " << temp << endl;
				outputfile << "Teller one is now serving ticket number: " << temp2 << endl;
				outputfile << "Teller one will re-open at time: " << temp << endl;
			}


			if (teller2)
			{
				if (!waitQueue.empty())
				{

					j.set_job_arrival(waitQueue.front());
					waitQueue.pop();

					hold2 = ticketQueue.front();
					ticketQueue.pop();

					job_arrival = j.get_job_arrival();
					j.set_wait_time(t - job_arrival);
					average += j.get_wait_time();

					finish2 = rnd.trandom();
					total_pt += finish2;
					j.set_finish_time(t + finish2);
					hold = j.get_finish_time();

					teller2 = false;
				}
			}
			if (!teller2)
			{
				cout << "Teller two is now serving ticket number: " << hold2 << endl;
				cout << "Teller two will re-open at time: " << hold << endl;
				outputfile << "Teller two is now serving ticket number: " << hold2 << endl;
				outputfile << "Teller two will re-open at time: " << hold << endl;
			}
			




			cout << "There are currently [" << waitQueue.size() << "] waiting to be helped" << endl;
			cout << endl;
			outputfile << "There are currently [" << waitQueue.size() << "] waiting to be helped" << endl;
			outputfile << endl;

			j.set_time(++t);
		}
		
		i = 60 / t;
		float x;
		x = i * total_jobs;

		cout << "**Summary**" << endl;
		cout << "Total amount of customers served: [" << total_jobs << "] with a total processing time of: [" << total_pt << "]" << endl;
		cout << "The average amount of time it takes to process a customer: [" << total_pt / total_jobs << "]" << endl;
		cout << "The average amount of time a customer spent waiting: [" << average / total_jobs << "]" << endl;
		cout << "Given the output the system can process: [" << x << "] customers per hour." << endl;

		outputfile << "**Summary**" << endl;
		outputfile << "Total amount of customers served: [" << total_jobs << "] with a total processing time of: [" << total_pt << "]" << endl;
		outputfile << "The average amount of time it takes to process a customer: [" << total_pt / total_jobs << "]" << endl;
		outputfile << "The average amount of time a customer spent waiting: [" << average / total_jobs << "]" << endl;
		outputfile << "Given the output the system can process: [" << x << "] customers per hour." << endl;


	return 0;
}