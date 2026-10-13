/* Entry 0x0881CAE0 | file offset 0x00019AB8 | FUN_0881cae0 | bytes 92 */

undefined4 FUN_0881cae0(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0881a2fc(param_1 + 0x34,param_2,param_3,param_4);
  }
  return uVar1;
}

