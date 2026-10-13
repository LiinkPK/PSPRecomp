/* Entry 0x08818E48 | file offset 0x00015E20 | FUN_08818e48 | bytes 184 */

undefined4 FUN_08818e48(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x10) == 3) {
    uVar1 = 0;
  }
  else {
    FUN_08818b28(param_1);
    *(undefined4 *)(param_1 + 0x10) = 3;
    uVar1 = FUN_0881baa8();
    FUN_0881c2cc(uVar1,*(undefined4 *)(param_1 + 0x48),0);
    uVar1 = FUN_0881baa8();
    FUN_0881cae0(uVar1,(int)**(short **)(param_1 + 0x48),0,0);
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_0881559c(*(int *)(param_1 + 0x14));
    }
    FUN_0881a124(param_1 + 0x18);
    uVar1 = 0;
  }
  return uVar1;
}

