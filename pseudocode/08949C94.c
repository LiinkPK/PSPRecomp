/* Entry 0x08949C94 | file offset 0x00146C6C | FUN_08949c94 | bytes 272 */

void FUN_08949c94(uint param_1,float param_2,uint *param_3)

{
  uint uVar1;
  float fVar2;
  
  DAT_09b6f478 = param_3;
  *(undefined1 *)(param_3 + 0x25) = 0;
  param_3[5] = param_1;
  param_3[4] = (uint)param_2;
  if (param_3[0x1c] != 0) {
    uVar1 = param_3[0x1a];
    param_3[3] = param_3[2];
    param_3[2] = (uint)((float)param_3[2] + param_2);
    if ((*param_3 & 1) == 0) {
      while (uVar1 != 0) {
        param_3[0x22] = uVar1;
        if (*(short *)(uVar1 + 0xc) == 0) {
          fVar2 = param_2;
          if (*(int *)(uVar1 + 0x170) != 0) {
            fVar2 = *(float *)(uVar1 + 0x174);
          }
          uVar1 = FUN_0894b48c(fVar2,param_3,uVar1);
        }
        else {
          uVar1 = FUN_0894b48c(0,param_3,uVar1);
        }
      }
    }
    else {
      while (uVar1 != 0) {
        param_3[0x22] = uVar1;
        uVar1 = FUN_0894b48c(0,param_3);
      }
    }
  }
  *(undefined1 *)(param_3 + 0x25) = 1;
  return;
}

