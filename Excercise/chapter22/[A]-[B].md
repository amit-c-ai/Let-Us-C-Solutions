## [A]

   (a)

   program
   
    #include<stdio.h>
	int main(){
		enum status {pass, fail, atkt};
		enum status stud1, stud2, stud3;
		stud1=pass;
		stud2=fail;
		stud3=atkt;
		printf("%d %d %d\n", stud1, stud2, stud3);
		return 0;
	}
	
   output
   
    0 1 2
	
   (b)
   
   program
   
    #include<stdio.h>
	int main(){
		printf("%f\n", (float)((int)3.5/2));
		printf("%d\n", (int) (((float)3/2)*3));
		return 0;
	}
	
   output
   
    1.000000
	4
	
## [B]

   (a)
   
   code
   
    #include<stdio.h>
	int main(){
		typedef struct patient
		{
			char name[20]; int age;
			int systolic_bp; int diastolic_bp;
		}ptt;
		ptt p1 = {"anil", 23, 110, 220};
		printf("%s %d\n", p1.name, p1.age);
		printf("%d %d\n", p1.systolic_bp, p1.diastolic_bp);
		return 0;
	}
	
   output
   
    anil 23
	110 220
	
   (b)

    #include<stdio.h>
	void show();
	int main()
	{
		void (*s)();
		s=show;
		(*s)();
		s();
		return 0;
	}
	void show()
	{
		printf("don't show off. It won't pay in the long run\n");
	}
	
   output
   
    don't show off. It won't pay in the long run
	don't show off. It won't pay in the long run
	
   (c)
   
   code
   
    #include<stdio.h>
	void show (int, float);
	int main()
	{
		void (*s)(int, float);
		s=show;
		(*s)(10, 3.14);
		return 0;
	}
	void show(int i, float f)
	{
		printf("%d %f\n", i, f);
	}
	
   output
   
    10 3.140000
    