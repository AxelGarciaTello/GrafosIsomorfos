int sonIsomorfos(char vertices1[10], char aristas1[25][2], char vertices2[10], char aristas2[25][2]){
	int salida=0;
	int contadorVertices1=0;
	int contadorVertices2=0;
	int contadorAristas1=0;
	int contadorAristas2=0;
	int grado1[10];
	int grado2[10];
	int revisarVertices1=0;
	int revisarAristas1=0;
	int revisarVertices2=0;
	int revisarAristas2=0;
	int eliminarGrado[10];
	int copiaGrado=0;
	int buscarGrado1=0;
	int buscarGrado2=0;
	int compararGrados=0;
	while(vertices1[contadorVertices1]!=0 || contadorVertices1<10){
		contadorVertices1++;
	}
	while(vertices2[contadorVertices2]!=0 || contadorVertices2<10){
		contadorVertices2++;
	}
	if(contadorVertices1!=contadorVertices2){
		salida=0;
	}
	else{
		while(aristas1[contadorAriastas1][0]!=0 || contadorAriastas1<25){
			contadorAristas1++;
		}
		while(aristas2[contadorAriastas2][0]!=0 || contadorAriastas2<25){
			contadorAristas2++;
		}
		if(contadorAristas1!=contadorAristas2){
			salida=0;
		}
		else{
			for(revisarVertices1=0; revisarVertices1<10; revisarVertices1++{
				for(revisarAristas1=0; revisarAristas1<25; revisarAristas1++){
					if(vertices1[revisarVertices1]==aristas1[revisarAristas1][0]){
						grado1[revisarVertices1]++;
				}
			}
			for(revisarVertices1=0; revisarVertices1<10; revisarVertices1++{
				for(revisarAristas1=0; revisarAristas1<25; revisarAristas1++){
					if(vertices1[revisarVertices1]==aristas1[revisarAristas1][1]){
						grado1[revisarVertices1]++;
				}
			}
			for(revisarVertices2=0; revisarVertices2<10; revisarVertices2++{
				for(revisarAristas2=0; revisarAristas2<25; revisarAristas2++){
					if(vertices2[revisarVertices2]==aristas2[revisarAristas2][0]){
						grado2[revisarVertices2]++;
				}
			}
			for(revisarVertices2=0; revisarVertices2<10; revisarVertices2++{
				for(revisarAristas2=0; revisarAristas2<25; revisarAristas2++){
					if(vertices2[revisarVertices2]==aristas2[revisarAristas2][1]){
						grado2[revisarVertices2]++;
				}
			}
			for(copiaGrado=0; copiaGrado<10; copiaGrado++){
				eliminarGrado[copiaGrado]=grado2[copiaGrado];
			}
			for(buscarGrado1=0; buscarGrado1<10; buscarGrado1++){
				for(buscarGrado2=0; buscarGrado2<10; buscarGrado2++){
					if(grado1[buscarGrado1]==eliminarGradobuscarGrado2]){
						eliminarGrado[buscarGrado2]==0;
						buscarGrado2=10;
					}
				}
			}
			for(compararGrados=0; compararGrados<10; compararGrados++){
				if(eliminarGrado[compararGrados]==0){
					salida=1;
				}
				else{
					salida=0;
					compararGrados=10;
				}
			}
			if(salida==1){
				
			}
		}
	}
	return salida;
}
