/*
week16 go many black white
(1)convert the code to p5.js
(2)copy and paste
(3)it will jump out the local temporary webpage of 127.0.0.1 when pressed theRun button
(4)save as 'go' and change line 8 'sketch.js' as 'go.js' in index.html
(5)login Github and upload the file to the repository'XXX.github.io'
(6)after 5 minutes, the website is able to work through 'xxx.github.io/go'
*/
void setup(){
  size(450,450);
}
int []bx=new int[100];
int []by=new int[100];
int N=0;
void draw(){
  background(#E8AA2C);
  for(int y=50;y<450;y+=50){
    line(0,y,450,y);
  }
  for(int x=50;x<450;x+=50){
    line(x,0,x,450);
  }
  for(int i=0;i<N;i++){
    if(i%2==0) fill(0);
    else fill(255);
    ellipse(bx[i],by[i],40,40);
  }
  if(N%2==0) fill(0);
  else fill(255);
  ellipse(mouseX,mouseY,40,40);
}
void mousePressed(){
  bx[N]=mouseX;by[N]=mouseY;
  N++;
}
