/* Entry 0x08818BF4 | file offset 0x00015BCC | FUN_08818bf4 | bytes 196 */

undefined4 FUN_08818bf4(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if ((*(ushort *)(*(int *)(param_1 + 0x48) + 10) & 2) != 0) {
      if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(*(int *)(param_1 + 0x4c) + 0x18) != 1)) {
        uVar1 = FUN_0881baa8();
        FUN_0881c468(uVar1,1);
        FUN_08819624(param_1,0,0,0,1,1000,1);
        FUN_0881c468(uVar1,0);
      }
      else {
        FUN_08818e48(param_1);
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

