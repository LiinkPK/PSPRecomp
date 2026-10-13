/* Entry 0x08846A3C | file offset 0x00043A14 | FUN_08846a3c | bytes 464 */

void FUN_08846a3c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  
  switch(*(undefined1 *)(param_1 + 0x60)) {
  case 0:
  case 1:
    if (*(int *)(param_1 + 0x10) < 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined1 *)(param_1 + 0x60) = 2;
  case 2:
    uVar1 = FUN_088444d4(param_1,*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    uVar4 = 0xb;
    iVar2 = FUN_088439bc(uVar1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    if (iVar2 != 0) {
      uVar4 = 3;
    }
    *(undefined1 *)(param_1 + 0x60) = uVar4;
  case 3:
    break;
  case 4:
    FUN_0884333c(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x50),
                 *(undefined4 *)(param_1 + 0x54));
    uVar4 = 0xb;
    iVar2 = FUN_08843584(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x50),
                         *(undefined4 *)(param_1 + 0x54));
    if (iVar2 != 0) {
      uVar4 = 5;
    }
    *(undefined1 *)(param_1 + 0x60) = uVar4;
    break;
  case 5:
    break;
  case 6:
    FUN_088459e0(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x50),
                 *(undefined4 *)(param_1 + 0x54));
    uVar4 = 0xb;
    iVar2 = FUN_08843710(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x50),
                         *(undefined4 *)(param_1 + 0x54));
    if (iVar2 != 0) {
      uVar4 = 7;
    }
    *(undefined1 *)(param_1 + 0x60) = uVar4;
    break;
  case 7:
    break;
  case 8:
    FUN_08843460(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x50),
                 *(undefined4 *)(param_1 + 0x58));
    uVar4 = 0xb;
    iVar2 = FUN_08843854(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x50),
                         *(undefined4 *)(param_1 + 0x54));
    if (iVar2 != 0) {
      uVar4 = 9;
    }
    *(undefined1 *)(param_1 + 0x60) = uVar4;
    break;
  case 9:
    break;
  case 10:
    FUN_0884351c(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x50),
                 *(undefined4 *)(param_1 + 0x58));
    *(undefined1 *)(param_1 + 0x60) = 0xb;
    break;
  case 0xb:
    *(undefined1 *)(param_1 + 0x60) = 0;
    if (*(char *)(param_1 + 0x61) == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      iVar3 = 1;
      iVar2 = param_1;
      do {
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 0x14);
        iVar2 = iVar2 + 4;
      } while (iVar3 < 0x10);
      if (-1 < *(int *)(param_1 + 0x10)) {
        *(undefined1 *)(param_1 + 0x60) = 2;
      }
    }
    else {
      FUN_08846628(*(undefined4 *)(param_1 + 0x5c));
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  return;
}

