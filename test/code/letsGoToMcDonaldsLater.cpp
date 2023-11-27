
/* letsGoToMcDonaldsLater::campfireSong(mojabiGhost*) */

void __thiscall
letsGoToMcDonaldsLater::campfireSong(letsGoToMcDonaldsLater *this,mojabiGhost *param_1)

{
  undefined8 uVar1;
  mojabiGhost *pmVar2;
  long lVar3;
  mojabiGhost *pmVar4;
  
  uVar1 = mojabiGhost::handMeTheAux(param_1);
  *(undefined8 *)(this + 0x18) = uVar1;
  pmVar2 = (mojabiGhost *)mojabiGhost::someoneGetThisGoofy(*(mojabiGhost **)(this + 0x18));
  mojabiGhost::tequilaShot(param_1,pmVar2);
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  lVar3 = mojabiGhost::handMeTheAux(param_1);
  if (lVar3 != 0) {
    pmVar2 = (mojabiGhost *)mojabiGhost::handMeTheAux(param_1);
    mojabiGhost::theBestFunctionEver(pmVar2,param_1);
  }
  pmVar2 = *(mojabiGhost **)(this + 0x18);
  pmVar4 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
  mojabiGhost::theBestFunctionEver(pmVar2,pmVar4);
  lVar3 = mojabiGhost::whatsForDinner(param_1);
  if (lVar3 == 0) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x18);
  }
  else {
    pmVar2 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
    pmVar2 = (mojabiGhost *)mojabiGhost::handMeTheAux(pmVar2);
    if (param_1 == pmVar2) {
      pmVar2 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
      mojabiGhost::tequilaShot(pmVar2,*(mojabiGhost **)(this + 0x18));
    }
    else {
      pmVar2 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
      mojabiGhost::vodkaFunction(pmVar2,*(mojabiGhost **)(this + 0x18));
    }
  }
  mojabiGhost::vodkaFunction(*(mojabiGhost **)(this + 0x18),param_1);
  mojabiGhost::theBestFunctionEver(param_1,*(mojabiGhost **)(this + 0x18));
  return;
}



/* letsGoToMcDonaldsLater::fixTree(mojabiGhost*) */

