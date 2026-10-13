/* Entry 0x08882D78 | file offset 0x0007FD50 | FUN_08882d78 | bytes 204 */

uint FUN_08882d78(float param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    if ((param_4 & 1 << (uVar1 & 0x1f)) != 0) {
      fVar3 = (float)FUN_089a3b10(param_2,param_3);
      uVar2 = uVar2 | (uint)((fVar3 + *(float *)(param_2 + 0xc)) - param_1 < 0.0) << (uVar1 & 0x1f);
    }
    uVar1 = uVar1 + 1;
    param_2 = param_2 + 0x10;
  } while ((int)uVar1 < 6);
  return uVar2;
}

