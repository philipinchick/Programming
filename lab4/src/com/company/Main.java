
package com.company;


import java.io.*;
import java.util.Scanner;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(new File("input.rtf"));
        String str;
        StringBuilder sb = new StringBuilder();
        FileWriter writer = new FileWriter("output.rtf");
        while (in.hasNext()) {
            str = in.nextLine();
            sb.append(str + "\n");
        }
        var value = new EditText();
        writer.write(value.deleteComment(sb).toString());
        writer.close();
    }

}


