/**
* @file testQR.cpp
* @author Melih Altun @2023
**/

#include "QR.h"
int main() {
    float A[] = { 8, 9, 3, 10,
                 9, 6, 5, 2,
                 1, 1, 10, 10 };

    float Q[3 * 3], R[3 * 4], B[3 * 4];


    QR(Q, R, A, 3, 4);

    multiply_matrices(B, Q, R, 3, 3, 4);  // B should be identical to A

    float AA[4 * 3];

    float QQ[4 * 4], RR[3 * 3], BB[4*3];

    transpose(AA, A, 3, 4);

    QR(QQ, RR, AA, 4, 3);

    multiply_matrices(BB, QQ, RR, 4, 4, 3);  // BB should be identical to AA

	return 0;
}

/*
// from matlab //
A =

     8     9     3    10
     9     6     5     2
     1     1    10    10

>> [Q,R] = qr(A)

Q =

   -0.6621    0.7439   -0.0905
   -0.7448   -0.6666   -0.0302
   -0.0828    0.0474    0.9954


R =

  -12.0830  -10.5106   -6.5381   -8.9381
         0    2.7436   -0.6266    6.5807
         0         0    9.5321    8.9891

*/

/*
    AA =

        8     9     1
        9     6     1
        3     5    10
        10    2    10

>> [QQ, RR] = qr(AA)

        QQ =

        -0.5020    0.5927    0.2698    0.5692
        -0.5647    0.0445    0.3867   -0.7277
        -0.1882    0.4674   -0.8229   -0.2626
        -0.6275   -0.6544   -0.3170    0.2784


        RR =

        -15.9374   -10.1020   -9.2236
               0     6.6294   -1.2335
               0          0   -10.7426
*/
