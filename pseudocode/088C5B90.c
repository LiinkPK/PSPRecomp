/* Entry 0x088C5B90 | file offset 0x000C2B68 | FUN_088c5b90 | bytes 88 */

undefined4 FUN_088c5b90(int param_1)

{
  undefined4 uVar1;
  undefined2 local_3e [23];
  
  uVar1 = 0;
  if (-1 < param_1) {
    local_3e[0] = (undefined2)param_1;
    uVar1 = FUN_088c56d0(DAT_089d7700,DAT_089d7700 + *(short *)(DAT_089d76f8 + 10) * 0x2c,local_3e,0
                        );
  }
  return uVar1;
}