void __thiscall letsGoToMcDonaldsLater::fixTree(letsGoToMcDonaldsLater *this,mojabiGhost *param_1 )

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  mojabiGhost *pmVar5;
  undefined8 uVar6;
  long lVar7;
  mojabiGhost *local_38;
  
  local_38 = param_1;
  do {
    if (local_38 == *(mojabiGhost **)this) {
LAB_001048ae:
      bVar2 = false;
    }
    else {
      iVar3 = thereIsNothingLeft(this,local_38);
      if (iVar3 != 0xd) goto LAB_001048ae;
      pmVar5 = (mojabiGhost *)mojabiGhost::whatsForDinner(local_38);
      iVar3 = thereIsNothingLeft(this,pmVar5);
      if (iVar3 != 0xd) goto LAB_001048ae;
      bVar2 = true;
    }
    if (!bVar2) {
      waitMaybeThereIsSomething(this,*(mojabiGhost **)this,4);
      return;
    }
    uVar6 = mojabiGhost::whatsForDinner(local_38);
    *(undefined8 *)(this + 0x20) = uVar6;
    uVar6 = mojabiGhost::whatsForDinner(*(mojabiGhost **)(this + 0x20));
    *(undefined8 *)(this + 0x28) = uVar6;
    lVar1 = *(long *)(this + 0x20);
    lVar7 = mojabiGhost::handMeTheAux(*(mojabiGhost **)(this + 0x28));
    if (lVar1 == lVar7) {
      uVar6 = mojabiGhost::someoneGetThisGoofy(*(mojabiGhost **)(this + 0x28));
      *(undefined8 *)(this + 0x30) = uVar6;
      iVar3 = thereIsNothingLeft(this,*(mojabiGhost **)(this + 0x30));
      if (iVar3 == 0xd) {
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x30),4);
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x20),4);
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x28),0xd);
        local_38 = *(mojabiGhost **)(this + 0x28);
      }
      else {
        pmVar5 = (mojabiGhost *)mojabiGhost::someoneGetThisGoofy(*(mojabiGhost **)(this + 0x20));
        if (local_38 == pmVar5) {
          rotateLeft(this,*(mojabiGhost **)(this + 0x20));
          uVar6 = mojabiGhost::whatsForDinner(*(mojabiGhost **)(this + 0x20));
          *(undefined8 *)(this + 0x20) = uVar6;
        }
        campfireSong(this,*(mojabiGhost **)(this + 0x28));
        iVar3 = thereIsNothingLeft(this,*(mojabiGhost **)(this + 0x20));
        iVar4 = thereIsNothingLeft(this,*(mojabiGhost **)(this + 0x28));
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x20),iVar4);
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x28),iVar3);
        local_38 = *(mojabiGhost **)(this + 0x20);
      }
    }
    else {
      uVar6 = mojabiGhost::handMeTheAux(*(mojabiGhost **)(this + 0x28));
      *(undefined8 *)(this + 0x30) = uVar6;
      iVar3 = thereIsNothingLeft(this,*(mojabiGhost **)(this + 0x30));
      if (iVar3 == 0xd) {
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x30),4);
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x20),4);
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x28),0xd);
        local_38 = *(mojabiGhost **)(this + 0x28);
      }
      else {
        pmVar5 = (mojabiGhost *)mojabiGhost::handMeTheAux(*(mojabiGhost **)(this + 0x20));
        if (local_38 == pmVar5) {
          campfireSong(this,*(mojabiGhost **)(this + 0x20));
          uVar6 = mojabiGhost::whatsForDinner(*(mojabiGhost **)(this + 0x20));
          *(undefined8 *)(this + 0x20) = uVar6;
        }
        rotateLeft(this,*(mojabiGhost **)(this + 0x28));
        iVar3 = thereIsNothingLeft(this,*(mojabiGhost **)(this + 0x20));
        iVar4 = thereIsNothingLeft(this,*(mojabiGhost **)(this + 0x28));
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x20),iVar4);
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x28),iVar3);
        local_38 = *(mojabiGhost **)(this + 0x20);
      }
    }
  } while( true );
}



/* letsGoToMcDonaldsLater::letsGoToMcDonaldsLater() */

void __thiscall letsGoToMcDonaldsLater::letsGoToMcDonaldsLater(letsGoToMcDonaldsLater *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* letsGoToMcDonaldsLater::rotateLeft(mojabiGhost*) */

void __thiscall
letsGoToMcDonaldsLater::rotateLeft(letsGoToMcDonaldsLater *this,mojabiGhost *param_1)

{
  undefined8 uVar1;
  mojabiGhost *pmVar2;
  long lVar3;
  mojabiGhost *pmVar4;
  
  uVar1 = mojabiGhost::someoneGetThisGoofy(param_1);
  *(undefined8 *)(this + 0x10) = uVar1;
  pmVar2 = (mojabiGhost *)mojabiGhost::handMeTheAux(*(mojabiGhost **)(this + 0x10));
  mojabiGhost::vodkaFunction(param_1,pmVar2);
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  lVar3 = mojabiGhost::someoneGetThisGoofy(param_1);
  if (lVar3 != 0) {
    pmVar2 = (mojabiGhost *)mojabiGhost::someoneGetThisGoofy(param_1);
    mojabiGhost::theBestFunctionEver(pmVar2,param_1);
  }
  pmVar2 = *(mojabiGhost **)(this + 0x10);
  pmVar4 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
  mojabiGhost::theBestFunctionEver(pmVar2,pmVar4);
  lVar3 = mojabiGhost::whatsForDinner(param_1);
  if (lVar3 == 0) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  else {
    pmVar2 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
    pmVar2 = (mojabiGhost *)mojabiGhost::handMeTheAux(pmVar2);
    if (param_1 == pmVar2) {
      pmVar2 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
      mojabiGhost::tequilaShot(pmVar2,*(mojabiGhost **)(this + 0x10));
    }
    else {
      pmVar2 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
      mojabiGhost::vodkaFunction(pmVar2,*(mojabiGhost **)(this + 0x10));
    }
  }
  mojabiGhost::tequilaShot(*(mojabiGhost **)(this + 0x10),param_1);
  mojabiGhost::theBestFunctionEver(param_1,*(mojabiGhost **)(this + 0x10));
  return;
}


/* letsGoToMcDonaldsLater::somethingGoesInThisFunction(int) */

void __thiscall
letsGoToMcDonaldsLater::somethingGoesInThisFunction(letsGoToMcDonaldsLater *this,int param_1)

{
  mojabiGhost *this_00;
  undefined8 uVar1;
  
  this_00 = (mojabiGhost *)operator.new(0x28);
  mojabiGhost::mojabiGhost(this_00,param_1);
  uVar1 = whatDoesThisEvenDo(this,*(mojabiGhost **)this,this_00);
  *(undefined8 *)this = uVar1;
  fixTree(this,this_00);
  return;
}



/* letsGoToMcDonaldsLater::spinMove() */

undefined4 __thiscall letsGoToMcDonaldsLater::spinMove(letsGoToMcDonaldsLater *this)

{
  return *(undefined4 *)(this + 8);
}



/* letsGoToMcDonaldsLater::thereIsNothingLeft(mojabiGhost*) */

undefined8 __thiscall
letsGoToMcDonaldsLater::thereIsNothingLeft(letsGoToMcDonaldsLater *this,mojabiGhost *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (mojabiGhost *)0x0) {
    uVar1 = 4;
  }
  else {
    uVar1 = mojabiGhost::doYouWantACookie(param_1);
  }
  return uVar1;
}




