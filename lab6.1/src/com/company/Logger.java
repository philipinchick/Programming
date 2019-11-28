package com.company;

import java.io.FileWriter;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Logger {
    private FileWriter writer;
    public Logger(String output) throws IOException {
        writer = new FileWriter(output);
    }

    public void LogFileWrite(String str) throws IOException {
        var sdf = new SimpleDateFormat("dd-M-yyyy hh::mm::ss");
        String date = sdf.format(new Date());
        try{
            writer.write((date + " " + str +"\n"));
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public void CloseFile() throws IOException {
        writer.close();
    }
}
