package com.nit.main;

import java.util.Locale;
import java.util.Scanner;

public class LocaleSelector 
{
	public Locale getSetLocale() 
	{
		System.out.print("Enter language code (en, hi, fr, te, de): ");
		Scanner sc= new Scanner(System.in);
		String lang= sc.next();
		Locale l= new Locale(lang);
		return l;
	}
}
