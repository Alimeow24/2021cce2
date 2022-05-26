PImage img;
void setup(){
  size(800,500);
  img = loadImage("image.jpg");
}
void draw(){
  image(img,mouseX,mouseY);
}
