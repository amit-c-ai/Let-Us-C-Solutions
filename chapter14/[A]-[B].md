## [A]

   (a)

    6487536 8 1    (first value is base address)

   (b)

    2
    4
    3
    6
    8
    5
    3
    5
    1

   (c)

    2 2
    4 4
    3 3
    6 6
    8 8
    5 5
    3 3
    5 5
    1 1

## [B]

   (a)

    Error. While initiating a 2-D array it is necessary to mention 2nd(column) dimention.

   (b)

    Error. While initiating a 2-D array it is necessary to mention 2nd(column) dimention.    

## [C]

   (a)

    int threed[3][2][3] = { { {3,4,5}, {1,2,3} }, { {5,6,7}, {4,5,6} }, { {8,9,0}, {7,8,9} } }   //initialization

    first: threed[0][0][0] ,   last: threed[2][1][2]

   (b)    

    1. &i        ->        e)F9C
    2. &j        ->        b)F9E
    3. pj        ->        i)F9E
    4. *pj       ->        a)35
    5. i         ->        g)value of i not given(maybe printing mistake), currently cannot say anything
    6. pi        ->        e)F9C                       (assuming it is ponting to i)
    7. *pi       ->        g)same as value of i
    8. (pi+2)    ->        i)FA0                       (1 integer is taking 2 bytes, so it means two integers ahead which means plus 2 means 4 bytes ahead i.e. F9C+2+2=FA0)   
    9. (*pi+2)   ->        f)same as ans. of (7. + 2)
    10.*(pi+2)   ->        c) value at FA0 (pi+2)

   (c)

    1. *(*(x+2)+1)        ->        f. 12
    2. *(*x+2)+5	  ->	    j. 8   	
    3. *(*(x+1))	  ->	    m. 6
    4. *(*(x)+2)+1	  ->	    c. 4
    5. *(*(x+1)+3)	  ->	    a. 9
    6. *n		  ->	    i. 1
    7. *(n+2)		  ->	    d. 3
    8. (*(n+3)+1	  ->	    k. 5
    9. *(n+5)+1		  ->	    h. 7
    10. ++*n  		  ->	    d. 2

   (d)

    1. **arr			     ->        j. 2
    2. **arr<*(*arr+2)		     ->	       g. 1
    3. *(arr+2)/(*(*arr+1)>**arr)    ->        {error: invalid binary operation, because neumerator is int* and denominator is int. If we typecast neumerator like (int)*(arr+2), then output will be address of arr[2][0]}
    4. *(arr[1]+1) | arr[1][2]	     ->        h. 11
    5. *(arr[0]) | *(arr[2])	     ->        b. 18
    6. arr[1][1] < arr[0][1]	     ->        g. 1
    7. arr[2][1] & arr[2][0]	     ->        e. 0     
    8. arr[2][2] | arr[0][1]	     ->        k. 5
    9. arr[0][1] ^ arr[0][2]	     ->        j. 2
    10.++**arr + --arr[1][1] 	     ->        d. 3