package com.company;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;

public class Read {
    public StringBuilder FileRead(String input) throws FileNotFoundException {
        FileReader fr = new FileReader(input);
        Scanner scan = new Scanner(fr);
        String str;
        StringBuilder text = new StringBuilder();
        while (scan.hasNext()) {
            str = scan.nextLine();
            text.append(str);
        }
        return text;
    }
}
