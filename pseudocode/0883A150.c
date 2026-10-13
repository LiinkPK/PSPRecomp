/* Entry 0x0883A150 | file offset 0x00037128 | FUN_0883a150 | bytes 1452 */

void FUN_0883a150(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  
  cVar6 = *(char *)(param_2 + 0x34);
  if ((0.0 < *(float *)(param_1 + 0x31c)) && (cVar6 != '\x12')) {
    *(undefined4 *)(param_1 + 0x31c) = 0;
    cVar6 = *(char *)(param_2 + 0x34);
  }
  cVar7 = '\0';
  if (cVar6 != '\0') {
    FUN_08837a5c(param_1);
    cVar7 = *(char *)(param_2 + 0x34);
  }
  if ((cVar7 == '\0') || (cVar7 == '\x12')) {
    if (*(int *)(param_1 + 0x304) == 0) {
      *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x20);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x20);
  }
  iVar2 = FUN_0883739c(param_1);
  if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0x12b0) = *(undefined4 *)(param_2 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x308) = 0;
  if (*(int *)(param_1 + 0x304) == 0) {
    uVar8 = *(undefined4 *)(param_1 + 0x38c);
  }
  else {
    *(int *)(*(int *)(param_1 + 0x304) + 0x308) = param_1;
    uVar8 = *(undefined4 *)(param_1 + 0x38c);
  }
  uVar5 = *(uint *)(param_1 + 0x388);
  *(undefined4 *)(param_1 + 0x38c) = uVar8;
  *(uint *)(param_1 + 0x388) = uVar5 | 4;
  *(undefined4 *)(param_1 + 0x38c) = uVar8;
  *(uint *)(param_1 + 0x388) = uVar5 & 0xffffffdf | 4;
  iVar2 = FUN_0883764c(param_1,param_2);
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0x38c) = *(uint *)(param_1 + 0x38c) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 0x388);
  }
  else {
    *(uint *)(param_1 + 0x38c) = *(uint *)(param_1 + 0x38c) | 1;
    *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 0x388);
  }
  iVar2 = FUN_088132bc(param_2);
  if (iVar2 != 0) {
    FUN_08831ea8(param_1,*(undefined4 *)(param_2 + 0x38),0);
    *(short *)(param_1 + 0x53e) = (short)*(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
    *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 0x20;
  }
  if ((*(int *)(param_2 + 0x20) == 0) || (*(char *)(*(int *)(param_2 + 0x20) + 0x542) != '\x01')) {
    if (((*(uint *)(param_1 + 0x380) & 0x80000000) != 0) &&
       (((iVar2 = FUN_088377c0(param_1), iVar2 != 0 && (iVar2 = FUN_088132bc(param_2), iVar2 == 0))
        && ((*(byte *)(param_1 + 0x193) & 4) == 0)))) {
      return;
    }
    if ((((*(byte *)(param_1 + 0x197) & 1) != 0) && (iVar2 = FUN_088377c0(param_1), iVar2 != 0)) &&
       (iVar2 = FUN_088132bc(param_2), iVar2 == 0)) {
      return;
    }
  }
  if ((*(char *)(param_1 + 0x542) == '\x01') && (iVar2 = FUN_088132bc(param_2), iVar2 == 0)) {
    if (((*(uint *)(param_1 + 0x380) & 0x80000000) == 0) && (*(int *)(param_1 + 0x1108) != 0)) {
      uVar8 = FUN_08835778(*(int *)(param_1 + 0x1108));
      psVar3 = (short *)FUN_088bf4cc(uVar8,0x2e);
      if ((psVar3 != (short *)0x0) && (0 < *psVar3)) {
        *psVar3 = *psVar3 + -1;
        FUN_0883f2a0(uVar8,0x2e);
        *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 0x80000000;
      }
    }
    if ((*(uint *)(param_1 + 0x380) & 0x80000000) != 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x542) == '\0') {
    if (((*(byte *)(param_1 + 0x197) & 0x80) != 0) ||
       (bVar1 = false, (*(uint *)(param_1 + 0x188) & 0x20) != 0)) {
      bVar1 = true;
    }
    if (((((!bVar1) && (*(int *)(param_2 + 0x20) != 0)) &&
         (*(char *)(*(int *)(param_2 + 0x20) + 0x542) == '\x01')) &&
        (((*(byte *)(param_1 + 0x5b2) & 4) != 0 && ((*(byte *)(param_1 + 0x5b8) & 0x10) == 0)))) &&
       ((iVar2 = func_0x08a50140(), iVar2 != 1 || (iVar2 = func_0x08a50154(), iVar2 != param_1)))) {
      uVar8 = FUN_08835778(param_1);
      psVar3 = (short *)FUN_088bf4cc(uVar8,0x2d);
      if ((psVar3 != (short *)0x0) && (0 < *psVar3)) {
        *psVar3 = *psVar3 + -1;
        *(byte *)(param_1 + 0x5b8) = *(byte *)(param_1 + 0x5b8) | 0x10;
        uVar4 = (**(code **)(*(int *)(param_1 + 0x544) + 0x134))
                          (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x130));
        uVar4 = FUN_08835778(uVar4);
        psVar3 = (short *)FUN_088bf4cc(uVar4,0x100);
        if ((psVar3 == (short *)0x0) || (*psVar3 < 1)) {
          FUN_0883f2a0(uVar8,0x2d);
        }
        else {
          *psVar3 = *psVar3 + -1;
          FUN_0883f2a0(uVar4,0x100);
          *(byte *)(param_1 + 0x5b9) = *(byte *)(param_1 + 0x5b9) | 2;
        }
      }
      if ((*(byte *)(param_1 + 0x5b8) & 0x10) == 0) {
        cVar6 = *(char *)(param_2 + 0x34);
      }
      else {
        if ((*(byte *)(param_1 + 0x5b9) & 2) == 0) goto LAB_0883a698;
        cVar6 = *(char *)(param_2 + 0x34);
      }
      if ((cVar6 == '\0') || (cVar6 == '\x12')) {
        iVar2 = FUN_088374b0(param_1);
        if (iVar2 == 0) {
          FUN_08831f04(0,param_1,param_2);
        }
        else {
          FUN_08832034(0,0,param_1,param_2);
        }
      }
    }
  }
LAB_0883a698:
  if ((*(char *)(param_2 + 0x34) != '\x13') || ((*(uint *)(param_1 + 0x188) & 0x10) == 0)) {
    FUN_0883a6fc(param_1,param_2);
  }
  return;
}

