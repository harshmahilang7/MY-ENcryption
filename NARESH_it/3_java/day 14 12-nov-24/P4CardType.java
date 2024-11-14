
class P4CardType
{
	private String cardName;
	String getCardName()
	{
		return cardName;
	}
	
	void getCardTypes(double spendingAmount)
	{
		if(spendingAmount<10000)
		{
			cardName="Silver";
		}
		else if(spendingAmount>=10000&&spendingAmount<=5000)
		{
			cardName="Gold";
		}
		else if(spendingAmount > 50000)
		{
			cardName="Platinum";
		}
	}
}
