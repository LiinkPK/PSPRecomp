/* Entry 0x088C5B34 | file offset 0x000C2B0C | FUN_088c5b34 | bytes 92 */

undefined4 FUN_088c5b34(int param_1)

{
  undefined4 uVar1;
  undefined2 local_ce [101];
  
  uVar1 = 0;
  if (-1 < param_1) {
    local_ce[0] = (undefined2)param_1;
    uVar1 = FUN_088c561c(DAT_089d76fc,DAT_089d76fc + *(short *)(DAT_089d76f8 + 8) * 200,local_ce,0);
  }
  return uVar1;
}

