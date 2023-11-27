
/* calculate_d_inverse(unsigned long, unsigned long) */

ulong calculate_d_inverse(ulong param_1,ulong param_2)

{
  ulong local_10;
  
  local_10 = 1;
  while( true ) {
    if (param_2 <= local_10) {
      return 0;
    }
    if ((local_10 * param_1) % param_2 == 1) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}


/* calculate_n(unsigned long, unsigned long) */

long calculate_n(ulong param_1,ulong param_2)

{
  return param_1 * param_2;
}



/* decrypt_message(unsigned long, unsigned long, unsigned long) */

undefined8 decrypt_message(ulong param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = mod_pow(param_1,param_2,param_3);
  return uVar1;
}




/* getVal(int) */

int getVal(int param_1)

{
  char *pcVar1;
  long in_FS_OFFSET;
  allocator<char> local_8e;
  allocator<char> local_8d;
  undefined4 local_8c;
  basic_string local_88 [32];
  basic_string<> local_68 [32];
  basic_string local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator<char>::allocator();
                    /* try { // try from 00102ff8 to 00102ffc has its CatchHandler @ 00103208 */
  std::__cxx11::basic_string<>::basic_string((char *)local_68,(allocator *)&DAT_00109029);
  std::allocator<char>::allocator();
                    /* try { // try from 00103021 to 00103025 has its CatchHandler @ 001031e4 */
  std::__cxx11::basic_string<>::basic_string((char *)local_88,(allocator *)&DAT_0010902d);
                    /* try { // try from 00103038 to 0010303c has its CatchHandler @ 001031cf */
  returnSame(local_48,local_88);
  pcVar1 = (char *)std::__cxx11::basic_string<>::c_str();
                    /* try { // try from 0010304c to 00103050 has its CatchHandler @ 001031ba */
  system(pcVar1);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_88);
  std::allocator<char>::~allocator(&local_8e);
  std::__cxx11::basic_string<>::~basic_string(local_68);
  std::allocator<char>::~allocator(&local_8d);
  local_8c = storePasscode(param_1);
  generateStr[abi:cxx11]((int)local_48,param_1);
                    /* try { // try from 001030c6 to 001030ca has its CatchHandler @ 00103229 */
  prinHin(SUB81(local_48,0));
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
  std::allocator<char>::allocator();
                    /* try { // try from 001030fb to 001030ff has its CatchHandler @ 00103295 */
  std::__cxx11::basic_string<>::basic_string((char *)local_68,(allocator *)&DAT_0010904a);
  std::allocator<char>::allocator();
                    /* try { // try from 00103124 to 00103128 has its CatchHandler @ 00103271 */
  std::__cxx11::basic_string<>::basic_string((char *)local_88,(allocator *)&DAT_0010904e);
                    /* try { // try from 0010313b to 0010313f has its CatchHandler @ 0010325c */
  returnSame(local_48,local_88);
  pcVar1 = (char *)std::__cxx11::basic_string<>::c_str();
                    /* try { // try from 0010314f to 00103153 has its CatchHandler @ 00103247 */
  system(pcVar1);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_88);
  std::allocator<char>::~allocator(&local_8e);
  std::__cxx11::basic_string<>::~basic_string(local_68);
  std::allocator<char>::~allocator(&local_8d);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1 * 3;
}





/* isPasscode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */

