/* Entry 0x0886A298 | file offset 0x00067270 | FUN_0886a298 | bytes 348 */

uint FUN_0886a298(int param_1,int param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (1.0 <= *(float *)(param_2 + 0x40))) {
    if (param_3 == '\0') {
      FUN_089b0d88(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),0x200000,0);
      FUN_089a12a4(0,10,10,0xffffffff,0);
    }
    else {
      FUN_089b0d88(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),0x200000,0x200000);
    }
    uVar1 = 0xff;
  }
  else {
    uVar1 = (uint)(*(float *)(param_2 + 0x40) * 255.0);
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xff < (int)uVar1) {
      uVar1 = 0xff;
    }
    FUN_089b0d88(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),0x200000,0);
    uVar2 = uVar1 << 0x10 | uVar1 << 0x18 | uVar1 | uVar1 << 8;
    if ((*(uint *)(param_2 + 0x48) & 4) == 0) {
      FUN_089a12a4(0,10,10,uVar2,-1 - uVar2);
    }
    else {
      FUN_089a12a4(0,10,10,uVar2,0xffffffff);
    }
  }
  return uVar1;
}

