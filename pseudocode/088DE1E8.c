/* Entry 0x088DE1E8 | file offset 0x000DB1C0 | FUN_088de1e8 | bytes 60 */

undefined4 FUN_088de1e8(int param_1,char param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == *(char *)(param_1 + 10)) {
    if (param_3 == 0xffffffff) {
      uVar1 = 1;
    }
    else if (*(ushort *)(param_1 + 8) == param_3) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

