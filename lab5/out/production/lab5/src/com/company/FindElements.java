package com.company;

import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.StringTokenizer;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class FindElements {
    Read read = new Read();

    public void FindTags(String text, ArrayList<String> result, ArrayList<Integer> to_save){
        Pattern pattern = Pattern.compile("(<.*?>)");
        Matcher matcher = pattern.matcher(text);
        to_save.add(0);
        while (matcher.find()) {
            result.add(text.substring(matcher.start(), matcher.end()));
            to_save.add(matcher.start());
            to_save.add(matcher.end());
        }
        to_save.add(text.length());
    }

    public StringBuilder FindWords(String text, ArrayList<Integer> to_save) {
        StringBuilder sb = new StringBuilder();
        for(int i=0; i<to_save.size()-2; i+=2) {
            if(!(text.substring(to_save.get(i), to_save.get(i+1)).isEmpty())) {
                sb.append(i + ". " + text.substring(to_save.get(i), to_save.get(i+1)));
                sb.append("\n");
            }
        }
        return  sb;
    }

    public StringBuilder FindInput(ArrayList<String> Find, String input, String text, ArrayList<Integer> to_save) throws FileNotFoundException {
        StringTokenizer fragments = new StringTokenizer(read.FileRead(input).toString(),";");
        while (fragments.hasMoreTokens()){
            Find.add(fragments.nextToken());
        }
        StringBuilder sb = new StringBuilder();
        for (int i=0; i<Find.size(); i++) {
            if(!(FindWords(text, to_save).toString().contains(Find.get(i))))
                sb.append(Find.get(i).toString() + " ");
        }
        return sb;
    }
}
