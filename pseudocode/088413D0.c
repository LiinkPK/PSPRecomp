/* Entry 0x088413D0 | file offset 0x0003E3A8 | FUN_088413d0 | bytes 688 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_088413d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = DAT_089d4958;
  uVar2 = FUN_0881baa8();
  FUN_0881b878(uVar2);
  iVar4 = 0;
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar1 + 0x14);
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x1114);
    }
    if (iVar4 == 0) break;
    (**(code **)(*(int *)(iVar4 + 0x544) + 0x14))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x544) + 0x10));
  }
  iVar4 = 0;
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x4a0);
    }
    if (iVar4 == 0) break;
    if (((*(uint *)(iVar4 + 0x388) & 1) == 0) && (iVar3 = FUN_08837990(iVar4), iVar3 == 0)) {
      FUN_08833910(iVar4);
    }
    if (((*(uint *)(iVar4 + 0x388) & 1) == 0) &&
       ((iVar3 = FUN_08837990(iVar4), iVar3 == 0 || (*(char *)(iVar4 + 0x542) == '\x01')))) {
      (**(code **)(*(int *)(iVar4 + 0x544) + 0xa4))
                (iVar4 + *(short *)(*(int *)(iVar4 + 0x544) + 0xa0));
    }
  }
  if (*DAT_089d85e8 == '\x01') {
    func_0x08a3fe10(_DAT_08a405e0);
    func_0x08a50060(_DAT_08a50568);
  }
  uVar5 = 0;
  do {
    if ((*(uint *)(iVar1 + 0x4c) & 1 << (uVar5 & 0x1f)) == 0) {
      iVar4 = 0;
      while( true ) {
        if (iVar4 == 0) {
          iVar4 = *(int *)(iVar1 + 0xc);
        }
        else {
          iVar4 = *(int *)(iVar4 + 0x4a0);
        }
        if (iVar4 == 0) break;
        if (((uVar5 == *(byte *)(iVar4 + 0x542)) && ((*(uint *)(iVar4 + 0x388) & 1) == 0)) &&
           (iVar3 = FUN_08837990(iVar4), iVar3 == 0)) {
          FUN_0883c2e8(iVar4);
        }
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 10);
  if (*DAT_089d85e8 == '\x01') {
    func_0x08a3d858(_DAT_08a405e0);
  }
  FUN_0881b970(uVar2);
  FUN_0884e660();
  return;
}

