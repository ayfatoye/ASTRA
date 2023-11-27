
/* thisClassIsNotWorthCheckingOutTBH::CHECKMEOUT(letsGoToMcDonaldsLater*) */

void __thiscall
thisClassIsNotWorthCheckingOutTBH::CHECKMEOUT
          (thisClassIsNotWorthCheckingOutTBH *this,letsGoToMcDonaldsLater *param_1)

{
  *(letsGoToMcDonaldsLater **)(this + 0x28) = param_1;
  return;
}



/* thisClassIsNotWorthCheckingOutTBH::depthFirstSearch(thisClassIsNotWorthCheckingOutTBH*) */

void __thiscall
thisClassIsNotWorthCheckingOutTBH::depthFirstSearch
          (thisClassIsNotWorthCheckingOutTBH *this,thisClassIsNotWorthCheckingOutTBH *param_1)

{
  thisClassIsNotWorthCheckingOutTBH *local_18;
  thisClassIsNotWorthCheckingOutTBH *local_10;
  
  local_18 = param_1;
  local_10 = this;
  std::vector<>::push_back((vector<> *)(this + 8),&local_18);
  return;
}




/* thisClassIsNotWorthCheckingOutTBH::enzymesDoNotChangeFreeEnergy() */

thisClassIsNotWorthCheckingOutTBH __thiscall
thisClassIsNotWorthCheckingOutTBH::enzymesDoNotChangeFreeEnergy
          (thisClassIsNotWorthCheckingOutTBH *this)

{
  return this[0x21];
}




/* thisClassIsNotWorthCheckingOutTBH::fattyAcid() */

thisClassIsNotWorthCheckingOutTBH __thiscall
thisClassIsNotWorthCheckingOutTBH::fattyAcid(thisClassIsNotWorthCheckingOutTBH *this)

{
  return this[0x20];
}





/* thisClassIsNotWorthCheckingOutTBH::finalBoss(bool) */

void __thiscall
thisClassIsNotWorthCheckingOutTBH::finalBoss(thisClassIsNotWorthCheckingOutTBH *this,bool param_1 )

{
  this[0x21] = (thisClassIsNotWorthCheckingOutTBH)param_1;
  return;
}





/* thisClassIsNotWorthCheckingOutTBH::getPercentYield() */

vector<> * thisClassIsNotWorthCheckingOutTBH::getPercentYield(void)

{
  long in_RSI;
  vector<> *in_RDI;
  
  std::vector<>::vector(in_RDI,(vector *)(in_RSI + 8));
  return in_RDI;
}






/* thisClassIsNotWorthCheckingOutTBH::maybeThisDoesSomethingImportant(bool) */

void __thiscall
thisClassIsNotWorthCheckingOutTBH::maybeThisDoesSomethingImportant
          (thisClassIsNotWorthCheckingOutTBH *this,bool param_1)

{
  this[0x20] = (thisClassIsNotWorthCheckingOutTBH)param_1;
  return;
}



/* thisClassIsNotWorthCheckingOutTBH::michaelisMentenKinetics() */

undefined8 __thiscall
thisClassIsNotWorthCheckingOutTBH::michaelisMentenKinetics(thisClassIsNotWorthCheckingOutTBH *thi s)

{
  return *(undefined8 *)(this + 0x28);
}



/* thisClassIsNotWorthCheckingOutTBH::newFavoriteKid(thisClassIsNotWorthCheckingOutTBH*, int) */

void __thiscall
thisClassIsNotWorthCheckingOutTBH::newFavoriteKid
          (thisClassIsNotWorthCheckingOutTBH *this,thisClassIsNotWorthCheckingOutTBH *param_1,
          int param_2)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  
  pptVar1 = (thisClassIsNotWorthCheckingOutTBH **)
            std::vector<>::at((vector<> *)(this + 8),(long)param_2);
  *pptVar1 = param_1;
  return;
}




/* thisClassIsNotWorthCheckingOutTBH::performSynthesis() */

undefined4 __thiscall
thisClassIsNotWorthCheckingOutTBH::performSynthesis(thisClassIsNotWorthCheckingOutTBH *this)

{
  return *(undefined4 *)this;
}



/* thisClassIsNotWorthCheckingOutTBH::thisClassIsNotWorthCheckingOutTBH(int) */

void __thiscall
thisClassIsNotWorthCheckingOutTBH::thisClassIsNotWorthCheckingOutTBH
          (thisClassIsNotWorthCheckingOutTBH *this,int param_1)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<>::vector((vector<> *)(this + 8));
  *(int *)this = param_1;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  std::vector<>::vector((vector<> *)&local_28);
  std::vector<>::operator=((vector<> *)(this + 8),(vector *)&local_28);
  std::vector<>::~vector((vector<> *)&local_28);
  this[0x20] = (thisClassIsNotWorthCheckingOutTBH)0x1;
  this[0x21] = (thisClassIsNotWorthCheckingOutTBH)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}