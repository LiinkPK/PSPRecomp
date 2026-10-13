/* Entry 0x088DF908 | file offset 0x000DC8E0 | FUN_088df908 | bytes 448 */

undefined4 FUN_088df908(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar1 = FUN_088df7e4();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_2 < 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    FUN_088df590(param_1);
    pfVar3 = *(float **)(param_1 + 8);
    if (pfVar3 == (float *)0x0) {
      iVar1 = FUN_088daa40(*(undefined4 *)(param_1 + 4),1,0);
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 == 0) {
        return 0xfffffffd;
      }
      *(undefined2 *)(iVar1 + 0xe) = 2;
      pfVar3 = *(float **)(param_1 + 8);
    }
    else if (*(short *)(pfVar3 + 3) == 3) {
      fVar6 = *pfVar3;
      FUN_088d9f5c(pfVar3,1,1);
      *(undefined2 *)(*(int *)(param_1 + 8) + 0xe) = 2;
      FUN_088d9aec(5.0 - fVar6,*(undefined4 *)(param_1 + 8));
      pfVar3 = *(float **)(param_1 + 8);
    }
    if ((pfVar3 != (float *)0x0) && (param_3 == '\0')) {
      uVar2 = FUN_08885d24();
      iVar1 = FUN_0887a3c8(param_1 + 0xc,uVar2,param_2);
      if (iVar1 != 0) {
        return 0xfffffffc;
      }
      iVar1 = FUN_0887a4c4(param_1 + 0xc);
      if (iVar1 == 0) {
        return 0xfffffffb;
      }
      FUN_0887b9c4(iVar1);
      iVar4 = *(int *)(param_1 + 8);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x8000;
        if (*(int *)(iVar4 + 0x34) == 0) {
          *(int *)(iVar4 + 0x34) = iVar1;
          *(int *)(iVar4 + 0x30) = iVar1;
          *(undefined4 *)(iVar1 + 0x4c) = 0;
          *(undefined4 *)(iVar1 + 0x54) = 0;
          iVar5 = *(int *)(iVar4 + 0x38);
        }
        else {
          *(int *)(*(int *)(iVar4 + 0x34) + 0x4c) = iVar1;
          uVar2 = *(undefined4 *)(iVar4 + 0x34);
          *(undefined4 *)(iVar1 + 0x4c) = 0;
          *(undefined4 *)(iVar1 + 0x54) = uVar2;
          iVar5 = *(int *)(iVar4 + 0x38);
          *(int *)(iVar4 + 0x34) = iVar1;
        }
        *(int *)(iVar4 + 0x38) = iVar5 + 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