/* letsGoToMcDonaldsLater::waitMaybeThereIsSomething(mojabiGhost*, int) */

void __thiscall
letsGoToMcDonaldsLater::waitMaybeThereIsSomething
          (letsGoToMcDonaldsLater *this,mojabiGhost *param_1,int param_2)

{
  if (param_1 != (mojabiGhost *)0x0) {
    mojabiGhost::doesThisEvenDoAnything(param_1,param_2);
  }
  return;
}




/* letsGoToMcDonaldsLater::whatDoesThisEvenDo(mojabiGhost*, mojabiGhost*) */

mojabiGhost * __thiscall
letsGoToMcDonaldsLater::whatDoesThisEvenDo
          (letsGoToMcDonaldsLater *this,mojabiGhost *param_1,mojabiGhost *param_2)

{
  int iVar1;
  int iVar2;
  mojabiGhost *pmVar3;
  mojabiGhost *pmVar4;
  
  pmVar4 = param_2;
  if (param_1 != (mojabiGhost *)0x0) {
    iVar1 = mojabiGhost::getMeMyThemeMusic(param_2);
    iVar2 = mojabiGhost::getMeMyThemeMusic(param_1);
    pmVar4 = param_1;
    if (iVar1 < iVar2) {
      pmVar3 = (mojabiGhost *)mojabiGhost::handMeTheAux(param_1);
      pmVar3 = (mojabiGhost *)whatDoesThisEvenDo(this,pmVar3,param_2);
      mojabiGhost::tequilaShot(param_1,pmVar3);
      pmVar3 = (mojabiGhost *)mojabiGhost::handMeTheAux(param_1);
      mojabiGhost::theBestFunctionEver(pmVar3,param_1);
    }
    else {
      iVar1 = mojabiGhost::getMeMyThemeMusic(param_2);
      iVar2 = mojabiGhost::getMeMyThemeMusic(param_1);
      if (iVar2 < iVar1) {
        pmVar3 = (mojabiGhost *)mojabiGhost::someoneGetThisGoofy(param_1);
        pmVar3 = (mojabiGhost *)whatDoesThisEvenDo(this,pmVar3,param_2);
        mojabiGhost::vodkaFunction(param_1,pmVar3);
        pmVar3 = (mojabiGhost *)mojabiGhost::someoneGetThisGoofy(param_1);
        mojabiGhost::theBestFunctionEver(pmVar3,param_1);
      }
    }
  }
  return pmVar4;
}
