package com.company;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class DatabaseLoader implements IDatabaseLoader {
    @Override
    public List<Human> load(String input, String format) throws FileNotFoundException {
        List<Human> HumanBase = new ArrayList<>();
        try (var fr = new FileReader(input)) {
            Scanner scan = new Scanner(fr);
            if ((format.equalsIgnoreCase("csv"))) {
                while (scan.hasNextLine()) {
                    Human human = new Human();
                    human.ReadCSV(scan.nextLine());
                    HumanBase.add(human);
                }
            }
            if ((format.equalsIgnoreCase("json"))) {
                //scan.nextLine();
                while (scan.hasNext()) {
                    Human human = new Human();
                    human.ReadJSON(scan.nextLine());
                    HumanBase.add(human);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        return HumanBase;
    }
}
