#include<iostream>

using namespace std;


class school
{

	private:
		int student_id;
		char first_name[15];
		char last_name[15];
		long guardian_cell_no;
	public:
		void input_student_data();
		void display_student_data(school s1);
		int return_student_id(school s2);
					

}; 


void append_student_data();	
void display_all_student_data();
int display_options();
void delete_student();


void quit_software();