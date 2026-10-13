/* Entry 0x088C5C94 | file offset 0x000C2C6C | FUN_088c5c94 | bytes 84 */

undefined4 FUN_088c5c94(int param_1)

{
  undefined4 uVar1;
  undefined2 local_1e [11];
  
  uVar1 = 0;
  if (-1 < param_1) {
    local_1e[0] = (undefined2)param_1;
    uVar1 = FUN_088c58dc(DAT_089d7710,DAT_089d7710 + *(short *)(DAT_089d76f8 + 0x12) * 0x14,local_1e
                         ,0);
  }
  return uVar1;
}

