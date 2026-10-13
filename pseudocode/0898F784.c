/* Entry 0x0898F784 | file offset 0x0018C75C | FUN_0898f784 | bytes 220 */

void FUN_0898f784(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0898f624();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xc6) == '\x01') {
      FUN_0898ee14(param_2,param_4,param_1 + 0xa4,1,0);
      FUN_0898ee94(0,0,param_2,param_3,(int)*(short *)(param_1 + 0x9e),1);
    }
    else {
      FUN_0898ee14(param_2,param_4,param_1 + 0xa4,0,*(undefined1 *)(param_1 + 199));
      FUN_0898ee94(0,0,param_2,param_3,(int)*(short *)(param_1 + 0x9e),1);
    }
  }
  return;
}

