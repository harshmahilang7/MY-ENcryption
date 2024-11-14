package com.basic;
//Program 02
//----------
//Write a Program on OOPs to define Fan class properties and behaviour.
//
//properties :
//
//name    : String
//coil    : String
//wings	: int
//
//behaviour:
//
//switchOn()  : public void
//switchOff() : public void   
//-----------------------------------------------------------------------

public class ProgramTwoMain {

	public static void main(String[] args) {
		ProgramTwoBlc fan1=new ProgramTwoBlc();
		fan1.name="hero";
		fan1.coil="coil";
		fan1.wings=5;
		fan1.switchOn();
		fan1.switchOff();
		

	}

}
