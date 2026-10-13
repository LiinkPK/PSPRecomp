/* Entry 0x088C0F8C | file offset 0x000BDF64 | FUN_088c0f8c | bytes 92 */

undefined4 FUN_088c0f8c(int param_1)

{
  undefined4 uVar1;
  undefined2 local_6c [52];
  
  uVar1 = 0;
  if (param_1 != -1) {
    local_6c[0] = (undefined2)param_1;
    uVar1 = FUN_088c0c10(DAT_089d740c,DAT_089d740c + *(int *)(DAT_089d7408 + 8) * 0x68,local_6c,0);
  }
  return uVar1;
}

