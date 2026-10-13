/* Entry 0x088D8FD0 | file offset 0x000D5FA8 | FUN_088d8fd0 | bytes 368 */

undefined4 FUN_088d8fd0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_088d8e18();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if ((uint)(*(int *)(param_1 + 0x38) + param_2) < 7) {
    if (*(int *)(param_1 + 0x18) < 0) {
      uVar2 = 0xfffffffd;
    }
    else {
      FUN_088d8a98(param_1);
      if (*(int *)(param_1 + 4) == 0) {
        iVar1 = FUN_088daa40(*(undefined4 *)(param_1 + 0x2c),8,0);
        *(int *)(param_1 + 4) = iVar1;
        if (iVar1 == 0) {
          return 0xfffffffd;
        }
      }
      uVar2 = FUN_08885d24();
      iVar1 = FUN_0887a3c8(param_1 + 8,uVar2,*(undefined4 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        iVar1 = FUN_0887a4c4(param_1 + 8);
        if (iVar1 == 0) {
          uVar2 = 0xfffffffb;
        }
        else {
          FUN_0887b98c(iVar1);
          FUN_0887b9c4(iVar1);
          iVar3 = *(int *)(param_1 + 4);
          if (iVar1 != 0) {
            *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x8000;
            if (*(int *)(iVar3 + 0x34) == 0) {
              *(int *)(iVar3 + 0x34) = iVar1;
              *(int *)(iVar3 + 0x30) = iVar1;
              *(undefined4 *)(iVar1 + 0x4c) = 0;
              *(undefined4 *)(iVar1 + 0x54) = 0;
              iVar4 = *(int *)(iVar3 + 0x38);
            }
            else {
              *(int *)(*(int *)(iVar3 + 0x34) + 0x4c) = iVar1;
              uVar2 = *(undefined4 *)(iVar3 + 0x34);
              *(undefined4 *)(iVar1 + 0x4c) = 0;
              *(undefined4 *)(iVar1 + 0x54) = uVar2;
              iVar4 = *(int *)(iVar3 + 0x38);
              *(int *)(iVar3 + 0x34) = iVar1;
            }
            *(int *)(iVar3 + 0x38) = iVar4 + 1;
          }
          *(int *)(param_1 + 0x3c) = param_2;
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0xfffffffc;
      }
    }
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

