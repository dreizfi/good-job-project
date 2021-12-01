# good-job-project
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 20
#define S 10
#define EOLN '\r'
typedef struct
{
	char name_of_job[N];
	char name_of_company[N];
	char employment_catagory[N];//תחום המשרה
	char location_area[N];//מיקום
	char scope_of_the_job[N];//היקף המשרה
	char salary_range[N];//טווח השכר לשעה
	int index_boss;
	int arr_index_worker[100];//את מערך כל המגישים לאתחל לנאל?????????????
	int code;//מספר סידורי של משרה
	//char job_requirements[N];//דרישות התפקיד
}Job;
void push_jobs(Job jobs[1000])
{
	FILE* fp = fopen("C:\\Users\\Administrator\\source\\repos\\good job\\good job\\jobs.txt", "w");
	for (int i = 0; i < 1000; ++i)
	{
		fprintf(fp, "%s ", jobs[i].name_of_job);
		fprintf(fp, "%s ", jobs[i].name_of_company);
		fprintf(fp, "%s ", jobs[i].employment_catagory);
		fprintf(fp, "%s ", jobs[i].location_area);
		fprintf(fp, "%s ", jobs[i].scope_of_the_job);
		fprintf(fp, "%s ", jobs[i].salary_range);
		fprintf(fp, "%d ", jobs[i].index_boss);
		for (int j = 0; j < 100; ++j)
			fprintf(fp, "%d ", jobs[i].arr_index_worker[j]);
		fprintf(fp, "%d\n", jobs[i].code);
	}
}
void print_job(Job job)
{
	printf("%s\n", job.name_of_job);
	printf("%s\n", job.name_of_company);
	printf("%s\n", job.employment_catagory);
	printf("%s\n", job.location_area);
	printf("%s\n", job.scope_of_the_job);
	printf("%s\n", job.salary_range);
	printf("%d\n", job.index_boss);
	for (int j = 0; j < 100; ++j)
		printf("%d\n", job.arr_index_worker[j]);
	printf("%d\n", job.code);
}
Job* pop_jobs(Job* jobs[1000])
{
	FILE* fp = fopen("C:\\Users\\Administrator\\source\\repos\\good job\\good job\\jobs.txt", "r");
	Job** jobs;
	for (int i = 0; i < 1000; ++i)
	{
		fscanf(fp, "%s ", jobs[i]->name_of_job);
		fscanf(fp, "%s ", jobs[i]->name_of_company);
		fscanf(fp, "%s ", jobs[i]->employment_catagory);
		fscanf(fp, "%s ", jobs[i]->location_area);
		fscanf(fp, "%s ", jobs[i]->scope_of_the_job);
		fscanf(fp, "%s ", jobs[i]->salary_range);
		fscanf(fp, "%d ", &jobs[i]->index_boss);
		for (int j = 0; j < 100; ++j)
			fscanf(fp, "%d ", &jobs[i]->arr_index_worker[j]);
		fscanf(fp, "%d \n", &jobs[i]->code);
	}
}

int main()
{
	refresh();
	Job jobs[1000]; 
	pop_jobs(&jobs);
	for (int i = 0; i < 1000; ++i)
	{
		/*print_job(jobs[i]);*/
		printf("%s\n", jobs[i].name_of_job);
		printf("%s\n", jobs[i].name_of_company);
		printf("%s\n", jobs[i].employment_catagory);
		printf("%s\n", jobs[i].location_area);
		printf("%s\n", jobs[i].scope_of_the_job);
		printf("%s\n", jobs[i].salary_range);
		printf("%d\n", jobs[i].index_boss);
		for (int j = 0; j < 100; ++j)
			printf("%d\n", jobs[i].arr_index_worker[j]);
		printf("%d\n", jobs[i].code);
	}
	return 0;
}
