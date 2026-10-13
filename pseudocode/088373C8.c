/* Entry 0x088373C8 | file offset 0x000343A0 | FUN_088373c8 | bytes 104 */

undefined4 FUN_088373c8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((((*(uint *)(*(int *)(param_1 + 0x3a4) + 4) & 1) != 0) ||
       ((*(uint *)(*(int *)(param_1 + 0x3a4) + 4) & 0x10) != 0)) ||
      ((*(uint *)(param_1 + 900) & 0x400000) != 0)) && ((*(uint *)(param_1 + 900) & 0x200) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

