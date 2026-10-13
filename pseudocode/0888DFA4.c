/* Entry 0x0888DFA4 | file offset 0x0008AF7C | FUN_0888dfa4 | bytes 1032 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0888dfa4(int param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  
  FUN_08860e78();
  if (*(int *)(param_1 + 0x808) != 0) {
    FUN_08882298(DAT_089d69a8,*(int *)(param_1 + 0x808));
    *(undefined4 *)(param_1 + 0x808) = 0;
  }
  if (*(int *)(param_1 + 0x80c) != 0) {
    FUN_08882298(DAT_089d69a8,*(int *)(param_1 + 0x80c));
    *(undefined4 *)(param_1 + 0x80c) = 0;
  }
  func_0x08a620b0(_DAT_08a62280,0);
  DAT_089d4920 = 0x3f800000;
  *(undefined4 *)(DAT_089d6dc8 + 8) = 0x3f800000;
  *(undefined4 *)(DAT_089d6d80 + 300) = 0x3f800000;
  FUN_088759c0(DAT_089d6040);
  func_0x08b533e4(_DAT_08b54330);
  FUN_08844ab4(DAT_089d4960);
  func_0x08a3e8e0(_DAT_08a405e0);
  func_0x08a4fd38(_DAT_08a50568);
  func_0x08ab3d80(_DAT_08ab4250);
  func_0x08a80154(_DAT_08a80218);
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_088996f0();
    FUN_08893910(DAT_089d6ac8);
  }
  func_0x08ad091c();
  func_0x08afc944();
  FUN_088ce3d8(param_1 + 0x728);
  iVar6 = 0;
  iVar5 = param_1 + 0x230;
  iVar4 = param_1 + 0xe8;
  do {
    FUN_088d6dbc(iVar5);
    FUN_088de378(iVar4);
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 0x27c;
    iVar4 = iVar4 + 0xa4;
  } while (iVar6 < 2);
  FUN_088cc914(param_1 + 0xb0);
  FUN_088cd4c8(param_1 + 0x6c);
  func_0x08b04ca0(_DAT_08b05258);
  func_0x08b20b70(_DAT_08b212e8);
  func_0x08b1d980(_DAT_08b1fe60);
  uVar3 = FUN_0887cfe4();
  FUN_0887d2a8(uVar3);
  func_0x08b177dc();
  func_0x08b17680();
  func_0x08ab54d8(_DAT_08ab6738);
  func_0x08acd9f0(_DAT_08acee24);
  FUN_0884be10(DAT_089d4d80);
  func_0x08ac60bc(_DAT_08ac8ef8);
  FUN_0885a31c(DAT_089d4dc8);
  FUN_088a952c(DAT_089d6dc8);
  func_0x08b3bbfc(_DAT_08b3d6b8);
  func_0x08aeafe4();
  FUN_088a2780();
  func_0x08aef124();
  FUN_088a5e6c(DAT_089d6d80);
  FUN_088711e4();
  FUN_088958fc(DAT_089d6ad0);
  func_0x08acac38(_DAT_08acbbc8);
  func_0x08b13c6c();
  func_0x08b13b9c();
  func_0x08b53354(_DAT_08b54330);
  FUN_0881cb5c();
  func_0x08abb7fc(0);
  FUN_08887b4c(DAT_089d6a00);
  if (*(int *)(param_1 + 0x73c) != 0) {
    FUN_0887d674(*(undefined4 *)(DAT_089d6998 + 0xf2c0));
    FUN_088d0a1c(DAT_089d7830,*(undefined4 *)(param_1 + 0x73c));
    *(undefined4 *)(param_1 + 0x73c) = 0;
  }
  FUN_088d0370(DAT_089d7830,1,1);
  func_0x08ac8fc8(_DAT_08aca350);
  func_0x08a61fac(_DAT_08a62280);
  FUN_08864db8();
  func_0x08aceea8(_DAT_08acf110);
  FUN_08841ed8();
  FUN_08842210();
  cVar7 = *(char *)(param_1 + 0x68);
  if (cVar7 == '\0') {
    FUN_0888a3a4(0);
    cVar7 = *(char *)(param_1 + 0x68);
  }
  if (cVar7 == '\0') {
    FUN_0889081c(DAT_089d6ac0);
  }
  FUN_08866aa8(0xff,0xff,0xff);
  FUN_08873e14(0);
  FUN_08873e14(1);
  pcVar2 = DAT_089d8508;
  bVar1 = true;
  if (((*(int *)(param_1 + 0x4c) != 9) && (*(int *)(param_1 + 0x50) != 3)) &&
     (*(char *)(param_1 + 0x68) == '\0')) {
    if (*DAT_089d8508 == '\x01') {
      FUN_0888b6dc();
      iVar4 = FUN_0891bcd4(pcVar2);
      if (iVar4 == 0) {
        FUN_0888b8fc(DAT_089d6a14,0);
        FUN_0888b970(DAT_089d6a14);
      }
      bVar1 = false;
    }
  }
  if (bVar1) {
    FUN_08889cdc(param_1);
  }
  return;
}

