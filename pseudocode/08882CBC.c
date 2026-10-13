/* Entry 0x08882CBC | file offset 0x0007FC94 | FUN_08882cbc | bytes 188 */

undefined4 FUN_08882cbc(float param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = 0;
  while (((param_4 & 1 << (uVar1 & 0x1f)) == 0 ||
         (fVar2 = (float)FUN_089a3b10(param_2,param_3),
         0.0 <= fVar2 + *(float *)(param_2 + 0xc) + param_1))) {
    uVar1 = uVar1 + 1;
    param_2 = param_2 + 0x10;
    if (5 < (int)uVar1) {
      return 1;
    }
  }
  return 0;
}

