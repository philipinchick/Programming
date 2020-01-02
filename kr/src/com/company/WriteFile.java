package com.company;

import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

public class WriteFile {
    public void FileWrite(String output, ArrayList text) throws IOException {
        FileWriter writer = new FileWriter(output);
        writer.write(text.toString());
        writer.close();
    }

}
