/* Entry 0x088417F8 | file offset 0x0003E7D0 | FUN_088417f8 | bytes 344 */

void FUN_088417f8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_089d4958;
  iVar4 = *(int *)(DAT_089d4958 + 0x44);
  while (iVar4 != 0) {
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar1 + 0x44);
    }
    else {
      iVar6 = *(int *)(iVar4 + 0x4a0);
      (**(code **)(*(int *)(iVar4 + 0x544) + 0xc))
                (iVar4 + *(short *)(*(int *)(iVar4 + 0x544) + 8),3);
      iVar4 = iVar6;
    }
  }
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  iVar4 = *(int *)(iVar1 + 0xc);
  while (iVar6 = iVar4, iVar6 != 0) {
    if (iVar6 == 0) {
      iVar4 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar4 = *(int *)(iVar6 + 0x4a0);
    }
    if ((*(uint *)(iVar6 + 0x388) & 1) != 0) {
      iVar3 = *(int *)(iVar1 + 0xc);
      if ((iVar3 != 0) && (iVar5 = *(int *)(iVar1 + 0x10), iVar5 != 0)) {
        uVar2 = *(undefined4 *)(iVar6 + 0x4a0);
        if (iVar6 == iVar3) {
          *(undefined4 *)(iVar1 + 0xc) = uVar2;
          iVar3 = 0;
        }
        else {
          iVar5 = *(int *)(iVar3 + 0x4a0);
          if (*(int *)(iVar3 + 0x4a0) == iVar6) {
            *(undefined4 *)(iVar3 + 0x4a0) = uVar2;
          }
          else {
            do {
              iVar3 = iVar5;
              iVar5 = *(int *)(iVar3 + 0x4a0);
            } while (*(int *)(iVar3 + 0x4a0) != iVar6);
            *(undefined4 *)(iVar3 + 0x4a0) = uVar2;
          }
          iVar5 = *(int *)(iVar1 + 0x10);
        }
        if (iVar6 == iVar5) {
          *(int *)(iVar1 + 0x10) = iVar3;
        }
        *(undefined4 *)(iVar6 + 0x4a0) = 0;
      }
      if (*(int *)(iVar1 + 0x48) == 0) {
        *(int *)(iVar1 + 0x48) = iVar6;
        *(int *)(iVar1 + 0x44) = iVar6;
        *(undefined4 *)(iVar6 + 0x4a0) = 0;
      }
      else {
        *(int *)(*(int *)(iVar1 + 0x48) + 0x4a0) = iVar6;
        *(undefined4 *)(iVar6 + 0x4a0) = 0;
        *(int *)(iVar1 + 0x48) = iVar6;
      }
    }
  }
  return;
}

