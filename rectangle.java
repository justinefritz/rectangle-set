import java.util.Scanner;

public class rectangle{
    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int choice;
    System.out.println("1. Area of Rectangle");
    System.out.println("2. Triangle(*)");
    System.out.println("3. Exit");
    System.out.print(" : ");
    choice = sc.nextInt();
    if (choice == 1){
        rectangle();
    }else if(choice == 2){
        asterisk();
    }else if (choice == 3){
        System.out.println("Thank you for using the program.....");
    }else{
        main(null);
    }

}   

private static void rectangle(){
    Scanner sc = new Scanner(System.in);
    float l, w, area;
    System.out.print("Enter the length : ");
    l = sc.nextFloat();
    System.out.print("Enter the width : ");
    w = sc.nextFloat();
    area = (float) (l * w);
    System.out.println("The area of rectangle is " + area);
    main(null);  
}

private static void asterisk(){
    Scanner sc = new Scanner(System.in);
    int ast;
    System.out.print("Enter the height of triangle : ");
    ast = sc.nextInt();
    for (int x = 1; x <= ast; x++){
        for(int y = 1; y <= x; y++){
            System.out.print("* ");
        }
        System.out.println();
    }
    main(null);
}

}