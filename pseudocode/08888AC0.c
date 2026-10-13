/* Entry 0x08888AC0 | file offset 0x00085A98 | FUN_08888ac0 | bytes 388 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08888ac0(int param_1)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  func_0x08b158c8();
  iVar2 = func_0x08b05dec(_DAT_08b0cf20);
  if (iVar2 == 1) {
    iVar2 = FUN_088c99e4(*(undefined4 *)(param_1 + 0x7c8));
    iVar4 = *(int *)(param_1 + 0x4c);
    if (iVar4 == 9) {
      if (iVar2 == 0) {
        FUN_0888a8ec();
      }
    }
    else {
      bVar1 = false;
      if (((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) {
        bVar1 = true;
      }
      bVar3 = true;
      if ((bVar1) && ((*(char *)(param_1 + 0x68) == '\x01' || (*(int *)(param_1 + 0x50) == 4)))) {
        bVar3 = false;
      }
      else if (*(int *)(param_1 + 0x50) == 3) {
        bVar3 = false;
      }
      if (iVar4 == 10) {
        bVar3 = false;
      }
      if (iVar4 == 7) {
        bVar3 = false;
      }
      if (iVar4 == 0xc) {
        bVar3 = false;
      }
      if ((*DAT_089d8508 == '\x01') && ((*(uint *)(DAT_089d8508 + 0x2a44) & 4) == 0)) {
        bVar3 = false;
      }
      if (DAT_089d5f20 != '\0') {
        bVar3 = false;
      }
      if (bVar3) {
        func_0x08b129e0(_DAT_08b12de0);
        *(undefined4 *)(param_1 + 0x48) = 6;
      }
      else {
        *(undefined4 *)(param_1 + 0x48) = 7;
      }
    }
  }
  return;
}

