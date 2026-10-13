/* Entry 0x08897EFC | file offset 0x00094ED4 | FUN_08897efc | bytes 32 */

undefined4 FUN_08897efc(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x58) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 0x58);
  }
  return uVar1;
}

