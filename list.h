void print_list (struct student * stu);
struct student * makeStudent(int hours,double grade, char mentalState[]);
struct student *free_list(struct student * lastStu);
struct student * insert_front(struct student * firstStu,int hours, double grade, char mentalState []);
//struct student * remove_node(struct student *front,int hours,double grade, char mentalState[]);
