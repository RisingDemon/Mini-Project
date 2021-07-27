string path_song = ".\\assets\\songs\\";
void ppause()
{
     mciSendString("pause mp3", NULL, 0, NULL);
}
void play()
{
     mciSendString("play mp3", NULL, 0, NULL);
}
void stop()
{
     mciSendString("close mp3", NULL, 0, NULL);
}
void s1()
{
     mciSendString("open \".\\assets\\songs\\sk.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
}
void s2()
{
     mciSendString("open \".\\assets\\songs\\tu chale.mp3\"   type mpegvideo alias mp3", NULL, 0, NULL);
}
void s3()
{
     mciSendString("open \".\\assets\\songs\\unity.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
}
void s4()
{
     mciSendString("open \".\\assets\\songs\\PLAY.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
}
void s5()
{
     mciSendString("open \".\\assets\\songs\\Galaxy.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
     mciSendString("play mp3 from 150 to 16000", NULL, 0, NULL);
}
