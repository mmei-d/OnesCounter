/*--- Switches and NOT-gates ---*/
Switch aa A '0' ZERO;
Not aa A NOTA;
Switch ba B '1' ZERO;
Not ba B NOTB;
Switch ca C '2' ZERO;
Not ca C NOTC;
Switch da D '3' ZERO;
Not da D NOTD;
Switch ea E '4' ZERO;
Not ea E NOTE;

/*--- X (3rd bit) ---*/
And ad A B C D NOTE x1;
And ad A B C D E x2;
And ad A B C NOTD E x3;
And ad A B NOTC D E x4;
And ad A NOTB C D E x5;
And ad NOTA B C D E x6;

Or ae x1 x2 x3 x4 x5 x6 X;

Probe af X;

/*--- Y (2nd bit) ---*/
And cd A B C NOTD NOTE y1;
And cd A B NOTC D NOTE y2;
And cd A B NOTC NOTD NOTE y3;
And cd A B NOTC NOTD E y4;
And cd A NOTB C D NOTE y5;
And cd A NOTB C NOTD NOTE y6;
And cd A NOTB C NOTD E y7;
And cd A NOTB NOTC D NOTE y8;
And cd A NOTB NOTC D E y9;
And cd A NOTB NOTC NOTD E y10;
And cd NOTA B C D NOTE y11;
And cd NOTA B C NOTD NOTE y12;
And cd NOTA B C NOTD E y13;
And cd NOTA B NOTC D NOTE y14;
And cd NOTA B NOTC D E y15;
And cd NOTA B NOTC NOTD E y16;
And cd NOTA NOTB C D NOTE y17;
And cd NOTA NOTB C D E y18;
And cd NOTA NOTB C NOTD E y19;
And cd NOTA NOTB NOTC D E y20;

Or ce y1 y2 y3 y4 y5 y6 y7 y8 y9 y10 y11 y12 y13 y14 y15 y16 y17 y18 y19 y20 Y;

Probe cf Y;

/*--- Z (1st bit) ---*/
And ed A B C D E z1;
And ed A B C NOTD NOTE z2;
And ed A B NOTC D NOTE z3;
And ed A B NOTC NOTD E z4;
And ed A NOTB C D NOTE z5;
And ed A NOTB C NOTD E z6;
And ed A NOTB NOTC D E z7;
And ed A NOTB NOTC NOTD NOTE z8;
And ed NOTA B C D NOTE z9;
And ed NOTA B C NOTD E z10;
And ed NOTA B NOTC D E z11;
And ed NOTA B NOTC NOTD NOTE z12;
And ed NOTA NOTB C D E z13;
And ed NOTA NOTB C NOTD NOTE z14;
And ed NOTA NOTB NOTC D NOTE z15;
And ed NOTA NOTB NOTC NOTD E z16;

Or ee z1 z2 z3 z4 z5 z6 z7 z8 z9 z10 z11 z12 z13 z14 z15 z16 Z;

Probe ef Z;
