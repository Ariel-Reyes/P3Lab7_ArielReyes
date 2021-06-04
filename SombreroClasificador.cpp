#include "SombreroClasificador.hpp"

SombreroClasificador::SombreroClasificador()
{
}

SombreroClasificador::~SombreroClasificador()
{
}

 ClaseHogwarts* SombreroClasificador::clasificar_magos_nuevos(vector<Mago*> ma,int year){
 	int prom_mh=0; 
 	int prom_ms=0; 
 	int prom_mr=0;
 	int prom_mg=0;
 	ClaseHogwarts* ch = new ClaseHogwarts();
 	for(int i=0;i<ma.size();i++){
 		const type_info& tipo = typeid(*ma[i]);
 		cout<<tipo.name()<<endl; 
	 } 
 
	for(int i=0;i<ma.size();i++){
		MagoHufflepuff* mh = dynamic_cast<MagoHufflepuff*>(ma[i]);
		MagoSlytherin* ms = dynamic_cast<MagoSlytherin*>(ma[i]);
	    MagoRavenclaw* mr = dynamic_cast<MagoRavenclaw*>(ma[i]);
	    MagoGryffindor* mg = dynamic_cast<MagoGryffindor*>(ma[i]);

            if(mh){
            	cout<<"-------MagoHufflepuff--------"<<endl; 
            	cout<<"Astucia: "<<mh->get_astucia()<<endl;
            	cout<<"Lealtad: "<<mh->get_lealtad()<<endl;
            	cout<<"Valentia: "<<mh->get_valentia()<<endl;
            	cout<<"Paciencia: "<<mh->get_paciencia()<<endl; 
            	cout<<"Inteligencia: "<<mh->get_inteligencia()<<endl;
            	prom_mh = mh->get_lealtad() + mh->get_paciencia(); 
				ch->set_mago_hufflepuff(*mh);  
            	
			} 
			
			if(ms){
				cout<<".........MagoSlytherin............"<<endl;
				cout<<"Astucia: "<<ms->get_astucia()<<endl;
				cout<<"Inteligencia: "<<ms->get_inteligencia()<<endl; 
				cout<<"Lealtad: "<<ms->get_lealtad()<<endl;
				cout<<"Valentia: "<<ms->get_valentia()<<endl;
				cout<<"Liderazgo: "<<ms->get_liderazgo()<<endl; 
				prom_ms = ms->get_liderazgo() + ms->get_astucia(); 
				ch->set_mago_slytherin(*ms); 
			}
			
			if(mr){
				cout<<"..........MagoRavenclaw............"<<endl; 
				cout<<"Astucia: "<<mr->get_astucia()<<endl;
				cout<<"Creatividad: "<<mr->get_creatividad()<<endl;
				cout<<"Valentia: "<<mr->get_valentia()<<endl;
				cout<<"Inteligencia: "<<mr->get_inteligencia()<<endl;
				cout<<"Lealtad: "<<mr->get_lealtad()<<endl;
				prom_mr = mr->get_inteligencia() + mr->get_creatividad(); 
				ch->set_mago_ravenclaw(*mr);
			
			}
			
			if(mg){
				cout<<".........MagoGryffindor..........."<<endl; 
				cout<<"Astucia: "<<mg->get_astucia()<<endl; 
				cout<<"Atrevimiento: "<<mg->get_atrevimiento()<<endl;
				cout<<"Inteligencia: "<<mg->get_inteligencia()<<endl;
				cout<<"Valentia: "<<mg->get_valentia()<<endl; 
				cout<<"Lealtad: "<<mg->get_lealtad()<<endl;
				prom_mg = mg->get_valentia() + mg->get_atrevimiento(); 
				ch->set_mago_gryffindor(*mg);  
			}
		cout<<"...........Promedios............."<<endl; 
		cout<<"Promedio Gryffindor: "<<prom_mg<<endl; 
		cout<<"Promedio Ravenclaw: "<<prom_mr<<endl; 
		cout<<"Promedio Slytherin: "<<prom_ms<<endl;  
		cout<<"Promedio Hufflepuff: "<<prom_mh<<endl; 
		
		
	} 
	 
 return ch; 
	 
 	
 	
 };
 	
 
 
 
 
 
 