ulong isPasscode(basic_string param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined7 extraout_var;
  long in_FS_OFFSET;
  int local_74;
  allocator<char> local_70 [8];
  basic_string<> local_68 [32];
  bitset<8ul> local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator<char>::allocator();
                    /* try { // try from 0010356d to 00103571 has its CatchHandler @ 00103639 */
  std::__cxx11::basic_string<>::basic_string((char *)local_68,(allocator *)&DAT_0010901e);
  std::allocator<char>::~allocator(local_70);
  local_74 = 0;
  while( true ) {
    uVar2 = std::__cxx11::basic_string<>::size();
    if (uVar2 <= (ulong)(long)local_74) break;
    lVar3 = std::__cxx11::basic_string<>::c_str();
    std::bitset<8ul>::bitset((bitset<8ul> *)local_70,(long)*(char *)(lVar3 + local_74));
                    /* try { // try from 001035da to 001035de has its CatchHandler @ 0010366c */
    std::bitset<8ul>::to_string[abi:cxx11](local_48);
                    /* try { // try from 001035ed to 001035f1 has its CatchHandler @ 00103657 */
    std::__cxx11::basic_string<>::operator+=(local_68,(basic_string *)local_48);
    std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
    local_74 = local_74 + 1;
  }
  bVar1 = std::operator==((basic_string *)local_68,
                          "0101001101100001011110010100100001100101011011000110110001101111010101000 11011110100110101111001010011000110100101110100011101000110110001100101010 001100111001001101001011001010110111001100100"
                         );
  std::__cxx11::basic_string<>::~basic_string(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT71(extraout_var,bVar1) & 0xffffffff;
}





/* mod_pow(unsigned long, unsigned long, unsigned long) */

ulong mod_pow(ulong param_1,ulong param_2,ulong param_3)

{
  ulong local_28;
  ulong local_20;
  ulong local_10;
  
  local_10 = 1;
  local_20 = param_1;
  for (local_28 = param_2; local_28 != 0; local_28 = local_28 >> 1) {
    if ((local_28 & 1) != 0) {
      local_10 = (local_10 * local_20) % param_3;
    }
    local_20 = (local_20 * local_20) % param_3;
  }
  return local_10;
}





/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* papa[abi:cxx11]() */

basic_string<> * papa[abi:cxx11](void)

{
  int iVar1;
  basic_string<> *in_RDI;
  long in_FS_OFFSET;
  allocator<char> local_51;
  int local_50;
  int local_4c;
  __cxx11 local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = rand();
  local_4c = iVar1 % 5 + 1;
  std::allocator<char>::allocator();
                    /* try { // try from 00102a76 to 00102a7a has its CatchHandler @ 00102afb */
  std::__cxx11::basic_string<>::basic_string((char *)in_RDI,(allocator *)&DAT_0010901e);
  std::allocator<char>::~allocator(&local_51);
  for (local_50 = 0; local_50 < local_4c; local_50 = local_50 + 1) {
    iVar1 = rand();
                    /* try { // try from 00102ad1 to 00102ad5 has its CatchHandler @ 00102b2e */
    std::__cxx11::to_string(local_48,iVar1 % 10);
                    /* try { // try from 00102ae4 to 00102ae8 has its CatchHandler @ 00102b19 */
    std::__cxx11::basic_string<>::operator+=(in_RDI,(basic_string *)local_48);
    std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* performDecryption() */

undefined4 performDecryption(void)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  setValues(&local_48,&local_40,&local_38,&local_30);
  local_28 = calculate_n(local_48,local_38);
  local_20 = calculate_phi_n(local_48,local_38);
  local_18 = calculate_d_inverse(local_40,local_20);
  uVar1 = decrypt_message(local_30,local_18,local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




/* porqueTeFuiste(thisClassIsNotWorthCheckingOutTBH*, thisClassIsNotWorthCheckingOutTBH*, int) */

thisClassIsNotWorthCheckingOutTBH *
porqueTeFuiste(thisClassIsNotWorthCheckingOutTBH *param_1,thisClassIsNotWorthCheckingOutTBH *para m_2
              ,int param_3)

{
  int iVar1;
  thisClassIsNotWorthCheckingOutTBH *this;
  ulong uVar2;
  long in_FS_OFFSET;
  int local_44;
  vector<> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_44 = 0; local_44 < 0x19; local_44 = local_44 + 1) {
    this = (thisClassIsNotWorthCheckingOutTBH *)operator.new(0x30);
    thisClassIsNotWorthCheckingOutTBH::thisClassIsNotWorthCheckingOutTBH(this,local_44);
    thisClassIsNotWorthCheckingOutTBH::maybeThisDoesSomethingImportant(this,false);
    thisClassIsNotWorthCheckingOutTBH::depthFirstSearch(param_2,this);
  }
  iVar1 = thisClassIsNotWorthCheckingOutTBH::performSynthesis(param_2);
  thisClassIsNotWorthCheckingOutTBH::getPercentYield();
  uVar2 = std::vector<>::size(local_38);
                    /* try { // try from 0010339a to 0010339e has its CatchHandler @ 001033c0 */
  thisClassIsNotWorthCheckingOutTBH::newFavoriteKid
            (param_2,param_1,(int)((ulong)(long)(iVar1 * param_3 * 0x7e) % uVar2));
  std::vector<>::~vector(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}




/* prinHin(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */

void prinHin(basic_string param_1)

{
  int iVar1;
  basic_ostream *this;
  undefined7 in_register_00000039;
  
  iVar1 = rand();
  if (iVar1 % 0x19 == 0) {
    this = std::operator<<((basic_ostream *)std::cout,
                           (basic_string *)CONCAT71(in_register_00000039,param_1));
    std::basic_ostream<>::operator<<((basic_ostream<> *)this,std::endl<>);
  }
  return;
}




/* returnSame(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >
   const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
    */

basic_string * returnSame(basic_string *param_1,basic_string *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong in_RDX;
  long in_FS_OFFSET;
  ulong local_28;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::basic_string<>::basic_string(param_1);
  local_28 = 0;
  while( true ) {
    uVar4 = std::__cxx11::basic_string<>::size();
    if (uVar4 <= local_28) break;
    pbVar5 = (byte *)std::__cxx11::basic_string<>::operator[]((ulong)param_2);
    bVar1 = *pbVar5;
    std::__cxx11::basic_string<>::size();
    pbVar5 = (byte *)std::__cxx11::basic_string<>::operator[](in_RDX);
    bVar2 = *pbVar5;
                    /* try { // try from 001029b1 to 001029b5 has its CatchHandler @ 001029c7 */
    pbVar5 = (byte *)std::__cxx11::basic_string<>::operator[]((ulong)param_1);
    *pbVar5 = bVar1 ^ bVar2;
    local_28 = local_28 + 1;
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* sendHelp(int, letsGoToMcDonaldsLater*) */

long sendHelp(int param_1,letsGoToMcDonaldsLater *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = letsGoToMcDonaldsLater::spinMove(param_2);
  lVar2 = std::__cxx11::stol((basic_string *)gm[abi:cxx11],(ulong *)0x0,10);
  return lVar2 * (iVar1 * param_1);
}



/* setValues(unsigned long&, unsigned long&, unsigned long&, unsigned long&) */

void setValues(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  *param_1 = 0xecf3;
  *param_2 = 7;
  *param_3 = 0x71fb;
  *param_4 = 0x2c7b948f;
  return;
}





/* storePasscode(int) */

ulong storePasscode(int param_1)

{
  size_t sVar1;
  long in_FS_OFFSET;
  allocator<char> local_2aa;
  allocator<char> local_2a9;
  char *local_2a8;
  void *local_2a0;
  basic_string local_298 [32];
  basic_string<> local_278 [32];
  basic_string local_258 [32];
  basic_string local_238 [16];
  char local_228 [520];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::basic_fstream<>::basic_fstream();
  std::operator|(8,0x10);
  std::allocator<char>::allocator();
                    /* try { // try from 00102bd8 to 00102bdc has its CatchHandler @ 00102dfb */
  std::__cxx11::basic_string<>::basic_string((char *)local_278,(allocator *)&DAT_0010901f);
  std::allocator<char>::allocator();
                    /* try { // try from 00102c04 to 00102c08 has its CatchHandler @ 00102dd4 */
  std::__cxx11::basic_string<>::basic_string((char *)local_298,(allocator *)&DAT_00109023);
                    /* try { // try from 00102c24 to 00102c28 has its CatchHandler @ 00102dbc */
  returnSame(local_258,local_298);
                    /* try { // try from 00102c3f to 00102c43 has its CatchHandler @ 00102da4 */
  std::basic_fstream<>::open(local_238,(_Ios_Openmode)local_258);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_258);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_298);
  std::allocator<char>::~allocator(&local_2aa);
  std::__cxx11::basic_string<>::~basic_string(local_278);
  std::allocator<char>::~allocator(&local_2a9);
                    /* try { // try from 00102ca7 to 00102d69 has its CatchHandler @ 00102e13 */
  std::basic_ostream<>::seekp((long)local_228,0x931a);
  papa[abi:cxx11]();
  local_2a8 = (char *)std::__cxx11::basic_string<>::c_str();
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_258);
  sVar1 = strlen(local_2a8);
  local_2a0 = operator.new[](sVar1);
  strlen(local_2a8);
  std::basic_istream<>::read((char *)local_238,(long)local_2a0);
  strlen(local_2a8);
  std::basic_ostream<>::write(local_228,(long)local_2a8);
  std::basic_fstream<>::close();
  sVar1 = strlen(local_2a8);
  std::basic_fstream<>::~basic_fstream((basic_fstream<> *)local_238);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar1 & 0xffffffff;
}




/* traverse(thisClassIsNotWorthCheckingOutTBH*, int) */

void traverse(thisClassIsNotWorthCheckingOutTBH *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  thisClassIsNotWorthCheckingOutTBH **pptVar5;
  long in_FS_OFFSET;
  thisClassIsNotWorthCheckingOutTBH *local_60;
  vector<> local_58 [32];
  vector<> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_1;
  do {
    cVar2 = thisClassIsNotWorthCheckingOutTBH::fattyAcid(local_60);
    if (cVar2 == '\0') {
LAB_00103437:
      bVar1 = false;
    }
    else {
      cVar2 = thisClassIsNotWorthCheckingOutTBH::enzymesDoNotChangeFreeEnergy(local_60);
      if (cVar2 == '\x01') goto LAB_00103437;
      bVar1 = true;
    }
    if (!bVar1) {
      thisClassIsNotWorthCheckingOutTBH::michaelisMentenKinetics(local_60);
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    thisClassIsNotWorthCheckingOutTBH::getPercentYield();
    iVar3 = thisClassIsNotWorthCheckingOutTBH::performSynthesis(local_60);
                    /* try { // try from 0010347b to 0010347f has its CatchHandler @ 00103505 */
    thisClassIsNotWorthCheckingOutTBH::getPercentYield();
    uVar4 = std::vector<>::size(local_38);
                    /* try { // try from 001034aa to 001034ae has its CatchHandler @ 001034f0 */
    pptVar5 = (thisClassIsNotWorthCheckingOutTBH **)
              std::vector<>::at(local_58,(ulong)(long)(iVar3 * param_2 * 0x7e) % uVar4);
    local_60 = *pptVar5;
    std::vector<>::~vector(local_38);
    std::vector<>::~vector(local_58);
  } while( true );
}



/* calculate_phi_n(unsigned long, unsigned long) */

long calculate_phi_n(ulong param_1,ulong param_2)

{
  return (param_2 - 1) * (param_1 - 1);
}



undefined8 main(void)
{
  char cVar1;
  int iVar2;
  time_t tVar3;
  basic_ostream *pbVar4;
  thisClassIsNotWorthCheckingOutTBH *this;
  letsGoToMcDonaldsLater *plVar5;
  basic_ostream<> *this_00;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  thisClassIsNotWorthCheckingOutTBH *local_a0;
  letsGoToMcDonaldsLater *local_98;
  thisClassIsNotWorthCheckingOutTBH *local_90;
  vector<> local_88 [32];
  basic_string local_68 [32];
  basic_string local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  rD();
  std::__cxx11::basic_string<>::basic_string();
  local_a4 = performDecryption();
  tVar3 = time((time_t *)0x0);
  srand((uint)tVar3);
                    /* try { // try from 00103a0a to 00103a49 has its CatchHandler @ 00103ecb */
  pbVar4 = std::operator<<((basic_ostream *)std::cout,"What is the secret passcode?");
  std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,std::endl<>);
  std::getline<>((basic_istream *)std::cin,local_68);
  std::__cxx11::basic_string<>::basic_string(local_48);
                    /* try { // try from 00103a51 to 00103a55 has its CatchHandler @ 00103ea1 */
  cVar1 = isPasscode(SUB81(local_48,0));
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
  if (cVar1 == '\0') {
    getVal(8);
    system("sleep 8");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
                    /* try { // try from 00103a79 to 00103add has its CatchHandler @ 00103ecb */
  std::basic_ostream<>::operator<<((basic_ostream<> *)std::cout,std::endl<>);
  system("sleep 8");
  pbVar4 = std::operator<<((basic_ostream *)std::cout,
                           "I can\'t believe you figured this out! The rest should be REALLY easy!" )
  ;
  std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,std::endl<>);
  local_98 = (letsGoToMcDonaldsLater *)operator.new(0x38);
  letsGoToMcDonaldsLater::letsGoToMcDonaldsLater(local_98);
  std::vector<>::vector(local_88);
  for (local_b0 = 0; local_b0 < 0x1e; local_b0 = local_b0 + 1) {
    iVar2 = rand();
    local_b4 = iVar2 % 1000 + 1;
                    /* try { // try from 00103b50 to 00103e68 has its CatchHandler @ 00103eb6 */
    std::vector<>::push_back(local_88,&local_b4);
    letsGoToMcDonaldsLater::somethingGoesInThisFunction(local_98,local_b4);
  }
  std::basic_ostream<>::operator<<((basic_ostream<> *)std::cout,std::endl<>);
  local_a0 = (thisClassIsNotWorthCheckingOutTBH *)operator.new(0x30);
  thisClassIsNotWorthCheckingOutTBH::thisClassIsNotWorthCheckingOutTBH(local_a0,3);
  thisClassIsNotWorthCheckingOutTBH::finalBoss(local_a0,true);
  thisClassIsNotWorthCheckingOutTBH::CHECKMEOUT(local_a0,local_98);
  for (local_ac = 0; local_ac < 0xf; local_ac = local_ac + 1) {
    this = (thisClassIsNotWorthCheckingOutTBH *)operator.new(0x30);
    thisClassIsNotWorthCheckingOutTBH::thisClassIsNotWorthCheckingOutTBH(this,local_ac * local_ac );
    local_90 = this;
    local_a0 = (thisClassIsNotWorthCheckingOutTBH *)porqueTeFuiste(local_a0,this,local_a4);
  }
  pbVar4 = std::operator<<((basic_ostream *)std::cout,"What is the magic number?");
  std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,std::endl<>);
  std::getline<>((basic_istream *)std::cin,local_68);
  iVar2 = std::__cxx11::stoi(local_68,(ulong *)0x0,10);
  plVar5 = (letsGoToMcDonaldsLater *)traverse(local_a0,iVar2);
  if (local_98 == plVar5) {
    std::basic_ostream<>::operator<<((basic_ostream<> *)std::cout,std::endl<>);
    system("sleep 8");
    pbVar4 = std::operator<<((basic_ostream *)std::cout,"See how easy this is?");
    this_00 = (basic_ostream<> *)
              std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,std::endl<>);
    std::basic_ostream<>::operator<<(this_00,std::endl<>);
    local_a8 = 0;
    while( true ) {
      uVar10 = (ulong)local_a8;
      uVar6 = std::vector<>::size(local_88);
      if (uVar6 <= uVar10) break;
      piVar7 = (int *)std::vector<>::at(local_88,(long)local_a8);
      pbVar4 = (basic_ostream *)
               std::basic_ostream<>::operator<<((basic_ostream<> *)std::cout,*piVar7);
      std::operator<<(pbVar4," ");
      local_a8 = local_a8 + 1;
    }
    std::basic_ostream<>::operator<<((basic_ostream<> *)std::cout,std::endl<>);
    pbVar4 = std::operator<<((basic_ostream *)std::cout,
                             "Alright, so what\'s the extra special magic number?");
    std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,std::endl<>);
    std::getline<>((basic_istream *)std::cin,local_68);
    lVar8 = std::__cxx11::stol(local_68,(ulong *)0x0,10);
    lVar9 = sendHelp(local_a4,local_98);
    if (lVar8 == lVar9) {
      pbVar4 = std::operator<<((basic_ostream *)std::cout,
                               "WINNER WINNER CHICKEN DINNER! (You cracked every layer)");
      std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,std::endl<>);
      std::vector<>::~vector(local_88);
      std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_68);
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 0;
    }
    system("sleep 100");
    getVal(0xc);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  system("sleep 8");
  getVal(0x10);
                    /* WARNING: Subroutine does not return */
  exit(1);
}