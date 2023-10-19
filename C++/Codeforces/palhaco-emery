/*
    Computação Gráfica
	Atividade Prática: Palhaço 2D com OpenGL
	Autor: Émery Freitas Moriconi
	Créditos: Prof. Laurindo de Sousa Britto Neto
 */
 
// Bibliotecas utilizadas pelo OpenGL
#ifdef __APPLE__ // MacOS
    #define GL_SILENCE_DEPRECATION
    #include <GLUT/glut.h>
    #include <OpenGL/gl.h>
    #include <OpenGL/glu.h>
#else // Windows e Linux
    #include <GL/glut.h>
    #include <GL/gl.h>
    #include <GL/glu.h>
#endif

#include <cstdlib>
#include <math.h>

#define ESC 27

//Variaveis Globais usadas para definicao de cores
float R,G,B;


// Declaracoes antecipadas (forward) de funcoes para as funcoes callback do OpenGL
void init(void);
void reshape(int w, int h);
void keyboard(unsigned char key, int x, int y);
void keyboard_special(int key, int x, int y);
void display(void);

/*
 * Funcao principal
 */
int main(int argc, char** argv){
    glutInit(&argc, argv); // Passagens de parametros C para o glut
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); // Selecao do Modo do Display e do Sistema de cor utilizado
    glutInitWindowSize (512, 512);  // Tamanho da janela do OpenGL
    glutInitWindowPosition (100, 100); //Posicao inicial da janela do OpenGL
    glutCreateWindow ("Computacao Grafica: Palhaço 2D com OpenGL"); // Da nome para uma janela OpenGL
    init(); // Chama a funcao init();
    glutReshapeFunc(reshape); //funcao callback para redesenhar a tela
    glutDisplayFunc(display); //funcao callback de desenho
    glutKeyboardFunc(keyboard); //funcao callback do teclado
    glutSpecialFunc(keyboard_special);	//funcao callback do teclado especial
    glutMainLoop(); // executa o loop do OpenGL
    return EXIT_SUCCESS; // retorna 0 para o tipo inteiro da funcao main()
}

/*
 * Inicializa alguns parametros do GLUT
 */
void init(void){
    glClearColor(1.0, 1.0, 1.0, 1.0); //Limpa a tela com a cor branca;
    R = 0.0;
    G = 0.0;
    B = 0.0;
}


/*
 * Ajusta a projecao para o redesenho da janela
 */
void reshape(int w, int h)
{
	// Reinicializa o sistema de coordenadas
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

    // Definindo o Viewport para o tamanho da janela
	glViewport(0, 0, w, h);

	glOrtho (-(w/2), (w/2),-(h/2),(h/2), -1 ,1);   // Nesse caso, ficamos com a quantidade de pixels variavel,
                                                    // dependente da largura e altura da janela, e o
                                                    // centro dos eixos continua a se localizar no centro
                                                    // da tela.
    
   // muda para o modo GL_MODELVIEW (nao pretendemos alterar a projecao
   // quando estivermos desenhando na tela)
	glMatrixMode(GL_MODELVIEW);
}

/*
 * Funcao usada na funcao callback para controlar as teclas comuns (1 Byte) do teclado
 */
void keyboard(unsigned char key, int x, int y){
    switch (key) { // key - variavel que possui valor ASCII da tecla precionada
        case ESC: exit(EXIT_SUCCESS); break; //encerra o programa com sucesso
    }
}

/*
 *Funcao usada na fucao callback para controlar as teclas especiais (2 Byte) do teclado
 */
void keyboard_special(int key, int x, int y){
    switch(key){
      case GLUT_KEY_F1: R=0.0; G=0.0; B=1.0; break; // F1: muda a cor para azul
      case GLUT_KEY_F2: R=0.0; G=1.0; B=0.0; break; // F2: muda a cor para verde
      case GLUT_KEY_F3: R=1.0; G=0.0; B=0.0; break; // F3: muda a cor para vermelho
      default: break;
    }
    glutPostRedisplay();
}

