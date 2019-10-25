package com.company;

import com.sun.org.apache.xpath.internal.operations.String;
import com.sun.xml.internal.ws.handler.ServerMessageHandlerTube;

import java.util.*;
import java.util.stream.Collectors;

public class MatrixUnic {
    public void Unic(int n, int k, int[][] matrixA, int[] array) {
        HashSet<Integer> MatUnic = new HashSet<>();
        for (int i = 0; i < k ; i++) {
            for (int j = 0; j <n; j++) {
                MatUnic.add(matrixA[i][j]);
            }
        }

        MatUnic.addAll(MatUnic);
        for (int i : MatUnic)
            System.out.print(i + " ");

        Set.copyOf(Arrays.asList(array)
        for(int i=0; i<MatUnic.size(); i++) {
            System.out.print(array + " ");

        }
    }



}