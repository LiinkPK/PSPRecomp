/* Entry 0x088C7E98 | file offset 0x000C4E70 | FUN_088c7e98 | bytes 92 */

undefined4 FUN_088c7e98(int param_1)

{
  undefined4 uVar1;
  undefined2 local_30 [18];
  undefined1 local_c;
  
  uVar1 = 0;
  if (param_1 != -1) {
    local_30[0] = (undefined2)param_1;
    local_c = 0;
    uVar1 = FUN_088c7ccc(DAT_089d7744,DAT_089d7744 + *(int *)(DAT_089d7740 + 8) * 0x24,local_30,0);
  }
  return uVar1;
}

