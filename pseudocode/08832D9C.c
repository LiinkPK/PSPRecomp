/* Entry 0x08832D9C | file offset 0x0002FD74 | FUN_08832d9c | bytes 268 */

bool FUN_08832d9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,undefined4 param_7)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_5 + 0x3c0);
  if (fVar2 <= 2.0) {
    (**(code **)(*(int *)(param_5 + 0x544) + 0x1dc))
              ((*(float *)(param_5 + 0x84) - fVar2) - *(float *)(param_5 + 0x84),
               param_5 + *(short *)(*(int *)(param_5 + 0x544) + 0x1d8));
    uVar1 = *(uint *)(param_5 + 900);
    *(uint *)(param_5 + 900) = uVar1 | 0x200;
    *(uint *)(param_5 + 900) = uVar1 & 0xfffffeff | 0x200;
    *(uint *)(param_5 + 900) = uVar1 & 0xfffff6ff | 0x200;
    FUN_08834c10(param_5,0,0);
    func_0x08a51750(param_1,param_2,param_3,param_4,param_5,param_7,0);
    *(uint *)(param_6 + 0x28) = *(uint *)(param_6 + 0x28) | 1;
  }
  return fVar2 <= 2.0;
}

