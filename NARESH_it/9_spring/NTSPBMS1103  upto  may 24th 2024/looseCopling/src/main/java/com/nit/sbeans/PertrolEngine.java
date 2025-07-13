package com.nit.sbeans;

import org.springframework.stereotype.Component;

@Component("pertrol")
public class PertrolEngine implements IEngine {

	@Override
	public void start() {
		System.out.println("PertrolEngine.start()");
	}

	@Override
	public void stop() {
		System.out.println("PertrolEngine.stop()");

	}

}
