package com.company;

import java.util.Scanner;

public class laba2 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Введите кол-во строк ");
        int k=in.nextInt();
        System.out.print("Введите кол-во столбцов ");
        int n=in.nextInt();
        int[][] matrixA;
        int[] array=new int[k*n];
        matrixA = new int[k][n];

        Fill fill = new Fill();
        fill.filling(k, n, matrixA);

        MatrixUnic MatUnic = new MatrixUnic();
        //MatrixMin.

        System.out.println("Матрица:");
        for(int i=0; i<k; i++) {
            for(int j=0; j<n; j++) {
                System.out.print(matrixA[i][j] + "\t");
            }
            System.out.println();
        }
        System.out.println();
        System.out.println("Минимальный неповторяющийся элемент:");
        MatUnic.Unic(n, k, matrixA, array);

    }


}
