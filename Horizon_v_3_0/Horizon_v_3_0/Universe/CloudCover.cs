using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;
using Horizon;

#define NUM_REGIONS 14
#define NUM_DAYS 30

namespace Universe
{
    public class CloudCover{
        
        public double data[NUM_DAYS][NUM_REGIONS];
        
        private static CloudCover pinstance;
        
        public List<string> regions;
        
        public List<double> days;
        
        public static CloudCover Instance(){
            if (pinstance == 0){ //if first call create sole instnace
                pinstance = new CloudCover;
            }
            return pinstance;
        }

        
        public bool importCloudDataFromTextFile(string filename){
            using(StreanReader F = File.OpenText(filename);
            try{
                string line, temps;
                double tempd;
                int i, j;
                List<string> Fin;
                while ((line = F.ReadLine() != null))//parse everything into Fin
                {
                    string[] items = F.Split(' ');
                    for(i = 0; i< items.Length; i++){
                        Fin.add(items[i])
                    }
                }
                for(j = 1; j <NUM_REGIONS; j++){//skip first string
                    temps = Fin[j];
                    regions.add(temps);
                }
                for(i = 0; i < NUM_DAYS; i++ ){
                    tempd = Fin[i+NUM_REGIONS];
                    days.add(tempd);
                    for(j = 0; j < NUM_REGIONS; j++){
                        data[i][j] = Fin[i*NUM_DAYS + j]; //TODO: check this
                    }
                }
            }
                
            
                F.close();
                return true;
            }
            catch{
                return false;
            }                            
        }
        
        //protected CloudCover(const CloudCover){}
        
        protected CloudCover(){
            Console.WriteLine("Initialize Cloud Coverage Data... ");
            double init = 0.0;
            for (int (i) = 0; (i) < NUM_DAYS; (i)++)
            {
                 for(int j = 0; j < NUM_REGIONS; j++){
                     data[i][j] = init;
                 }
            }
        }
        

    }
}