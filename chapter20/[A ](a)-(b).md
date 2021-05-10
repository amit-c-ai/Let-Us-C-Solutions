## [A]

   (a)
   program:
   
    /* let file name be test.c */
    #include<stdio.h>
	int main(){
	    char ch, str[10];
	    while((ch=fgetc(stdin)) != -1){
		fputc(ch, stdout);
	    }
	    return 0;
	}
	
   Copy the contents of one file into another :
   
    test.exe < file1.txt > file2.txt
	
	here test.exe is file after compiling test.c . This command recieves
	the redirected input from the file file1.txt and redirects output to 
	file2.txt.
	
   Create a new file and add some text to it :
   
    test.exe > newfile.txt
	
	Here, test.exe will take input from keyboard until cntrl+z is entered.
	Command redirects output to newfile.txt, if not present it will create it.
	
   Display the contents of an existing file :
   
    test.exe < input.txt
	
	Here, test.exe will take input from file input.txt (must be present).
	And output the text on screen.
	
   (b)
   
    1. False
    2. False
    3. True
   
  
    
   
    
