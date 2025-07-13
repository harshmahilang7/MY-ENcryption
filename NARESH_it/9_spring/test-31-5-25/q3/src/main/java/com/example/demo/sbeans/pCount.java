package com.example.demo.sbeans;

import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

@Component("pc")
@Scope("prototype")
public class pCount extends Counter
{

	public pCount() {
		super();
		Counter.instancecount+=1;
	}
	

}
