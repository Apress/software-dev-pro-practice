public class TeaBall extends TeaBag {  
   LooseLeafTea looseLeafTea;
   
   public TeaBall(LooseLeafTea looseLeafTeaIn) {
       looseLeafTea = looseLeafTeaIn;
       teaBagIsSteeped = looseLeafTea.teaIsSteeped;
   }
    
   public void steepTeaInCup() {
       looseLeafTea.steepTea();
       teaBagIsSteeped = true;
   }
}