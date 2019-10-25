package com.company;

 class Fill {
    public void  filling(int k, int n, int[][] matrixA) {
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < n; j++) {
                matrixA[i][j] = ((int) (Math.random() * 20) + 1);
            }
        }
    }
}
