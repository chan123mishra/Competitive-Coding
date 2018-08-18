/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Chanchal-IIITA
 */
import java.util.*;
public class test_rand {
     Random r = new Random();
 void show()
    {
        System.out.println("Value be " + r.nextDouble());
    }
     
}

class Man{
     public static void main(String args[])
    {
        test_rand o = new test_rand();
        o.show();
    }
}