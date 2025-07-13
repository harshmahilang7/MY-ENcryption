package com.bulkConfiguration.model;

import org.springframework.beans.factory.annotation.Value;
import org.springframework.boot.context.properties.ConfigurationProperties;
import org.springframework.stereotype.Component;

import lombok.Setter;
import lombok.ToString;

@Component("nc")
@ConfigurationProperties(prefix = "notifications")
@ToString
@Setter
public class NotificationConfig 
{
	String email;
    String subject;
    String body;
    String sms;
	String sbody;
	String push;
	String title;
	String pbody;
	
	

}
