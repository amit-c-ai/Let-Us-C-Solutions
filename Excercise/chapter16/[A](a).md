### In array of pointers to strings

   74

    58 bytes for characters(including null character) and 16(4x4) bytes 
    for addressess(integer) of these four strings.

   68

    Suppose we define array as arr[4][17] (taking 17 as the largest string given is of 17 characters)
    taking 17 bytes for all 4 strings it gives 68. Though in this case it is less than that of array
    of pointers to strings but what if largest string contains 25 characters and other strings are just 
    small. In this case now total bytes would be 100(25x4) and there would be wastage of memory in other
    strings. 
    

   

