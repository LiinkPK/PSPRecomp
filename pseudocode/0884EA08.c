/* Entry 0x0884EA08 | file offset 0x0004B9E0 | FUN_0884ea08 | bytes 516 */

void FUN_0884ea08(int param_1,int param_2,char param_3)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar1 = FUN_088a4364(param_2);
    sVar2 = 0;
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      sVar2 = *(short *)(iVar1 + 8);
    }
    sVar3 = 0;
    if (iVar4 != 0) {
      sVar3 = *(short *)(iVar4 + 8);
    }
    bVar5 = true;
    if (sVar2 < sVar3) {
      bVar5 = false;
    }
    else if (sVar3 == sVar2) {
      fVar6 = *(float *)(param_1 + 0x10);
      if (((*(int *)(param_1 + 8) == param_2) && (iVar1 != 0)) &&
         ((float)(int)*(short *)(iVar1 + 10) != 0.0)) {
        if (fVar6 < (float)(int)*(short *)(iVar1 + 10)) {
          bVar5 = false;
        }
      }
      else if ((fVar6 != 0.0) && (fVar6 < 20.0)) {
        bVar5 = false;
      }
    }
    if (bVar5) {
      if (((iVar4 == 0) || ((*(ushort *)(iVar4 + 0xe) & 1) == 0)) &&
         (iVar4 = *(int *)(param_1 + 4), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x44) = 0;
        *(undefined4 *)(iVar4 + 0x48) = 0;
        FUN_088a1e44(0,*(undefined4 *)(param_1 + 4));
      }
      iVar4 = FUN_088a24d4(param_3 == '\x01',param_2,2,0);
      *(int *)(param_1 + 4) = iVar4;
      if (iVar4 != 0) {
        *(code **)(iVar4 + 0x44) = FUN_0884e9ec;
        *(int *)(iVar4 + 0x48) = param_1;
        iVar4 = *(int *)(param_1 + 4);
        *(undefined4 *)(iVar4 + 0xc) = 0;
        *(undefined4 *)(iVar4 + 0x10) = 0;
        *(undefined4 *)(iVar4 + 0x14) = 0;
        *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xfffffdff;
        FUN_088a1f6c(*(undefined4 *)(param_1 + 4),0);
        if (iVar1 != 0) {
          *(float *)(*(int *)(param_1 + 4) + 0x3c) = (float)(int)*(short *)(iVar1 + 0xc);
          *(undefined4 *)(*(int *)(param_1 + 4) + 0x38) = *(undefined4 *)(DAT_089d69e0 + 0x18);
        }
        FUN_0884ec0c(param_1);
        *(int *)(param_1 + 8) = param_2;
        *(int *)(param_1 + 0xc) = iVar1;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return;
}

