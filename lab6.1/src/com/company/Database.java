package com.company;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class Database implements IDatabase {
    private List<Human> data = new ArrayList<>();
    private IDatabaseLoader loaderCSV;


    @Override
    public List<Human> GetData() {
        return data;
    }

    Database(IDatabaseLoader loader) {
        this.loaderCSV = loader;
    }

    @Override
    public void load(String fromFile, String format) throws FileNotFoundException {
        data = loaderCSV.load(fromFile, format);
    }

    Database SortByState() {
        var sorted = new Database(loaderCSV);
        sorted.data = data;
        sorted.data.sort(Comparator.comparing(Human::GetState));
        return sorted;
    }

    @Override
    public List<Human> AgeList() throws IOException {
        List<Human> dataAge = new ArrayList<>();
        int i=1;
        for (Human datum : data) {
             if((datum.GetAge() >= 18) && (datum.GetAge() <=60))
                dataAge.add(datum);
            i++;
        }
        return dataAge;
    }

    public List<String> StateList() {
        List<String> dataState = new ArrayList<>();
        Human human = new Human();
        for (Human datum : data) {
                dataState.add(datum.GetState());
        }
        return dataState;
    }
}


