/* Entry 0x088DCDF8 | file offset 0x000D9DD0 | FUN_088dcdf8 | bytes 60 */

undefined4 FUN_088dcdf8(int param_1,char param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == *(char *)(param_1 + 0x68)) {
    if (param_3 == 0xffffffff) {
      uVar1 = 1;
    }
    else if (*(ushort *)(param_1 + 0x66) == param_3) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

