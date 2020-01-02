package com.company;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class ConvertText {


    public ArrayList EditText(ArrayList text) {
        ArrayList<String> newText = new ArrayList<>();
        for(int i = text.size()-1; i>0; i--) {
            StringBuilder sb = new StringBuilder();
            sb.append(text.get(i).toString());
            sb.reverse();
            newText.add(sb.toString());
        }
        Collections.sort(newText);
        return newText;
    }


}


