/* Entry 0x088CCD50 | file offset 0x000C9D28 | FUN_088ccd50 | bytes 344 */

undefined4 FUN_088ccd50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  
  iVar1 = FUN_088ccd28();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    pfVar5 = *(float **)(param_1 + 8);
    if (pfVar5 == (float *)0x0) {
      iVar1 = FUN_088daa40(*(undefined4 *)(param_1 + 4),0,0);
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 == 0) {
        return 0xfffffffd;
      }
      *(undefined2 *)(iVar1 + 0xe) = 1;
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 != 0) {
        iVar4 = *(int *)(param_1 + 8);
        uVar2 = 0;
        if (iVar1 != 0) {
          *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x8000;
          if (*(int *)(iVar4 + 0x34) == 0) {
            *(int *)(iVar4 + 0x34) = iVar1;
            *(int *)(iVar4 + 0x30) = iVar1;
            *(undefined4 *)(iVar1 + 0x4c) = 0;
            *(undefined4 *)(iVar1 + 0x54) = 0;
            iVar3 = *(int *)(iVar4 + 0x38);
          }
          else {
            *(int *)(*(int *)(iVar4 + 0x34) + 0x4c) = iVar1;
            uVar2 = *(undefined4 *)(iVar4 + 0x34);
            *(undefined4 *)(iVar1 + 0x4c) = 0;
            *(undefined4 *)(iVar1 + 0x54) = uVar2;
            iVar3 = *(int *)(iVar4 + 0x38);
            *(int *)(iVar4 + 0x34) = iVar1;
          }
          *(int *)(iVar4 + 0x38) = iVar3 + 1;
          uVar2 = *(undefined4 *)(param_1 + 0xc);
        }
        FUN_0887b924(uVar2);
      }
    }
    else if (*(short *)(pfVar5 + 3) == 2) {
      fVar6 = *pfVar5;
      FUN_088d9f5c(pfVar5,0,1);
      *(undefined2 *)(*(int *)(param_1 + 8) + 0xe) = 1;
      FUN_088d9aec(5.0 - fVar6,*(undefined4 *)(param_1 + 8));
    }
    FUN_088ccb68(param_1);
    uVar2 = 0;
  }
  return uVar2;
}

