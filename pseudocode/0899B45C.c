/* Entry 0x0899B45C | file offset 0x00198434 | FUN_0899b45c | bytes 356 */

uint FUN_0899b45c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar4 = 0;
  if (uVar1 < 2) {
    uVar1 = uVar3 | 0x100000;
    uVar4 = 0xff;
    goto LAB_0899b484;
  }
  if (uVar1 == 4) {
LAB_0899b580:
    uVar4 = 0xff;
    uVar1 = 0;
  }
  else {
    if (uVar1 == 2) {
      uVar1 = 0;
      goto LAB_0899b484;
    }
    uVar1 = 0;
    if (uVar3 == 0) goto LAB_0899b484;
    uVar2 = param_1[2];
    if ((int)uVar2 < -0x7e) {
      uVar1 = -uVar2 - 0x7e;
      if ((int)uVar1 < 0x1a) {
        uVar1 = uVar3 >> (uVar1 & 0x1f) | (uint)((uVar3 & (1 << (uVar1 & 0x1f)) - 1U) != 0);
      }
      else {
        uVar1 = 0;
      }
      if ((uVar1 & 0x7f) == 0x40) {
        if ((uVar1 & 0x80) != 0) {
          uVar1 = uVar1 + 0x40;
        }
      }
      else {
        uVar1 = uVar1 + 0x3f;
      }
      if (0x3fffffff < uVar1) {
        uVar4 = 1;
      }
    }
    else {
      if (0x7f < (int)uVar2) goto LAB_0899b580;
      uVar4 = uVar2 + 0x7f;
      if ((uVar3 & 0x7f) == 0x40) {
        if ((uVar3 & 0x80) != 0) {
          uVar3 = uVar3 + 0x40;
        }
      }
      else {
        uVar3 = uVar3 + 0x3f;
      }
      if (-1 < (int)uVar3) {
        uVar1 = uVar3 >> 7;
        goto LAB_0899b484;
      }
      uVar1 = uVar3 >> 1;
      uVar4 = uVar2 + 0x80;
    }
    uVar1 = uVar1 >> 7;
  }
LAB_0899b484:
  return uVar1 & 0x7fffff | (uVar4 & 0xff) << 0x17 | param_1[1] << 0x1f;
}

