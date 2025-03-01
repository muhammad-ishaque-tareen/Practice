package Lab4;

public class BankAccount 
{
    private String accNumber;
    private String accHolderName;
    private double balance;

    public BankAccount(String accNumber, String accHolderName, double initialBalance) 
    {
        this.accNumber = accNumber;
        this.accHolderName = accHolderName;
        this.balance = initialBalance;
    }

    public void deposit(double amount) 
    {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited: " + amount);
        } else {
            System.out.println("Deposit amount positive numbers");
        }
    }

    public void withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } else if (amount <= 0) 
        {
            System.out.println("Withdrawal amount in positive Numbers.");
        } 
        else 
        {
            System.out.println("Low funds. Available balance: " + balance);
        }
    }

    public double _getBalance() 
    {
        return balance;
    }

    public static void main(String[] args) 
    {
        BankAccount account = new BankAccount("983676885", "Muhammad Ishaque Tareen", 650000.0);

        account.deposit(10000.0);
        account.withdraw(23000.0);
        account.withdraw(15000.0);

        System.out.println("Final balance: " + account._getBalance());
    }
}
