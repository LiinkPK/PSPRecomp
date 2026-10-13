/* Entry 0x0899E4B0 | file offset 0x0019B488 | FUN_0899e4b0 | bytes 576 */

undefined4 FUN_0899e4b0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_0899bee0();
  if (param_4 < 0) {
    return 0;
  }
  if (*(short *)(param_2 + 6) <= param_4) {
    return 0;
  }
  piVar4 = (int *)(param_2 + 0x10);
  if (*(char *)(param_2 + 5) != '\0') {
    piVar4 = (int *)(param_2 + 0x80);
  }
  if (0 < param_4) {
    do {
      param_4 = param_4 + -1;
      piVar4 = (int *)((int)piVar4 + *piVar4);
    } while (param_4 != 0);
  }
  if (*(char *)((int)piVar4 + 0x11) != 0) {
    iVar7 = (int)(short)piVar4[5];
    iVar6 = (int)*(short *)((int)piVar4 + 0x16);
    iVar2 = FUN_0899eaec(param_1,*(undefined4 *)(&DAT_089d14c8 + *(char *)((int)piVar4 + 0x13) * 4),
                         iVar7,iVar6,(int)*(char *)((int)piVar4 + 0x11),1,0);
    if (iVar2 == 0) {
      return 0;
    }
    piVar9 = (int *)0x0;
    if ('\x01' < *(char *)((int)piVar4 + 0x11)) {
      piVar9 = piVar4 + 0xc;
    }
    iVar2 = (int)piVar4 + (int)(short)piVar4[3];
    iVar8 = 0;
    if ('\0' < *(char *)((int)piVar4 + 0x11)) {
      piVar5 = piVar9 + 4;
      do {
        uVar3 = FUN_0899c1d4(param_1,iVar8,0);
        FUN_0899e6f0(uVar3,iVar2,iVar7,iVar6,(int)*(char *)((int)piVar4 + 0x13));
        iVar8 = iVar8 + 1;
        if (piVar9 != (int *)0x0) {
          iVar7 = (iVar7 + 1) / 2;
          iVar6 = (iVar6 + 1) / 2;
          iVar2 = iVar2 + *piVar5;
        }
        piVar5 = piVar5 + 1;
      } while (iVar8 < *(char *)((int)piVar4 + 0x11));
      bVar1 = *(byte *)((int)piVar4 + 0x12);
      goto LAB_0899e574;
    }
  }
  bVar1 = *(byte *)((int)piVar4 + 0x12);
LAB_0899e574:
  if ((bVar1 & 7) != 0) {
    uVar3 = *(undefined4 *)(&DAT_089d14c8 + (bVar1 & 7) * 4);
    iVar8 = (int)*(short *)((int)piVar4 + 0xe);
    iVar2 = piVar4[3];
    iVar7 = piVar4[2];
    FUN_0899ee30(param_1,uVar3,iVar8,1,1,0);
    iVar6 = FUN_0899c24c(param_1,0,0);
    if (iVar6 == 0) {
      return 0;
    }
    FUN_0899e6f0(iVar6,(int)piVar4 + iVar7 + (short)iVar2,iVar8,1,bVar1 & 7);
    if (-1 < *(char *)((int)piVar4 + 0x12)) {
      FUN_0899e900(iVar6,uVar3,iVar8);
    }
  }
  sceKernelDcacheWritebackAll();
  return 1;
}