/*Função (completamente disponibilizada nos slides do Professor Laurindo) para
	desenhar os círculos necessários ao longo da imagem do palhaço.	
*/
void desenhaCirculo(float raio, int num_linhas, bool preenchido){
	int i;
	GLfloat angulo;
	
	angulo = (2 * M_PI) / num_linhas;
	
	if(preenchido) glBegin(GL_TRIANGLE_FAN);
	else glBegin(GL_LINE_LOOP);
	
	for(i = 1; i<=num_linhas; i++){
		glVertex2f(-raio*sin(i * angulo), raio*cos(i * angulo));
	}
	glEnd();
}

/*
 * Funcao usada na funcao callback para desenhar na tela
 */
void display(void){
	//Limpa o Buffer de Cores e reinicia a matriz
    glClear(GL_COLOR_BUFFER_BIT); 
	glLoadIdentity();
	
			//Cabeça do palhaço
			glPushMatrix();
			   	glColor3f(255, 255, 0);
    			glTranslatef(0,120, 0);
    			desenhaCirculo(45,30,true);
 			glPopMatrix();
 			
 			//Nariz do palhaço
 			glPushMatrix();
    			glColor3f(255, 0, 0);
    			glTranslatef(0,120, 0);
    			desenhaCirculo(8,30,true);
    		glPopMatrix();
    		
    		//Sorriso do palhaço
    		glPushMatrix();
		    	glTranslatef(0,90, 0);
				glColor3f(255, 255, 255);
				desenhaCirculo(5,30,true);
        	glPopMatrix();
        	
        	glPushMatrix();
		    	glTranslatef(-16,95, 0);
				desenhaCirculo(5,30,true);
        	glPopMatrix();
        	
        	glPushMatrix();
		    	glTranslatef(-28,108, 0);
				desenhaCirculo(5,30,true);
        	glPopMatrix();
        	
        	glPushMatrix();
		    	glTranslatef(16,95, 0);
				desenhaCirculo(5,30,true);
        	glPopMatrix();
        	
        	glPushMatrix();
		    	glTranslatef(28,108, 0);
				desenhaCirculo(5,30,true);
        	glPopMatrix();
    		
    		//Chapéu do palhaço
    		glPushMatrix();
	    		glColor3f(0,0, 255);
				glTranslatef(0,15 , 0);		
				glBegin(GL_TRIANGLES);	
				glVertex2f(0, 200);
				glVertex2f(-50, 150);
		   		glVertex2f(50, 150);
		   		glEnd();
	   		glPopMatrix();

			//Olho direito do palhaço   
    		glPushMatrix();
    			glColor3f(0,0,0);
    			glTranslatef(16,135, 0);
				desenhaCirculo(8,30,true);
			glPopMatrix();
			
			//Olho esquerdo do palhaço 
			glPushMatrix();
				glTranslatef(-16,135, 0);
				desenhaCirculo(8,30,true);
		   	glPopMatrix();    
		
			//Roupa do palhaço   
			glPushMatrix();
				glTranslatef(0,30, 0);
				glColor3f(0,0, 255);
				glBegin(GL_QUADS);
				glVertex2f(45, 45);
				glVertex2f(45, -45);
		   		glVertex2f(-45, -45);
		   		glVertex2f(-45, 45);
				glEnd();
	   		glPopMatrix();
			
 			//Botões da roupa do palhaço
 			glPushMatrix();
 				glColor3f(0,255,0);
 				glTranslatef(0,30, 0);
				desenhaCirculo(10,30,true);
 			glPopMatrix();
 			
 			glPushMatrix();
 				glTranslatef(0,55, 0);
				desenhaCirculo(10,30,true);
 			glPopMatrix();
 			
 			glPushMatrix();
 				glTranslatef(0,5, 0);
				desenhaCirculo(10,30,true);
 			glPopMatrix();
 			
 			//Braço direito do palhaço
 			glPushMatrix();
 				glColor3f(255,0, 0);
 				glTranslatef(107,85, 0);
				glRotatef(30, 0, 0, 1);
				glScalef(1.3, 0.5, 0);
				
				glBegin(GL_QUADS);
				glVertex2f(45, 45);
				glVertex2f(45, -45);
		   		glVertex2f(-45, -45);
		   		glVertex2f(-45, 45);
				glEnd();	
			glPopMatrix();
		
			//Braço esquerdo do palhaço
 			glPushMatrix();
 				glColor3f(255,0, 0);
 				glTranslatef(-107,85, 0);
				glRotatef(-30, 0, 0, 1);
				glScalef(1.3, 0.5, 0);
				
				glBegin(GL_QUADS);
				glVertex2f(45, 45);
				glVertex2f(45, -45);
		   		glVertex2f(-45, -45);
		   		glVertex2f(-45, 45);
				glEnd();	
			glPopMatrix();
			
			//Perna direita do palhaço
 			glPushMatrix();
 				glColor3f(255,0, 0);
 				glTranslatef(52,-79, 0);
				glRotatef(-60, 0, 0, 1);
				glScalef(1.3, 0.5, 0);
				
				glBegin(GL_QUADS);
				glVertex2f(45, 45);
				glVertex2f(45, -45);
		   		glVertex2f(-45, -45);
		   		glVertex2f(-45, 45);
				glEnd();	
			glPopMatrix();
			
			//Perna esquerda do palhaço
 			glPushMatrix();
 				glColor3f(255,0, 0);
 				glTranslatef(-52,-79, 0);
				glRotatef(60, 0, 0, 1);
				glScalef(1.3, 0.5, 0);
				
				glBegin(GL_QUADS);
				glVertex2f(45, 45);
				glVertex2f(45, -45);
		   		glVertex2f(-45, -45);
		   		glVertex2f(-45, 45);
				glEnd();	
			glPopMatrix();
		
			//Mão direita do palhaço
 			glPushMatrix();
 				glColor3f(255, 255, 0);
 				glTranslatef(175,125, 0);
				glRotatef(30, 0, 0, 1);
				glScalef(0.3, 0.5, 0);
				
				glBegin(GL_QUADS);
				glVertex2f(45, 45);
				glVertex2f(45, -45);
		   		glVertex2f(-45, -45);
		   		glVertex2f(-45, 45);
				glEnd();	
			glPopMatrix();
			
			//Mão esquerda do palhaço
 			glPushMatrix();
 				glColor3f(255, 255, 0);
 				glTranslatef(-175,125, 0);
				glRotatef(-30, 0, 0, 1);
				glScalef(0.3, 0.5, 0);
				
				glBegin(GL_QUADS);
				glVertex2f(45, 45);
				glVertex2f(45, -45);
		   		glVertex2f(-45, -45);
		   		glVertex2f(-45, 45);
				glEnd();	
			glPopMatrix();
			
			//Pé direito do palhaço
 			glPushMatrix();
 				glColor3f(255, 255, 0);
 				glTranslatef(115,-135, 0);
				glRotatef(-150, 0, 0, 1);
				glScalef(0.8, 0.3, 0);
				
				glBegin(GL_QUADS);
				glVertex2f(45, 45);
				glVertex2f(45, -45);
		   		glVertex2f(-45, -45);
		   		glVertex2f(-45, 45);
				glEnd();	
			glPopMatrix();

			//Pé esquerdo do palhaço
 			glPushMatrix();
 				glColor3f(255, 255, 0);
 				glTranslatef(-115,-135, 0);
				glRotatef(150, 0, 0, 1);
				glScalef(0.8, 0.3, 0);
				
				glBegin(GL_QUADS);
				glVertex2f(45, 45);
				glVertex2f(45, -45);
		   		glVertex2f(-45, -45);
		   		glVertex2f(-45, 45);
				glEnd();	
			glPopMatrix();
    	
    	// manda o OpenGl renderizar as primitivas
 		glFlush();

}

