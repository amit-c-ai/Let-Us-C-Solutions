## [A]

   (a) 
   
    Both are wrong. Correct: int b[10].
      
   (b)
   
    5th element.
   
   (c)
    
    int num[5]; here 5 denotes the size of array or how many elements does this array can hold.
    
    num[5] = 11; here 5 denotes the element at 5th index of array.

    and in this example num[5] is wrong because num can hold only 5 elements and it refer to 6th element as indexing start form 0.    	    

   (d) 
   
    The program would throw an error.

    If you were looping through the array it might overwrite values in the array.
    The extra values get stored in next memory locations to the memory allocated to
    the last element of array. Compiler doesn't give any error message, but if any value is stored at that location
    then that will be distroyed. It's all programmers duty to take care of that.
   
   (e)  
   
    At the time of initializing an array it sets the array size to the number of elements assigned.

   (f)

    The answer differ according to compilers. Turbo-C(windows) Compiler crashes while gcc compiler gives some output and 
    Dev-C++ outputs 0. But most appropriate ans can be: it crashes.
    
   (g)

    let array[]={1,2,3,4,5}
    passing (array) to function actually passes (&(array[0])) i.e. base address of array. Also note *array gives value at base address i.e. 1 in this case.

   (h)

    Elements are set to garbage values. If we declare it as static array all elements are set to 0. 

   (i)

    int *j;
    j = s;
    third_element = *(j+3);
   
