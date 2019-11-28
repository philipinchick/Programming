package com.company;

import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        String format = in.next();
        String fromFile = "input." + format;
        Logger Log = new Logger("LOGGER.txt");
        FileWriter wr = new FileWriter("output.txt");
        FileWriter wrAge = new FileWriter("outputAge.txt");
        FileWriter wrState = new FileWriter("outputState.txt");
            IDatabaseLoader Loader = new DatabaseLoader();
            Database database = new Database(Loader);
            Log.LogFileWrite("Считывание файла ");
                database.load(fromFile, format);
                Log.LogFileWrite("Сортировка ");
                database.SortByState();
                Log.LogFileWrite("Запись в файл ");
                wr.write(database.GetData().toString());
                Log.LogFileWrite("запись в файл с учетом возраста");
                wrAge.write(database.AgeList().toString());
                Log.LogFileWrite(("Запись штатов в файл "));
                wrState.write(database.StateList().toString());
                Log.CloseFile();

    }
}

interface IDatabaseLoader {
    List<Human> load(String input, String format) throws FileNotFoundException;
}

interface IDatabase {
    List<Human> GetData();
    void load(String fromFile, String format) throws FileNotFoundException;
    List<Human> AgeList() throws IOException;
}
