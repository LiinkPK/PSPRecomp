/* Entry 0x08889694 | file offset 0x0008666C | FUN_08889694 | bytes 372 */

void FUN_08889694(int param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  FUN_0886503c(param_1 + 4,FUN_08889098,FUN_088890b8,FUN_088890d8);
  iVar1 = *(int *)(param_1 + 0x7c8);
  if ((param_2 == '\0') && (*(int *)(param_1 + 0x50) != 4)) {
    if (*(int *)(param_1 + 0x50) == 3) {
      *(undefined4 *)(param_1 + 0x7a4) = 0;
      goto LAB_08889718;
    }
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  *(undefined4 *)(param_1 + 0x7a4) = 0;
LAB_08889718:
  *(undefined4 *)(param_1 + 0x50) = 2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(char *)(param_1 + 0x68) = param_2;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 0x73c) = 0;
  *(undefined4 *)(param_1 + 0x7b8) = 1;
  *(undefined4 *)(param_1 + 0x7bc) = 1;
  iVar3 = 0;
  do {
    *(undefined1 *)(param_1 + iVar3 + 0x7c0) = 1;
    *(undefined1 *)(param_1 + iVar3 + 0x7c2) = 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  *(undefined1 *)(param_1 + 0x7c4) = 0;
  if (*(int *)(param_1 + 0x4c) == 9) {
    bVar2 = true;
    if (((*(uint *)(iVar1 + 0xbde8) & 2) == 0) && (*(char *)(param_1 + 0x68) != '\0')) {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_088c95a0();
    }
    else {
      FUN_088c965c();
      FUN_088c98f0(*(undefined4 *)(param_1 + 0x7c8));
    }
  }
  else {
    FUN_088c95a0();
    FUN_088c9928(*(undefined4 *)(param_1 + 0x7c8),*(undefined4 *)(DAT_089d6a10 + 0x54));
  }
  return;
}

