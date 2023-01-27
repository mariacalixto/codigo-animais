#include <stdio.h>
#include <conio.h>

//construa um algoritmo que seja capaz de concluir qual dentre os animais seguintes foi escolhido, atraves de perguntas e respostas.
//animais possiveis: leao, cavalo, homem, macaco, morcego, baleia, avestruz, pinguin, pato, aguia, tartaruga, crocodilo e cobra.

main(){
	
	char resp1, resp2, resp3, resp4, resp5, resp6, resp7, resp8, resp9, resp10, resp11, resp12;
	
	printf("\n animal e mamifero(s/n)?");
	resp1 = getche();
	
	if (resp1 == 's'){
		
		printf("\n animal e mamifero");
		printf("\n animal e quadrupede(s/n)?");
		resp3 = getche();
		
		if (resp3 == 's'){
			
			printf("\n animal quadrupede");
			printf("\n animal e carnivoro(s/n)?");
			resp4 = getche();
			
	            if (resp4 == 's'){
	    	
	    	    printf("\n e um leao");
	    	
		}
		
	    else {
			
		        printf("\n e um cavalo");
		
		     }
		
	
		}
	
	    else {
			
			printf("\n animal e um bipede(s/n)?");
			resp5 = getche();
			
			if (resp5 == 's'){
				
				printf("\n animal e bipede");
				printf("\n animal e carnivoro(s/n)");
				resp6 = getche();
				
		        if (resp6 == 's'){
		    	
		    	     printf("\n e um homem");		
			                     }
			else {
				
				     printf("\n e um macaco");
			     }
			}
		    else {
			
			         printf("\n e um animal voador(s/n)?");
			        resp7 = getche();
			
			         if (resp7 == 's'){
			         printf ("\n e um morcego");
		                     }
		    else {
			
		      	     printf("\n e uma baleia");
		         }
		            }	
		            }
		            }
		
		
	     
	
	else {
		
		printf("\n pode ser reptil ou ave");
		printf("\n animal e reptil(s/n)?");
		resp2 = getche();
		
		if (resp2 == 's'){
			
			printf("\n animal e reptil");
			printf("\n animal tem casco(s/n)?");
			resp8 = getche();
			
			if (resp8 == 's'){
				
				printf("\n e uma tartaruga");
			}
		else {
			
			    printf("\n e um carnivoro(s/n)?");
			    resp9 = getche();
			
			if (resp9 == 's'){
				
				printf("\n e um crocodilo");
				
			}
		else{
			
			    printf("\n e uma cobra");
		}
		}
			
		}
		
		else{
			
			    printf("\n animal e ave");
		  	    printf("\n e nao voador(s/n)?");
			    resp10 = getche();
			
			if (resp10 == 's'){
				
				printf("\n e tropical(s/n)?");
				resp11 = getche();
				
				if (resp11 == 's'){
					
				printf("\n e um avestruz");
				}
		else{
				
				printf("\n e um pinguin");
			}
			}
		else {
			
			    printf("\n animal e nadador(s/n)?");
			    resp12 = getche();
			
			if (resp12 == 's'){
				
				printf("\n e um pato");
			 }
		else {
			
			    printf("\n e uma aguia");
		}
		}
		}
	}    
	    
	
	
    }
