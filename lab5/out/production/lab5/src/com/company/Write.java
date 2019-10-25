package com.company;

import java.io.FileWriter;
import java.io.IOException;

public class Write {
    public void FileWrite(String output, StringBuilder sb) throws IOException {
        FileWriter writer = new FileWriter(output);
        writer.write(sb.toString());
        writer.close();
    }
}
