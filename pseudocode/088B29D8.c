/* Entry 0x088B29D8 | file offset 0x000AF9B0 | FUN_088b29d8 | bytes 88 */

undefined4 FUN_088b29d8(int param_1)

{
  undefined4 uVar1;
  undefined2 local_4c [34];
  
  uVar1 = 0;
  if (param_1 != -1) {
    local_4c[0] = (undefined2)param_1;
    uVar1 = FUN_088b2748(DAT_089d72bc,DAT_089d72bc + *(int *)(DAT_089d72b8 + 8) * 0x44,local_4c,0);
  }
  return uVar1;
}

