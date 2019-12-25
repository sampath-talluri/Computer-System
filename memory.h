#ifndef MEM_H
#define MEM_H




char* name[50]; 

int set[50];

int var_count = 0; 

double values[50];


int var(int i, double value)
{
	values[i] = value;
	set[i] = 1;
	
	return value;
}

int add_variable(char* var_name)
{
	int i;
	
		
	for (i = 0; i<var_count; i++)
	 {
		if (strcmp(var_name, name[i]) == 0) 
		{
			return i;
		}
	}

	
	var_count++;
	name[i] = strdup(var_name);
	return i;
}




#endif
