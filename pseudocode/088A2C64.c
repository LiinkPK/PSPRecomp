/* Entry 0x088A2C64 | file offset 0x0009FC3C | FUN_088a2c64 | bytes 392 */

void FUN_088a2c64(float param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (((*(uint *)(param_2 + 0x34) & 4) != 0) ||
     (bVar1 = false, (*(uint *)(param_2 + 0x34) & 8) != 0)) {
    bVar1 = true;
  }
  if (!bVar1) {
    if (0.0 < *(float *)(param_2 + 0x3c)) {
      *(float *)(param_2 + 0x3c) = *(float *)(param_2 + 0x3c) - param_1;
    }
    else {
      iVar3 = **(int **)(param_2 + 0x50);
      uVar2 = (**(code **)(iVar3 + 0x4c))
                        ((int)*(int **)(param_2 + 0x50) + (int)*(short *)(iVar3 + 0x48));
      iVar4 = 0;
      iVar3 = FUN_088a290c(uVar2,*(undefined4 *)(param_2 + 0x54));
      if (iVar3 == 1) {
        FUN_088a2a3c(uVar2,*(undefined4 *)(param_2 + 0x54));
        iVar3 = **(int **)(param_2 + 0x50);
        iVar4 = (**(code **)(iVar3 + 0x14))
                          ((int)*(int **)(param_2 + 0x50) + (int)*(short *)(iVar3 + 0x10));
      }
      if (iVar4 == 1) {
        uVar2 = *(undefined4 *)(param_2 + 0x40);
        FUN_088a2dec(param_1,param_2);
        *(undefined4 *)(param_2 + 0x30) = 1;
        *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | 1;
        *(undefined4 *)(param_2 + 0x40) = uVar2;
        iVar3 = **(int **)(param_2 + 0x50);
        uVar2 = (**(code **)(iVar3 + 0x4c))
                          ((int)*(int **)(param_2 + 0x50) + (int)*(short *)(iVar3 + 0x48));
        FUN_088a29a4(uVar2,*(undefined4 *)(param_2 + 0x54));
      }
      else {
        *(undefined4 *)(param_2 + 0x30) = 2;
      }
    }
  }
  return;
}

