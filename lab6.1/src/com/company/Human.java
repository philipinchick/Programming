package com.company;

import org.json.JSONObject;

import java.util.Scanner;

public class Human {
    private String guide;
    private String email;
    private String birthday;
    private String first;
    private String last;
    private String gender;
    private String city;
    private String state;

    public  void ReadCSV(String input) {
        Scanner sc = new Scanner(input);
        sc.useDelimiter(";");
        guide = sc.next();
        email = sc.next();
        birthday = sc.next();
        first = sc.next();
        last = sc.next();
        gender = sc.next();
        city = sc.next();
        state = sc.next();
    }

    public  void ReadJSON(String input) {
        JSONObject json = new JSONObject(input);
        birthday = json.getString("birthday");
        last = json.getString("last");
        gender = json.getString("gender");
        city = json.getString("city");
        guide = json.getString("guid");
        state = json.getString("state");
        email = json.getString("email");
        first = json.getString("first");
    }

   public Human() {
        this.guide = null;
        this.email = null;
        this.birthday = null;
        this.first = null;
        this.last = null;
        this.gender = null;
        this.city = null;
        this.state = null;

    }


    public String toString(){
        return this.guide + " " +  this.email + "\t" + this.birthday + "\t" + this.first + "\t" + this.last + "\t" + this.gender + "\t" + this.city + "\t" + this.state;
    }

    String GetState() {
        return this.state;
    }

    public Integer GetAge() {
        int ageYear = 0;
        String ageYearStr = birthday.substring(birthday.length()-4);
        if (!ageYearStr.equalsIgnoreCase("hday")) {
            ageYear = Integer.parseInt(ageYearStr);
        }
            int age = 2019 - ageYear;

            return age;
        }

}
