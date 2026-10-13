/* Entry 0x0899C2C4 | file offset 0x0019929C | FUN_0899c2c4 | bytes 132 */

void FUN_0899c2c4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x60) = param_2;
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x24);
      if (uVar1 == 0) {
        uVar2 = 0;
        uVar1 = 0xff;
      }
      else {
        uVar1 = uVar1 ^ uVar1 >> 1;
        iVar3 = 1;
        while (param_2 = param_2 + -1, -1 < param_2) {
          iVar3 = iVar3 + (uVar1 - iVar3 ^ uVar1);
        }
        uVar1 = uVar1 - iVar3 ^ uVar1;
        uVar2 = uVar1 >> 1 & 0x55555555 | (uVar1 & 0x55555555) << 1;
        uVar2 = uVar2 >> 2 & 0x33333333 | (uVar2 & 0x33333333) << 2;
        uVar2 = uVar2 >> 4 & 0xf0f0f0f | (uVar2 & 0xf0f0f0f) << 4;
        uVar2 = uVar2 >> 8 & 0xff00ff | (uVar2 & 0xff00ff) << 8;
        uVar2 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar1 = uVar1 >> (uVar2 & 0x1f);
      }
      FUN_0899c348(param_1,uVar2,uVar1,0);
    }
  }
  return;
}

