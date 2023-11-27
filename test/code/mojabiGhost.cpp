
/* mojabiGhost::doesThisEvenDoAnything(int) */

void __thiscall mojabiGhost::doesThisEvenDoAnything(mojabiGhost *this,int param_1)

{
  *(int *)(this + 0x20) = param_1;
  return;
}


/* mojabiGhost::doYouWantACookie() */

undefined4 __thiscall mojabiGhost::doYouWantACookie(mojabiGhost *this)

{
  return *(undefined4 *)(this + 0x20);
}



/* mojabiGhost::getMeMyThemeMusic() */

undefined4 __thiscall mojabiGhost::getMeMyThemeMusic(mojabiGhost *this)

{
  return *(undefined4 *)this;
}




/* mojabiGhost::handMeTheAux() */

undefined8 __thiscall mojabiGhost::handMeTheAux(mojabiGhost *this)

{
  return *(undefined8 *)(this + 8);
}




/* mojabiGhost::mojabiGhost(int) */

void __thiscall mojabiGhost::mojabiGhost(mojabiGhost *this,int param_1)

{
  *(int *)this = param_1;
  *(undefined4 *)(this + 0x20) = 0xd;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}




/* mojabiGhost::someoneGetThisGoofy() */

undefined8 __thiscall mojabiGhost::someoneGetThisGoofy(mojabiGhost *this)

{
  return *(undefined8 *)(this + 0x10);
}




/* mojabiGhost::tequilaShot(mojabiGhost*) */

void __thiscall mojabiGhost::tequilaShot(mojabiGhost *this,mojabiGhost *param_1)

{
  *(mojabiGhost **)(this + 8) = param_1;
  return;
}



/* mojabiGhost::theBestFunctionEver(mojabiGhost*) */

void __thiscall mojabiGhost::theBestFunctionEver(mojabiGhost *this,mojabiGhost *param_1)

{
  *(mojabiGhost **)(this + 0x18) = param_1;
  return;
}




/* mojabiGhost::vodkaFunction(mojabiGhost*) */

void __thiscall mojabiGhost::vodkaFunction(mojabiGhost *this,mojabiGhost *param_1)

{
  *(mojabiGhost **)(this + 0x10) = param_1;
  return;
}





/* mojabiGhost::whatsForDinner() */

undefined8 __thiscall mojabiGhost::whatsForDinner(mojabiGhost *this)

{
  return *(undefined8 *)(this + 0x18);
}
