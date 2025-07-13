package com.nit.main;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import java.util.Locale;
import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // XML-based
//        ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("com/nit/config/applicationContext.xml");

        // For Java-based config:
        AnnotationConfigApplicationContext context = new AnnotationConfigApplicationContext(JavaConfig.class);

        System.out.print("Enter language code (en, hi, fr, te, de): ");
        String lang = scanner.nextLine();
        String ccode = scanner.nextLine();

        Locale locale = new Locale(lang+"_"+ccode);
        
        

        String welcome = context.getMessage("welcome", null, locale);
        System.out.println(welcome);

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        String greeting = context.getMessage("greeting", new Object[]{name, "Spring"}, locale);
        System.out.println(greeting);

        // Grouped form labels
        System.out.println("Form Labels:");
        System.out.println(context.getMessage("form.name", null, locale));
        System.out.println(context.getMessage("form.email", null, locale));
        System.out.println(context.getMessage("form.submit", null, locale));
    }
}
