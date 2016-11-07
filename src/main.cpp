using namespace std;

int main()
{
    Student *p1 = new Student();
    p1->ID = "S0001";
    p1->Class1 = 10;
    p1->Class2 = 20;
    p1->Class3 = 30;
    p1->Class4 = 40;
    p1->Class5 = 50;
    
   printf ("| %7s | %7s | %7s | %7s | %7s | %7s | %7s | %7s | %7s |\n", "ID", "COSC1", "COSC2", "COSC3", "COSC4", "COSC5", "Total", "Percent", "Grade");
   printf ("| %7s | %7s | %7s | %7s | %7s | %7s | %7s | %7s | %7s |\n", "-------", "-------", "-------", "-------", "-------", "-------", "-------", "-------", "-------");
   printf ("| %7s | %7d | %7d | %7d | %7d | %7d | %7d | %.4f | %7s |\n", p1->ID.c_str(),p1->Class1,p1->Class2,p1->Class3,p1->Class4,p1->Class5,p1->TotalScore(),p1->TotalPercent(),p1->Grade().c_str());
   
   return 0;
}
