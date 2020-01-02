package com.company;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.Scanner;

public class ReadFile {

    public ArrayList<String> FileRead(String input) throws FileNotFoundException {
        FileReader fr = new FileReader(input);
        Scanner scan = new Scanner(fr);
        String str;
        ArrayList<String> text = new ArrayList<>();
        StringBuilder sb = new StringBuilder();
        while (scan.hasNext()) {
            str = scan.next();
            text.add(str);
        }
        return text;
    }
}
