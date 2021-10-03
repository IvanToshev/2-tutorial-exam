23 to binary	Остатък
23:2 = 11.5	    1
11:2 = 5.5	    1
5:2 = 2.5	    1          // Decimal to Binary
2:2 = 1	    	    0
1:2 = 0.5	    1
Result:	0b10111

  
 128 to binary	Остатък
128:2 = 64	    0
64:2 = 32	    0
32:2 = 16	    0
16:2 = 8	    0
8:2 = 4	   	    0           // Decimal to Binary
4:2 = 2	   	    0
2:2 = 1	   	    0
1:2 = 0.5	    1
Result:	0b10000000

  
  34 tо binary	Остатък
34:2 = 17     	   0
17:2 = 8.5	   1
8:2 = 4	           0            // Decimal to Binary
4:2 = 2	           0
2:2 = 1	           0
1:2 = 0.5	   1
Result:	0b100010
	
256 to binary 	Остатък
256:2 = 128	0
128:2 = 64	0
64:2 = 32	0
32:2 = 16	0
16:2 = 8	0            // Decimal to Binary
8:2 = 4	        0
4:2 = 2	        0
2:2 = 1	        0
1:2 = 0.5	1
Result:	0b100000000

  
245 to octal	Остатък
245:8 = 30.625
30x8 = 240	    5
30:16 = 3.75                 // Decimal to Octal
3x8 = 24 	    6
3	            3
Result:	365

  
  64 to octal	Остатък
64:8 = 8	   0
8:8 = 1	           0          // Decimal to Octal
1	           1
Result:	  100

  
  128 tо octal	Остатък
128:8 = 16	   0
16:8 = 2	   0         // Decimal to Octal
2	           2
Result:	   200
  
  
  166 to octal	Остатък
166:8 = 20.75
20x8 = 160	   6
20:8 = 2.5                    // Decimal to Octal
2x8 = 16	   4 
2	           2
Result:	    246

  
  312 to hexadecimal 	Остатък
312:16 = 19.5
19x16 = 304	           8
19:16 = 1.1875                      // Decimal to Hexadecimal
1x16 = 16	           3
1	                   1
Result:	  0x138

  
  256 to hexadecimal	Остатък
256:16 = 16	           0
16:16 = 1	           0               // Decimal to Hexadecimal
1	                   1
Result:	  0x100

  
  123 to hexadecimal	Остатък
123:16 = 7.6875 
7x16 = 112	        11 = B             // Decimal to Hexadecimal
7	                7
	
Result:	  0x7B

  
  317 to hexadecimal	Остатък
317:16 = 19.8125
19x16 = 304	          13
19:16 = 1.1875                        // Decimal to Hexadecimal
1x16 = 16	           3
1	                   1
Result:	    0x13D

  
// Binary to Decimal	
  100011 to decimal	1x2(5) +0x2(4) +0x2(3) +0x2(2) +1x2(1) +1x2(0)
1x32 + 0x16 + 0x8 + 0x4 + 1x2 + 1x1                                           
32 + 0 + 0 + 0 + 2 + 1 = 35	Result: 35 
	
  // Binary to Decimal
1000000 to decimal	1x2(6) + 0x2(5) + 0x2(4) + 0x2(3) + 0x2(2) + 0x2(1) + 0x2(0)
1x64 + 0x32 + 0x16 + 0x8 + 0x4 +0x2 + 0x1 = 64	Result: 64
	
  
  // Binary to Decimal
1101001 to decimal	1x2(6) + 1x2(5) + 0x2(4) + 1x2(3) + 0x2(2) + 0x2(1) + 1x2(0)
1x 64 + 1x32 + 0x16 + 1x8 + 0x4 + 0x2 + 1x1
64 + 32 + 0 + 0 + 8 + 0 + 0 +1 = 105   Result: 105
		
    
 // Binary to Decimal   
1001 to decimal	1x2(3) + 0x2(2) + 0x2(1) + 1x2(0)
1x8 + 0x4 + 0x2 + 1x1
8 +1 = 9    Result: 9

    
// Hexadecimal to Decimal
    16F to Decimal 	1x16(2) + 6x16(1) + Fx16(0) 
1x256 + 6x16 + 15x1
256 + 96 + 15 = 367	Result: 367
  

// Hexadecimal to Decimal
19 to Decimal	1x16(1) + 9x16(0)
1x16 + 9x1                           
16 + 9 = 25	Result: 25
  
 
// Hexadecimal to Decimal
4A to Decimal	4x16(1) + Ax16(0)
4x16 + 10x1
64 +10 = 74	Result: 74
  
// Hexadecimal to Decimal
7F to Decimal 	7x16(1) + Fx16(0)
7x16 + 15x1
112 + 15 = 127	Result: 127


	
// Octal to Decimal	
	
53 to Decimal   5x8(1) + 3x8(0)
5x8 + 3x1
40 + 3 43   Result: 43
	
	
// Octal to Decimal

100 to Decimal  1x8(2) + 0x8(1) + 0x8(0)
1x64 + 0 + 0 = 64   Result: 64	
	
	
// Octal to Decimal	
151 to Decimal   1x8(2) + 5x8(1) + 1x8(0)
1x64 + 5x8 + 1x1
64 + 40 + 1 = 105   Result: 105
	
// Octal to Decimal	
23 to Decimal	 2x8(1) + 3x8(0)
16 + 3 = 19   Result: 19
	
	
	
	Sakrateni Preobrazuvaniq
	
// Binary to Octal	
1000111001 =  001 000 111 001   // dopulnitelni 2 vodeshti nuli
0x2(2) + 0x2(1) + 1x1(0)  = 1
0x2(2) + 0x2(1) + 0x2(0)  = 0
1x2(2) + 1x2(1) + 1x2(0)  = 7
0x2(2) + 0x2(1) + 1x2(0)  = 1
Result: 1701
	
// Binary to Hexadecimal
1100111010 =     0011 0011 1010   // dopulnitelni 2 vodeshti nuli
0011 = 3
0011 = 3
1010 = 10 = A
Result: 33A

// Octal to Binary
152 to Octal
1 = 001	
5 = 101	         // po tablicata ot prezentaciqta
2 = 010	
Result: 001101010
	
// Hexadecimal to Binary
5A6C to Binary
5 = 0101
A = 10 = 1010
6 = 0110
C = 12 = 1100
Result: 0101101001101100

//Octal to Hexadecimal
53 to Hexadecimal
step 1 
From Octal to binary
5 = 101
3 = 011       // po tablicata ot prezentaciqta

step 2 
From binary to Hexadecimal

101 011 = 0010 1011
	
0010 = 2   // po tablicata ot prezentaciqta
1011 = B

Result: 2B

	
	
		
