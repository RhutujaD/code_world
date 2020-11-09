using System;


namespace AccountDay6lib
{
    public class Account
    {
        int id;
        static int getid;
        string name;
        double balance;
        static double Interestrate = 0.07;
        const float minbal = 1000;
        static double income;


        public Account(string nm, double bal)
        {
            id = ++getid;
            Name = nm;
            Balance = bal;

        }
        public int Id
        {
            get
            {
                return id;
            }
        }
        public string Name
        {
            set
            {
                name = value;
            }
            get
            {
                return name;
            }
        }
        public double Balance
        {
            set
            {
                if (value <= 0)
                {
                    throw new Exception("Cannot open account with 0 balance");
                }
                balance = value;
            }
            get
            {
                return balance;
            }
        }
        public void deposit(double amt)
        {
            if (amt <= 0)
            {
                throw new Exception("Cannot deposit 0 amt");
            }
            Balance += amt;
        }
        public void withdraw(double amt)
        {
            if (Balance - amt < minbal)
            {
                throw new Exception("Insufficent balance");
            }
            else
            {
                Balance -= amt;
            }
        }
        public static double calculateinterest(Account obj)
        {
            double income = obj.balance * Interestrate;
            obj.balance = obj.balance + income;
            return income;
           
        }
        public void display()
        {

           
            Console.WriteLine("id={0} name={1} balance={2} ", id, name, balance);
        }




    }
}
