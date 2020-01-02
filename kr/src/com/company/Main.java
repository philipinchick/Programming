package com.company;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.Writer;
import java.util.ArrayList;

public class Main {

    public static void main(String[] args) throws IOException {
        ReadFile read = new ReadFile();
        ConvertText convert = new ConvertText();
        WriteFile writer = new WriteFile();
        ArrayList<String> rez = convert.EditText(read.FileRead("input"));
        writer.FileWrite("output", rez);



        System.out.println( convert.EditText(read.FileRead("input")));
    }
}
