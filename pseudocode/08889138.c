/* Entry 0x08889138 | file offset 0x00086110 | FUN_08889138 | bytes 400 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08889138(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_089d6a10;
  iVar3 = DAT_089d69a8;
  if (*(int *)(DAT_089d6a10 + 0x4c) == 5) {
    if (DAT_089d8364 != 0) {
      iVar2 = *(int *)(DAT_089d6a10 + 0x58);
      if ((*(uint *)(DAT_089d8364 + 0x10e8) & 1) == 0) {
        if (iVar2 == 0x10) {
          FUN_08889944(DAT_089d6a10,*(undefined4 *)(DAT_089d6a10 + 0x5c));
          *(undefined4 *)(iVar3 + 0x2004) = 1;
          *(undefined4 *)(iVar3 + 0x2008) = 1;
          *(undefined4 *)(param_1 + 0x44) = 1;
          *(undefined4 *)(param_1 + 0x48) = 1;
        }
      }
      else if (*(char *)(DAT_089d8364 + 0x16e4) == '\x01') {
        if (iVar2 == 0x10) {
          FUN_08889944(DAT_089d6a10,*(undefined4 *)(DAT_089d6a10 + 0x5c));
          *(undefined4 *)(iVar3 + 0x2004) = 1;
          *(undefined4 *)(iVar3 + 0x2008) = 1;
          *(undefined4 *)(param_1 + 0x44) = 1;
          *(undefined4 *)(param_1 + 0x48) = 1;
        }
      }
      else if (iVar2 != 0x10) {
        *(int *)(DAT_089d6a10 + 0x5c) = iVar2;
        FUN_08889944(iVar1,0x10);
        *(undefined4 *)(iVar3 + 0x2004) = 2;
        *(undefined4 *)(iVar3 + 0x2008) = 2;
        *(undefined4 *)(param_1 + 0x44) = 2;
        *(undefined4 *)(param_1 + 0x48) = 2;
      }
    }
    iVar3 = *(int *)(iVar1 + 0x48);
    if ((((iVar3 != 8) && (iVar3 != 5)) && (iVar3 != 7)) &&
       (iVar3 = func_0x08b133e4(_DAT_08b13b48,iVar3 == 3), iVar3 == 0)) {
      FUN_089072ac(DAT_089d8364,1);
      func_0x08b13314(_DAT_08b13b48);
      if (*(int *)(_DAT_08b0cf20 + 8) == 0) {
        FUN_0888a7e0();
      }
      else {
        *(undefined4 *)(iVar1 + 0x48) = 5;
      }
    }
  }
  return;
}

