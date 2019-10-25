package com.company;

import java.io.*;
import java.util.ArrayList;
import java.util.Comparator;


public class Test {

    public static void main(String[] args) throws IOException {
        Read read = new Read();
        Write writer = new Write();
        FindElements find = new FindElements();
        SortByLength comparator = new SortByLength();
        ArrayList<String> result = new ArrayList<>();
        ArrayList<Integer> to_save = new ArrayList<>();
        ArrayList<String> Find = new ArrayList<>();
        String input1 = "input.txt";
        String input2 = "/Users/anastasiatrofimcik/Desktop/универсиага/прога/lab5/input2.txt";
        String str;

        String text = read.FileRead(input1).toString();
        find.FindTags(text, result, to_save);
        result.sort(comparator);

        StringBuilder sbTags = new StringBuilder();
        for(int i=0; i<result.size(); i++) {
            str = result.get(i);
            System.out.println(str);
            sbTags.append(str + "\n");
        }

        String output1 = "/Users/anastasiatrofimcik/Desktop/универсиага/прога/lab5/output1.txt";
        String output2 = "/Users/anastasiatrofimcik/Desktop/универсиага/прога/lab5/output2.txt";
        String output3 = "/Users/anastasiatrofimcik/Desktop/универсиага/прога/lab5/output3.txt";

        writer.FileWrite(output1, sbTags);
        writer.FileWrite(output2, find.FindWords(text, to_save));
        writer.FileWrite(output3, find.FindInput(Find, input2, text, to_save));

        System.out.println(find.FindWords(text, to_save));
        System.out.println(find.FindInput(Find, input2, text, to_save));

    }

}

class SortByLength implements Comparator<String> {
    public int compare(String a, String b) {
        return Integer.compare(a.length(), b.length());
    }
}

