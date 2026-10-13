/* Entry 0x0898A2C8 | file offset 0x001872A0 | FUN_0898a2c8 | bytes 384 */

void FUN_0898a2c8(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
  iVar2 = (**(code **)(iVar2 + 0x24))(*(int *)(param_1 + 4) + (int)*(short *)(iVar2 + 0x20));
  if (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
    piVar1 = (int *)(**(code **)(iVar2 + 0x2c))
                              (*(int *)(param_1 + 4) + (int)*(short *)(iVar2 + 0x28));
    uVar5 = piVar1[1];
    if (1 < uVar5) {
      uVar4 = 0;
      *(uint *)(param_1 + 0x20) = uVar5;
      iVar2 = param_1 + 0xc;
      if (uVar5 != 0) {
        iVar3 = 0;
        do {
          FUN_089a3868(*(int *)(param_1 + 0x1c) + iVar3,*piVar1 + iVar3);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (uVar4 < uVar5);
      }
      FUN_0898b978(param_2);
      if (*(char *)(param_2 + 0xb0) == '\0') {
        FUN_0898ae50(param_1,iVar2,param_2,param_3);
      }
      else if (*(float *)(param_2 + 0x40) == 0.0) {
        FUN_0898af70(param_1,iVar2,param_2,param_3);
      }
      else {
        FUN_0898b0fc(param_1,iVar2,param_2,param_3);
      }
    }
  }
  return;
}

