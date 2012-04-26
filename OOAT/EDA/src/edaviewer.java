import java.io.*; 

public class edaviewer {
	

	
	
	public static void main(String[] args)throws IOException
	{
		edacontroller controll= new edacontroller();
		System.out.printf("Welcome to NCUEDA 1.0, we are waiting for your command.\n");
		while(true)
		{

			String temp = getcommand();
			String[] commands = temp.split(" ");
		if( commands[0].equals("create") )
		{
			System.out.printf("An empty circuit called “");
			System.out.printf(commands[2]);
			System.out.printf("” has been created !\n");
			controll.create(commands);
			System.out.printf("Any commands you do are toward to eda\n");
		}
		else if(commands[0].equals("add") )
		{
			if(commands[1].equals("gate"))
			{
				controll.addgate(commands);
				System.out.printf("one");
				System.out.printf(commands[2]);
				System.out.printf("-gate called '");
				System.out.printf(commands[3]);
				System.out.printf("' has been added to circuit \n");
				System.out.printf(controll.getedaname());
			}
			else if(commands[1].equals("line"))
			{
				controll.addline(commands);
				System.out.printf("You have add a line called '");
				System.out.printf(commands[2]);
				System.out.printf("' and its two ends are connected:\n");
				System.out.printf(commands[2]);
				System.out.printf(".");
				System.out.printf(commands[3]);
				System.out.printf(": as");
				System.out.printf(commands[5]);
				System.out.printf(" of gate ");
				System.out.printf(commands[4]);
				System.out.printf("\n");
				System.out.printf(commands[2]);
				System.out.printf(".");
				System.out.printf(commands[6]);
				System.out.printf(": as ");
				System.out.printf(commands[8]);
				System.out.printf(" of gate ");
				System.out.printf(commands[7]);
				System.out.printf("\n");
			}

			
			
		}
		else if(commands[0].equals("list") )
		{
			controll.getlist();
		}
		else if(commands[0].equals("delete") )
		{
			System.out.printf("Your circuit ");
			System.out.printf(controll.getedaname());
			System.out.printf(" is deleted.\n");
			controll.delete();
			
		}
		else if(commands[0].equals("evaluate"))
		{
			controll.evaluate(commands);
		}
		else if(commands[0].equals("quit") )
		{
			System.out.printf("88");
			break;
		}
		System.out.printf(controll.getedaname());
		System.out.printf(" >");		
		}
		

		
	}
	
	public static String getcommand()throws IOException
	{
		BufferedReader buf = new BufferedReader(
                new InputStreamReader(System.in));
	        
		 	String text = buf.readLine();
		 	return text;
	}

}
