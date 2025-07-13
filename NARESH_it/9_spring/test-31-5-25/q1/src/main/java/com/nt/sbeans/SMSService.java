package com.nt.sbeans;

import org.springframework.stereotype.Component;

@Component("sS")
public class SMSService implements MessageService {

	@Override
	public void sendMessage() {
		System.out.println("SMSService.sendMessage()");
	}

}
