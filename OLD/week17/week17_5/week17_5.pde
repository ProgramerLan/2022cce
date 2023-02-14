import processing.sound.*;
SoundFile file;
void setup()
{
  size(400,400);
  file = new SoundFile(this, "bocchi.mp3");
  file.loop(); 
}
void draw()
{
}
