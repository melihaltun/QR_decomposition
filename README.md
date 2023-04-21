# QR_decomposition
QR decomposition of a matrix into an orthogonal and  an upper triangle matrix

The method factorizes an NxM matrix into one NxN orthogonal(Q) and one NXM upper(R) triangular matrix. The method is useful in solving linear least squares, eigenvalue and eigenmatrix pairs.  

The source code provides a single function for QR factorizaton: QR(Q, R, X, n, m)

QR function outputs Q(n x n) and R(n x m) matrices for a given matrix X.

Multiplying Q and R will result in a matrix identical to X.
