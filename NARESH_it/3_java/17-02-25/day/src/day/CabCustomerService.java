package day;

import java.util.ArrayList;

public class CabCustomerService {
	ArrayList<CabCustomer> listCus= new ArrayList();
//	CabCustomer obj=null;
	public void addCabCustomer(CabCustomer e)
	{
		String ph=e.getPhone();
		if(isFirstCustomer(ph)==true)
		{
			System.out.println("existing customer");
		}
		else
		{
			listCus.add(e);
		}
	}

	private boolean isFirstCustomer(String ph) {
		for(int i=0;i<listCus.size();i++)
		{
			if(listCus.get(i).getPhone()==ph)
			{
				return true;
			}
			else
				return false;
		}
		return false;

	}



	public int calculateBill(CabCustomer e)
	{
//		if(e == null)
//		{
//			return 0;
//		}
		if (isFirstCustomer(e.getPhone()) && e.getDistance()<4)
		{

			return 80;
		}
		else if (isFirstCustomer(e.getPhone()) && e.getDistance()>=4)
		{
			int xDis=e.getDistance()-4;
			return 80+xDis*6;
		}
		return 0;
	}



		public void printBill(CabCustomer e) {
			System.out.println(e.getCustomerName()+" Please pay your bill of "+calculateBill(e));
		}




}
