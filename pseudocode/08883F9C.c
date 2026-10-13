/* Entry 0x08883F9C | file offset 0x00080F74 | FUN_08883f9c | bytes 560 */

void FUN_08883f9c(char *param_1,char param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  iVar1 = sceKernelGetSystemTimeLow();
  FUN_089a0190(4,0);
  iVar2 = sceKernelGetSystemTimeLow();
  if (*param_1 == '\0') {
    FUN_089b4fb4(DAT_089d5eac);
  }
  FUN_089ad370();
  if (param_2 == '\0') {
    sceDisplayWaitVblankStart();
  }
  else {
    sceDisplayWaitVblankStartCB();
  }
  iVar3 = sceDisplayGetVcount();
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar6 = iVar3 - *(int *)(param_1 + 0xc);
  *(uint *)(param_1 + 0x14) = uVar6;
  if (uVar6 < uVar5) {
    do {
      if (param_2 == '\0') {
        sceDisplayWaitVblankStart();
        iVar3 = *(int *)(param_1 + 0x14);
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      else {
        sceDisplayWaitVblankStartCB();
        iVar3 = *(int *)(param_1 + 0x14);
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 < 1) {
    if (-1 < iVar3) {
      *(uint *)(param_1 + 0x14) = uVar5;
      param_3 = *(byte *)(DAT_089d5ec0 + 0x2cd1) | param_3;
      goto LAB_088840e4;
    }
  }
  else if (iVar3 < 2) {
    param_3 = *(byte *)(DAT_089d5ec0 + 0x2cd1) | param_3;
    goto LAB_088840e4;
  }
  *(uint *)(param_1 + 0x14) = uVar5;
  param_3 = *(byte *)(DAT_089d5ec0 + 0x2cd1) | param_3;
LAB_088840e4:
  if (param_3 == 0) {
    iVar3 = FUN_0899fbe4();
    if (iVar3 == *(int *)(DAT_089d5ec0 + 0x8c0)) {
      FUN_0899fbe4();
    }
  }
  *(int *)(param_1 + 0x1c) = iVar1 - *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x20) = iVar2 - *(int *)(param_1 + 8);
  uVar4 = sceKernelGetSystemTimeLow();
  *(undefined4 *)(param_1 + 8) = uVar4;
  uVar4 = sceDisplayGetVcount();
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  if (param_1[0x24] == '\0') {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar7 = fVar7 * 1.0;
  }
  *(float *)(param_1 + 0x18) = fVar7;
  if (param_1[0x25] != '\0') {
    param_1[0x25] = '\0';
    if (param_1[0x24] == '\0') {
      fVar7 = 0.0;
    }
    else {
      iVar1 = FUN_08883f54();
      fVar7 = (float)iVar1 * 1.0;
    }
    *(float *)(param_1 + 0x18) = fVar7;
  }
  return;
}

